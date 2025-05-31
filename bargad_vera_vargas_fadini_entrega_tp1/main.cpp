#include <iostream>
#include <string>

using namespace std;

int main()
{

  bool salir_del_juego = false;
  bool gameover = false;
  int opcion;   // Para el menú principal
  int eleccion; // Para las elecciones del juego
  bool trapo = false; // Elementos elegidos por el jugador
  bool cortina = false;
  bool validadorMaterial = false; // Para volver al loop al elegir Vestido de 15
  bool trajeCortina = false;
  bool trajeTrapo = false;
   

  while (!salir_del_juego)

  {
    do
    {
      system("clear");
      cout << "EMPEZAR EL JUEGO (PRESIONE 1)" << endl;
      cout << "SALIR (PRESIONE 2)" << endl;
      cout << "CRÉDITOS (PRESIONE 3)" << endl;
      cin >> opcion;
      switch (opcion)
      {
      case 1:
        system("clear");
        cout << "El juego está por comenzar... PRESIONA ENTER PARA SEGUIR." << endl;
        cin.ignore().get();
        break;
      case 2:
        system("clear");
        cout << "Ha decidido salir del juego..." << endl;
        cin.ignore().get();
        break;
      case 3:
        system ("clear");
        cout << R"(Juego hecho por
          Dulce Vera
          Lourdes Fadini
          Tomás Bargad
          Camilo Vargas
          Alumnos de Artes Multimediales
          Informatica General 1
          Bajo las órdenes del Almirante Tirigall
          y la Vice Almirante Qualindi
          )" << endl;
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

        //-------------------------- Pantalla 1 - Salir y morir  ---------------------------

        if (eleccion == 1)

        {
            // Elección de salir a la nieve. Significa que termina el juego.
            system("clear");
            cout << "Saliste directo a la nieve. Puede parecer un cuento de hadas, pero la nieve te aniquila. Moriste." << endl;
            
            cin.ignore().get();

             gameover = true;

          } 

        //-------------------------- Pantalla 2 - Quedarte en casa  ---------------------------

        else if (eleccion == 2) // Esto lleva a la posibilidad de seguir jugando y hacer un traje.
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

            cout << R"(Todos te m iran a vos para tomar una decisión. Estás nervioso pero sabes que cuentan con vos. Presioná 1 para LLENARTE DE DETERMINACIÓN
            o presiona 2 para mirar hacia el piso y NO DECIR NADA.)" << endl;

            cin >> eleccion;

          } while (eleccion != 1 && eleccion != 2);

          

          // -------------------------- Pantalla 3 - Creación del traje  ---------------------------
          
          
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

              cout << "ElEGÍ UN MATERIAL PRESIONANDO EL NÚMERO CORRESPONDIENTE" << endl;

              cin >> eleccion;

              validadorMaterial = true;


              if (eleccion == 1)

              {
              
              system("clear");

              cout << R"(Narrador: Tomás la cortina del baño y empezás a confeccionar cortes para que cubra distintas partes de tu cuerpo.
              Tus amigos te ayudan cortando y encintando. Después de 30 minutos estás recubierto de plástico. PRESIONA ENTER PARA CONTINUAR)" << endl;
              
              cortina = true;
              trapo = false;
              cin.ignore().get();
              }

              else if (eleccion == 2)
            // ------------------ Pantalla 3.2 - TRAJE Trapo de Piso  --------------------------

              {
                cout << R"(Tu traje fue creado. En el proceso de creación se formaron algunas
                rajaduras producto de lo viejo de los trapos. Presiona ENTER para continuar.)"<< endl; // Con esta opción cuando salga a la nieve morirá.



                trapo = true;
                cortina = false;
                cin.ignore().get();

              }

            else if (eleccion == 3)
            // ------------------ Pantalla 3.3 - TRAJE Vestido de 15   --------------------------

              {
                cout << R"(Esto no parece funcionar. El vestido tiene muchas partes de tela fina y microtul. 
                Parece que la nieve se va a infiltrar por allí. 
                PRESIONA ENTER PARA CONTINUAR.)" << endl;
                validadorMaterial = false;
                trapo = false;
                cortina = false;
                cin.ignore().get();
                
              }


              } while (eleccion < 1 || eleccion > 3 || !validadorMaterial);

             // ------------------ Pantalla 3.1 - TRAJE Cortina de baño --------------------------


              if (cortina)

              { 
                cout << "Presiona ENTER para CREAR EL TRAJE";
                cin.ignore().get();
                
                for (float i = 12.5; i <= 100; i += 12.5) {
                int bloques = i / 12.5; 
                int totalBloques = 8; 
                int bloquesVacios = totalBloques - bloques; 

                     for (int j = 0; j < bloques; j++) {
                    cout << "#";
                }

                     for (int j = 0; j < bloquesVacios; j++) {
                    cout << "-";
                }

                   cout << endl;
                   cout << " " << i << "%" << endl; 


                }

                cin.ignore().get();
                trajeCortina = true;


              }

            
              else if (trapo)
              {
                cout << "Presiona ENTER para CREAR EL TRAJE";
                cin.ignore().get();


                for (float k = 12.5; k <= 100; k += 12.5) {
                int bloques = k / 12.5; 
                int totalBloques = 8; 
                int bloquesVacios = totalBloques - bloques; 

                     for (int m = 0; m < bloques; m++) {
                    cout << "#";
                }

                     for (int m = 0; m < bloquesVacios; m++) {
                    cout << "-";
                }

                   cout << endl;
                   cout << " " << k << "%" << endl; 

                }

                cin.ignore().get();
                trajeTrapo = true;
              }
              
              

           if (trajeCortina) // Esta opción te lleva a sobrevivir.

                {
                  cout << "Felicitaciones. Ya tenes tu traje creado. Salis a la nieve. Sobrevivís. Presiona ENTER para continuar."; 
                  cin.ignore().get();
                  gameover = true;

                } 
                
                  else if (trajeTrapo) // esta opción te lleva a morir porque se te infiltra la nieve en el traje. 
                {
                  cout << "La nieve se infiltra por tu ropa. Es tu final. Presiona enter para continuar.";
                  cin.ignore().get();
                  gameover = true;


                }


      
          }

        }           

        }

      system("clear");



      cout << "El juego ha finalizado." << endl;

      cout << "Presione ENTER para volver al menú principal...";

      cin.get();


      }


    
    else
  
    {

      salir_del_juego = true;
      
      system("clear");

    cout << "Hasta la próxima!" << endl;  
    }


    }

  
  
 

    
  
    return 0;



  }

    


           /*  // Pantalla 2.1.2

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

            } */