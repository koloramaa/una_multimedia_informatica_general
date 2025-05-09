#include <iostream>
#include <string>

using namespace std;

int main()
{

  bool salir_del_juego = false;
  bool gameover;
  int opcion;   // Para el menú principal
  int eleccion; // Para las elecciones del juego



  while (!salir_del_juego)

  {
    do
    {
      system("clear");
      cout << "EMPEZAR EL JUEGO (PRESIONE 1)" << endl;
      cout << "SALIR (PRESIONE 2)" << endl;
      cin >> opcion;
      switch (opcion)
      {
      case 1:
        system("clear");
        cout << "El juego está por comenzar..." << endl;
        cin.ignore().get();
        break;
      case 2:
        system("clear");
        cout << "Ha decidido salir del juego..." << endl;
        cin.ignore().get();
        break;
        case 3:
        system ("clear");
        cout <<  "Créditos" << endl;
        cin.ignore().get();
        break;
        
      default:
        system("clear");
        cout << "Introduzca una opción válida." << endl;
        cin.ignore().get();
        break;
      }
    } while (opcion != 1 && opcion != 2 && opcion != 3);

    if (opcion == 1)
    {
      gameover = false;
      while (!gameover)
      {

        //-------------------------- Pantalla 0. Inicio del juego. ---------------------------
        do
        {
          system("clear");
          cout << R"(Sos un estudiante universitario que vive en un departamento del barrio de Almagro con algunos amigxs. 
          Todo comienza cuando, una noche de diciembre mientras jugaban videojuegos, se corta la luz y notan que una nieve sospechosa
           acecha la ciudad. Desde ese momento, tienen que tomar decisiones rápidas para descubrir qué está pasando)" << endl;
          cout << "Elija una opción:" << endl;
          cout << R"(OPCION 1: Salir a ver la nieve.
          (Presione 1)
          )" 
          << endl;
          cout << R"(OPCION 2: Te quedas en casa a pensar otras soluciones.
          (Presione 2)
          )" 
          << endl;
          cin >> eleccion;

        } while (eleccion != 1 && eleccion != 2); 

        //-------------------------- Pantalla 1 ---------------------------

        if (eleccion == 1)

        {
            //pantalla gameover
            system("clear");
            cout << "Saliste directo a la nieve. Puede parecer un cuento de hadas, pero la nieve te aniquila. Moriste." << endl;
            
            cin.ignore().get();

             gameover = true;

          } 

        //-------------------------- Pantalla 2 ---------------------------

        else if (eleccion == 2)

        {

          do

          {

            system("clear");
            
            cout << R"(Narrador: Decidiste quedarte en casa
            Tom: ¡Hey! miren!! un gato en la nieve está muriendo
            Lou: Pobrecito.
            Narrador: Al parecer tienen que sobrevivir a la nieve. Busquen una solución pronto… Sino, todos van a morir como ese gato! 
            Narrador: Tu amigo tarotista está muy preocupado. Intuye que puede ser algo peligroso debido a la muerte del gato..
            Dulce: ¡Boludo! Puede ser.. ¿Qué hacemos?)"

            << endl;

            cout << R"(Todos te miran a vos para tomar una decisión. Estás nervioso pero sabes que cuentan con vos. Presioná 1 para LLENARTE DE DETERMINACIÓN
            o presiona 2 para mirar hacia el piso y NO DECIR NADA.)" << endl;

            cin >> eleccion;

          } while (eleccion != 1 && eleccion != 2);



          // Pantalla 2.1

          if (eleccion == 1 || eleccion == 2)

          {

            do

            {

              system("clear");

              cout << R"(Narrador: Tienen que crear un traje que les permita salir sin ser aniquiladxs por la nieve peligrosa!
              Todxs empiezan a buscar distintos materiales u objetos en el departamento.)" << endl;

              cout << R"(¿Con qué haces tu traje?

              1) Cortina de baño 


              2) Trapo de piso


              3) Vestido de XV de tu hermana.)" << endl; 
              // acá tendría que adquirirse uno de los materiales que va a influir en el resultado posterior

              cout << "ElEGÍ UN MATERIAL PRESIONANDO EL NÚMERO CORRESPONDIENTE" << endl;

              cin >> eleccion;

            } while (eleccion != 1 && eleccion != 2 && eleccion != 3);



            // Pantalla 2.1.1

            if (eleccion == 1)

            {

              system("clear");

              cout << "Este es el final de 2.1.1" << endl;

              cin.ignore().get();

              gameover = true;

            }

            // Pantalla 2.1.2

            else if (eleccion == 2)

            {

              system("clear");

              cout << "Este es el final de 2.1.2" << endl;

              cin.ignore().get();

              gameover = true;

            }

          }

          // Pantalla 2.2

          else if (eleccion == 2)

          {

            do

            {

              system("clear");

              cout << "Esta es la pantalla 2.2 del juego.\n"

                   << endl;

              cout << "Elija una opción:" << endl;

              cout << "OPCION 1 (Presione 1)" << endl;

              cout << "OPCION 2 (Presione 2)" << endl;

              cin >> eleccion;

            } while (eleccion != 1 && eleccion != 2);



            // Pantalla 2.2.1

            if (eleccion == 1)

            {

              system("clear");

              cout << "Este es el final de 2.2.1" << endl;

              cin.ignore().get();

              gameover = true;

            }

            // Pantalla 2.2.2

            else if (eleccion == 2)

            {

              system("clear");

              cout << "Este es el final de 2.2.2" << endl;

              cin.ignore().get();

              gameover = true;

            }

          }

        }

        //-------------------------- Pantalla 3 ---------------------------

        else if (eleccion == 3)

        {

          do

          {

            system("clear");

            cout << "Esta es la pantalla 3 del juego.\n"

                 << endl;

            cout << "Elija una opción:" << endl;

            cout << "OPCION 1 (Presione 1)" << endl;

            cin >> eleccion;

          } while (eleccion != 1);



          // Pantalla 3.1

          if (eleccion == 1)

          {

            system("clear");

            cout << "Este es el final de 3.1" << endl;

            cin.ignore().get();

            gameover = true;

          }

        }

        //-------------------------- Pantalla 4 ---------------------------

        else if (eleccion == 4)

        {

          system("clear");

          cout << "Este es el final de 4" << endl;

          cin.ignore().get();

          gameover = true;

        }

      }



      system("clear");



      cout << "Game Over" << endl;

      cout << "Presione ENTER para continuar...";

      cin.get();

    }

    else

    {

      salir_del_juego = true;

    }

  }



  system("clear");

  cout << "Hasta la próxima!" << endl;



  return 0;

}
