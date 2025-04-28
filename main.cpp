

#include <iostream>
using namespace std;

int main()
{
  bool gameover;
  int vida;
  unsigned short int numero;
  bool opcion1; // para LA SELECCION de menu 
  char avanzar;
   
  vida = 2;
  gameover = false;

  while (gameover); 
  {
    do
    {
      // Sistema de validación 
        system("clear");
        cout << "Estás en el MENÚ... Elige una opción " << endl; 
        // agregamos las opciones
        cout << "1 - Jugar\n";
        cout << "2 - ¿Como jugar?\n";
        cout << "3 - Alumnos \n\n";
    
        cout << "Ingrese Opción: ";
        cin >> numero;
    
        
        switch (numero)
        {
          
        case 1:
          cout << "Elegiste iniciar el juego" << endl;
          opcion1 = true;  
          gameover = false; // a ver que pasa con false XD

            // aca empezaria el juego 
          break; 
        case 2:  
          cout << "Acà se explica como jugar " << endl;
          gameover = true; 
          break;
        case 3:
          cout << "Nosotros somos: Camilo, Dulce, Lourdes y Tomas" << endl;
          gameover = true;
          break;
        default: 
          cout << "¡Opción incorrecta!\n" << endl;
    
          
          cout << "Presione ENTER para continuar..." << endl;
          cin.ignore().get();
    
          gameover = false;
          break;
          }
         // cin >> numero;

     } while (vida >= 1);



     while (vida >=1)
     {
      cout << "EL ETERNAUTA" << endl;
      if (opcion1)
      { 
        cout << "EMPEZÒ LA AVENTURA. PANTALLA 1" << endl; 
        cout << "Queres avanzar a la siguiente pantalla?" << endl;
        cout << "Querès? (S/N)" << endl;
        cin >> avanzar; 
        if (avanzar == 's')
        {
          cout << "AVANZAMOS A PANTALLA 2" << endl;
          vida = 1;
        }
        else if ( avanzar == 'n' )
        {
          cout << "Listo, vamos a pantalla 3." << endl; 
          vida = 0;
        } 
      }
      else 
      {

      }
     }

    cout << "Presione enter para continuar...";
    cin.ignore().get();

    }
  }
  system("clear");
  return 0;
}













