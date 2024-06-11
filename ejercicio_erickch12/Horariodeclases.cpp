#include <iostream>
#include <string> 
using namespace std ;
int main (){

int respuesta = 1;
while (respuesta==1)
{
   

string dia;
cout << "hola porfavor escriba el dia que quiera saber su jornada:"<< endl;
cin >> dia;

if ((dia == "lunes")||(dia == "Lunes")||(dia == "LUNES")){
    
  cout << "Usted a seleccionado el dia " << dia << ":" << endl
  << dia << " 7:00 Programacion - aula E20/P3/E002" << endl
  << dia << " 9:00 Calculo - E21/PB2/E089" << endl
  << dia << " 11:00 Labo Mecanica - E06/P1/E003" << endl;
}

else {

    if ((dia == "Martes") || (dia == "martes")||(dia == "MARTES")){

    
      cout << "Usted a seleccionado el dia " << dia << ":" << endl
      << dia << " 7:00 Programacion - aula E20/P3/E002" << endl
      << dia << " 9:00 Algebra - E14/P3/303" << endl
      << dia << " 11:00 Mecanica - E36/PB/E017" << endl;

     }

    else{

        if ((dia == "Miercoles") || (dia == "MIERCOLES")||(dia == "miercoles")){ 

         cout << "Usted a seleccionado el dia " << dia << ":" << endl
         << dia << " 7:00 Programacion - aula E20/P3/E002" << endl
         << dia << " 9:00 Calculo - E21/PB2/E089" << endl;
    
        }

        else{

            if ((dia == "JUEVES") || (dia == "Jueves")||(dia == "jueves")){

              cout << "Usted a seleccionado el dia " << dia << ":" << endl
              << dia << " 7:00 Deportes - aula E31/PB/E002" << endl
              << dia << " 9:00 Algebra - E14/P3/303" << endl;

            }

            else{

                if ((dia == "VIERNES") || (dia == "Viernes")||(dia == "viernes")){

                   cout << "Usted a seleccionado el dia " << dia << ":" << endl
                 << dia << " 7:00 Comunicacion - aula E21/PB2/E001B" << endl
                 << dia << " 11:00 Mecanica - E36/PB/E017" << endl;

                }

                else {
                    cout << "Ha ingresado mal el dia, porfavor intente de nuevo" <<endl;
                }
            
            }


        }
    
    }

}

cout << "si desea continuar pulse \"1\"" << endl;
cin >> respuesta;

}
 return 0;

}