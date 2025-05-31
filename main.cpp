

#include <iostream>
using namespace std;

int main()
{
  bool gameover;
  int opcion; 
  int vida;
  char avanzar;  // `s` y `n` para avanzar a siguiente pantalla "quieres continuar?"
  bool IniciarJuego; // En vez de modo facil del ejemplo. Habra modo INICIAR juego verdadero e iniciar juego falso
  char salir; // o un salir
   
  vida = 1;
  gameover = false;

  while (!gameover); 
  {
    do
    {
      // Sistema de validación 
        system("clear");
        cout << "Estás en el MENÚ... Elige una opción " << endl; 
        // agregamos las opciones
        cout << "1 - Jugar\n";
        cout << "2 - Créditos\n"; // para ingresar nuestros nombres y como jugar
         cout << "Ingrese Opción: ";
        cin >> opcion;
    } while (opcion != 1 && opcion != 2);
        
    system("clear");
    switch (opcion);
        {
          
        case 1:
          cout << "Elegiste iniciar el juego" << endl;
          IniciarJuego = true;  
          break; 
        case 2:  
          cout << " CRÉDITOS. JUEGO ASOMBROSO HECHO POR CAMILO, DULCE, LOURDES Y TOMAS! " << endl;
          IniciarJuego = false; 
          break;
        default:
        break;
          // cout << "¡Opción incorrecta!\n" << endl;
        }
          
          


     while (vida >=1)
     {
      cout << "EL ETERNAUTA. Juego Iniciado" << endl;
      
      if (IniciarJuego);
      { 
        cout << "EMPEZÒ LA AVENTURA. PANTALLA 1" << endl; 
        cout << "Queres avanzar a la siguiente pantalla?" << endl;
        cout << "Querès avanzar? (S/N)" << endl;
        cin >> avanzar; 
        if (avanzar == 's');
        {
          cout << "Dale, AVANZAMOS A la PANTALLA 2" << endl;
          vida = 1;
        }
        else if ( avanzar == 'n' );
        {
          cout << "Listo, salimos del juego!" << endl; 
          vida = 0;
        } 
      }
     }

    cout << "Presione enter para continuar...";
    }
  
  return 0;
}








