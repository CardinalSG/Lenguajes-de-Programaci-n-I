#include<iostream>

int main() {
    float numero1, numero2;
    
    std::cout <<"Ingresa un primer numero entre 1-50 y ingresa un segundo numero entre 51-100." << std::endl;
    
    std::cout <<"Ingresa el primer numero: ";
    std::cin >> numero1;
    
    std::cout <<"Ingresa el segundo numero: ";
    std::cin >> numero2;
    
    if(numero1 <=50 && numero2 >=51 && numero2 <=100){
    
    float suma = numero1 + numero2;
    float resta = numero1 - numero2;
    float multiplicacion = numero1 * numero2;
    float division = numero1 / numero2;
    
    std::cout << "La suma es: " << suma << std::endl;
    std::cout << "La resta es: " << resta << std::endl;
    std::cout << "La multiplicacion es: " << multiplicacion << std::endl;
    std::cout << "La division es: " << division << std::endl;
    }
    
    else if (numero1 >=51){
        std::cout <<"Ingresa un primer numero entre 1 y 50." << std::endl;
    }
    
    else if (numero2 >=101){
        std::cout <<"Ingresa un segundo numero entre 51 y 100." << std::endl;
    }
    
    else if (numero2 <=50){
        std::cout <<"Ingresa un segundo numero entre 51 y 100." << std::endl;
    }
    
    else{
        std::cout <<"Ingresa algun numero correcto." << std::endl;
    }
    
    return 0;
}