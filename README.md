#Alarma de puerta Con Arduino
Desarrollo de un sensor de puerta con reed switch. 

El objetivo de la practica es crear una alarma para puerta con un sensor Reed Switch, Resistencia, Led, Cables de conexion y lo más importante es una placa de arduino UNO. 

Antes de comenzar definiremos algunos terminos que se utilizaron en este proyecto. 

𝗥𝗘𝗘𝗗 𝗦𝗪𝗜𝗧𝗖𝗛
Un interruptor de lengüeta o reed switch es un interruptor eléctrico activado por un campo magnético.
Cuando los contactos están normalmente abiertos se cierran en la presencia de un campo magnético; cuando están normalmente cerrados se abren en presencia de un campo magnético. Fue inventado por W. B. Elwood en 1936 cuando trabajaba para Laboratorios Bell.  Son utilizados ampliamente en el mundo moderno como partes de circuitos eléctricos. Un uso muy extendido se puede encontrar en los sensores de las puertas y ventanas de las alarmas antirrobo, el imán va unido a la puerta y el interruptor de lengüeta al marco. En los sensores de velocidad de las bicicletas el imán está en uno de los radios de la rueda, mientras que el interruptor de lengüeta va colocado en la horquilla. Algunos teclados de computadoras son diseñados colocando imanes en cada una de las teclas y los interruptores de lengüeta en el fondo del placa, cuando una tecla es presionada el imán se acerca y activa sus interruptores de lengüetas. Actualmente esta solución es obsoleta, usándose interruptores capacitivos que varían la condición de un circuito resonante. Los interruptores de lengüeta también tienen desventajas, por ejemplo sus contactos son muy pequeños y delicados por lo cual no puede manejar grandes valores de tensión o corriente lo que provoca chispas en su interior que afectan su vida útil. Además, grandes valores de corriente pueden fundir los contactos y el campo magnético que se genera puede llegar a desmagnetizar los contactos.

El desarrollo de este circuito fue algo sensillo, ya que un reed switch es muy sensillo de manipular. 

𝗠𝗔𝗧𝗘𝗥𝗜𝗔𝗟
  ✿ Reed Switch. 
  ✿ 1 Led.
  ✿ 1 resistencia 1k ohms. 
  ✿ Cables de conexión. 
  ✿ 1 Placa Arduino UNO.
  ✿ 1 resistencia 330 ohms. 
  ✿ 1 Protoboard.
  ✿ Buzer 

𝗗𝗘𝗦𝗔𝗥𝗥𝗢𝗟𝗟𝗢
Comenzamos tomando la protoboard, conectamos el reed switch en algún punto de ella, preferentemente en paraleo con alguna de las celdas de corriente y tierra. Después de eso conectaremos un led de cualquier color en la protoboard este es mejor conectarlo algo retirado del reed switch pero en la misma linea. 

En alguno de los extremos del reed switch conectamos la resistencia de 1k ohms, una patita de la resistencia irá en un extremos del reed switch, la otra patita la conetaremos directo a corriente en la protoboard. Tomaremos un cable de conexion macho-macho y lo conectaremos en el puerto 2 de nuestra placa en arduino. Tomaremos el buzer y conectaremos la parte positiva en un extremo del reed switch. Preferentemente el hay que conectar todo del mismo lado, la parte negativa del buzer irá en tierra. 

Continuamos con el led, tomaremos un cable de conexion lo conectaremos con la parte negativa del led y lo mandamos a tierra, tomamos la resistencia de 330 ohms y la conectamos a la parte positiva del led, con un cable de conexion conectaremos la patita de la resistencia que quedo sola y la mandamos a corriente. En seguida tomaremos otro cable de conexion y lo conectaremos con la placa Arduino en el puerto numero 13. 

Por último tomaremos dos cables de conexion y uno lo conectaremos a GND y otro a 5V. Los conectaremos respectivamente en la protoboar, GND irá en tierra (Parte azul de la protoboard) y 5V en corriente (parte roja de la protoboard). 

Hasta aquí hemos concluido la parte física del circuito, el código de la practica se encuentra aquí mismo en formato .ino para que puedas ejecutarlo en tu máquina sin problemas. 





