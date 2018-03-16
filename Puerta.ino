 /*Incluimo la libreria para poner en modo sleep el arduino uno*/
    #include <avr/sleep.h>

   /*Declaramos las variables que se utilizarán en el arduino*/
    int contacto = 2; //Se conecta el reed switch
    int led= 13; //Se conecta el led 
    
    void wake ()
    {
      //Cancela el sleep commo una precaución
      sleep_disable();
      //Detiene el proceso por un tiempo.
      detachInterrupt (0);
    }
    
    void setup () 
      {
      digitalWrite (2, HIGH); //Activamos el reed switch
      pinMode(contacto,INPUT); //Decimos que el reed switch será un recurso de entrada
      pinMode(led, OUTPUT);  //Decimos que el led será un recurso de salida.
      ADCSRA = 0;  
      set_sleep_mode (SLEEP_MODE_PWR_DOWN);  
      sleep_enable(); //Habilitamos el modo sleep. 
       /* Este comando también asigna el modo en el cual la interrupción externa es generada 
       dependiendo del estado del pin especificado, LOW, CHANGE cuando el estado del pin cambia, 
       RISING cuando el pin va de LOW a HIGH o FALLING cuando el pin va de HIGH a LOW.*/
      attachInterrupt (contacto, wake, RISING);     
        interrupts ();  
      sleep_cpu ();   
    }

    //Metodo que se ejecuta constantemente. 
    void loop(){
      //Si el reed switch está prendido entonces el led se encenderá. 
      if (digitalRead(contacto)==HIGH){
        //El led se enciende si la condición da True.
          digitalWrite(led,HIGH);  
          //En caso de que no se así.
      }else{
        //El led será apagado.
        digitalWrite(led,LOW); 
      }
    }

