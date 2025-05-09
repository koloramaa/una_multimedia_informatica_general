#include <iostream>
#include <string>

using namespace std;

int main()
{

  bool salir_del_juego = false;
  bool gameover;
  int opcion;   // Para el menú principal
  int eleccion; // Para las elecciones del juego
  // bool trapoPiso;
  // bool vestidoQuince;
  // bool cortina; queríamos hacerlo con items pero no sabemos como :(



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

            if (eleccion == 1 || eleccion ==2)

            {
              
              system("clear");

              cout << R"(Narrador: Bien! El traje quedó perfecto gracias a los materiales escogidos.
                      Camilo: Entonces, ¿quién saldrá?

                      Pausa tensa. Todxs se miran entre sí.

                      Narrador:  Parece existir un acuerdo implícito en que te tocará salir a vos. 
                      Ahora, ¡¡¡¿Te arriesgas a salir a la nieve?!!!


              PRESIONE 1. Mirás a todos con mucho cariño, pero les decis que te vas a quedar en la casa. 


              PRESIONE 2. Tomas el liderazgo y salís. (Salto a pantalla 6) 
                      )" << endl;
              cin >> eleccion;

              // la opcion 1 nos lleva a pantalla 6, la opción 2 nos lleva a pantalla 7 (win)

            }

              if (eleccion == 1)

              {
                cout << R"(Camilo: Toda tu vida estuviste esperando para este momento. ¡Todos esos cómics de supervivencia, y tu entrenamiento en los boy scouts!
                Sos realmente el único que puede salir y ayudarnos. Confiamos en vos.
                
                SALÍS AL EXTERIOR)"

                << endl;
                gameover = true;


              }

              if (eleccion ==2)

              {
                cout << R"(Narrador: Los copos de nieve caen a tu alrededor. Se ve como un cuento de hadas. El horizonte se ve prometedor. Un rayo de luz te da esperanzas…  
                La nieve es peligrosa pero tu traje hecho de cortina funciona como aislante. 
                (Por eso el trapo de piso no tiene sentido)  
                Escuchas el grito eufórico de tus amigos en la ventana… Es hora de que te conviertas 
                en el héroe que siempre quisiste…. 
                ¡GANASTE! Pero la aventura recién empieza….)" << endl;





              }



                     


            }


            


            // Pantalla 2.1.2

            else if (eleccion == 3)

            {

              system("clear");

              // Buscar acá la forma de "presionar enter" para seguir y que no sea todo un choclo de una

              cout << R"(Narrador: Bien! El traje quedó perfecto gracias a los materiales escogidos.
              Camilo: Entonces, ¿quién saldrá?

              Pausa tensa. Todxs se miran entre sí.

              Narrador:  Parece existir un acuerdo implícito en que te tocará salir a vos. 
              Aceptás con resignación porque no sabés si va a funcionar. Te tiembla todo el cuerpo mientras
              tus amigos te ayudan a colocarte el traje. Bajás las escaleras. Recibís abrazos y fuerza de todos.
              

              Abrís la puerta. El aire se torna aún más helado. Parece que... ¡Funciona!. 
              
              Te das vuelta y saltás alegre

              mientras ves a tus amigos saludandote por la ventana.......
              .....
              .....

              Tus músculos empiezan a perder fuerza.....

              No entendés muy bien que está pasando. Intentás volver pero tus rodillas ceden.

              Recordás a mamá.

              Tus amigos golpean la ventana...

              Y es lo último que ves.
              
              )" << endl;

              cin.ignore().get();

              gameover = true;

            }

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
