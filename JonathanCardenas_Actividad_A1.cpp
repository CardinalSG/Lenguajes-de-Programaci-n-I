#include <stdio.h>
#include <iostream>

 int main()
 {
     int edad;
     std::cout << "Ingresa tu edad correctamente por favor: ";
     std::cin >> edad;
  
 
     if (edad >=18 && edad <=20){
         std::cout << "Eres mayor de edad en México así que aprende a programar antes de que nos supla una IA." << std::endl;
     } 
     else if (edad >=51){
         std::cout << "Eres mayor de edad, pero recuerda que nunca es tarde para aprender……o pensar en jubilarte." << std::endl;
     }
     else if (edad >=21 && edad <=50){
         std::cout << "Eres mayor de edad en México y en estados unidos ya ponte a aprender a programar sí o sí." << std::endl;
     }
     else {
             std::cout << "Eres menor de edad, mínimo aprende HTML, CSS y JavaScript." << std::endl;
     }
     
     return 0;
}