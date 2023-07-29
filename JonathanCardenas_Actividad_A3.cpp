#include <iostream>
#include <string>

class Empleado {
    private:
    std::string nombre;
    std::string apellidoPaterno;
    std::string apellidoMaterno;
    std::string fecgaNacimiento;
    
    public:
    void capturarDatos() {
        std::cout << "Ingresa tu nombre: ";
        std::getline(std::cin >> std::ws, nombre);
        
        std::cout << "Ingresa tu apellido paterno: ";
        std::getline(std::cin >> std::ws, apellidoPaterno);
        
        std::cout << "Ingresa tu apellido materno: ";
        std::getline(std::cin >> std::ws, apellidoMaterno);
        
        std::cout << "Ingresa tu fecha de nacimiento (DD/MM/AAAA): ";
        std::getline(std::cin >> std::ws, fecgaNacimiento);
    }
    
    std::string generarRFC(){
        std::string rfc;
        
        //Primeros 2 caracteres 
        rfc += apellidoPaterno[0];
        for (char c : apellidoPaterno) {
            if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
                rfc += c;
            }
        }
        
        // 3ra posicion
        if (apellidoMaterno.empty()) {
            rfc += 'X';
        } else {
            rfc += apellidoMaterno[0];
        }
        
        // 4ta posicion
        rfc += (nombre[0] == 'Ñ') ? 'X' : nombre[0];
        
        // 5ta y 6ta posicion (año de nacimiento)
        rfc += fecgaNacimiento.substr(8, 2);
        
        //7ma y 8va posicion (mes de nacimiento)
        rfc += fecgaNacimiento.substr(3, 2);
        
        // 9na y 10ma posicion (dia de nacimiento)
        rfc += fecgaNacimiento.substr(0, 2);
        
        return rfc;
    }
};

int main() {
    Empleado empleado;
    
    empleado.capturarDatos();
    
    std::string rfc = empleado.generarRFC();
    
    std::cout << "El RFC generado es: " << rfc << std::endl;
    
    return 0;
}