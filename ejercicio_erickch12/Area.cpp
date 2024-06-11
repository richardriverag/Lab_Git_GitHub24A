#include <iostream>
#include <math.h>  
using namespace std;

int main (){
        
double volumen, diametro, altura; 
double phi = 3.1416;

int respuesta = 1 ;
while (respuesta == 1)
{
    

    cout << "Para calcular el volumen del cono ingrese: diametro de la base y su altura respectivamente : " << endl;
    cin >> diametro;
    cin >> altura;

volumen = (phi*diametro*altura)/3;

 
    cout << "el volumen del cilindro es: " << volumen << " cm^3"<< endl;
    cout << " si desea calcular otra vez precione '1', si desea salir precione cualquier boton del teclado" << endl;
    cin >> respuesta;
}
return 0 ;
}