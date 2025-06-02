// Bargad Tomás
// Fadini Lourdes
// Vargas Camilo
// Vera Dulce

// TP 1 AVENTURA CONVERSACIONAL - IG - 2025



#include <iostream>
#include <string>

using namespace std;

int main()
{

  bool salir_del_juego = false;
  bool gameover = false;
  int opcion;   // Para el menú principal
  int eleccion; // Para las elecciones del juego
  bool pantallaTrapo = false; // Elementos elegidos por el jugador
  bool pantallaCortina = false;
  bool validadorMaterial = false; // Para volver al loop al elegir Vestido de 15
  bool trajeCortina = false;
  bool trajeTrapo = false;
   

  while (!salir_del_juego)

  {
    do
    {
      system("clear");
      cout << R"( 
      
      ❆                                                    B I E N V E N I D O S    A                   ❆
                                    
    ███╗   ██╗    ██╗    ███████╗ ❆  ██╗   ██╗    ███████╗    ❄                                                                          ❆
    ████╗  ██║    ██║    ██╔════╝    ██║   ██║    ██╔════╝                             ❆                          
    ██╔██╗ ██║    ██║    █████╗      ██║   ██║    █████╗                                                         
    ██║╚██╗██║    ██║    ██╔══╝      ╚██╗ ██╔╝    ██╔══╝                                          ❄               ❆
    ██║ ╚████║    ██║    ███████╗     ╚████╔╝     ███████╗           ❆                                            
    ╚═╝  ╚═══╝    ╚═╝    ╚══════╝      ╚═══╝      ╚══════╝                                                       
                                                                                            ❆                     
   ❄                                    ███╗   ███╗     ██████╗     ██████╗     ████████╗     █████╗     ██╗                            ❄   
                        ❄               ████╗ ████║    ██╔═══██╗    ██╔══██╗    ╚══██╔══╝    ██╔══██╗    ██║             
                                        ██╔████╔██║    ██║   ██║    ██████╔╝       ██║       ███████║    ██║             
              ❆                         ██║╚██╔╝██║    ██║   ██║    ██╔══██╗       ██║       ██╔══██║    ██║             
                                         ██║ ╚═╝ ██║    ╚██████╔╝    ██║  ██║       ██║       ██║  ██║    ███████╗        ❆
  ❆                                      ╚═╝     ╚═╝     ╚═════╝     ╚═╝  ╚═╝       ╚═╝       ╚═╝  ╚═╝    ╚══════╝ 
                    ❄                    ❆                                                            ❆

                                              ❆                                          ❆
      
                      ❄ EMPEZAR EL JUEGO (PRESIONÁ 1)                           ❆                            ❄

                      ❅ SALIR (PRESIONÁ 2)                   ❄
   ❄
                      ❆ CRÉDITOS (PRESIONÁ 3)                                 ❆
      )" << endl; 
      cin >> opcion;
      switch (opcion)
      {
      case 1:
        system("clear");
        cout << R"(
        
        
        
                  ❆
        
                                                                                                        ❆
        
        
                                         El juego está por comenzar... PRESIONA ENTER PARA SEGUIR.
                                                     ¿ E S T Á S   L I S T X ?
        
        
        
                                                  ❆
        
        
        )" << endl;
        cin.ignore().get();
        break;
      case 2:
        system("clear");
        cout << "Ha decidido salir del juego..." << endl;
        cin.ignore().get();
        break;
      case 3:
        system ("clear");
        cout << R"(
        
                                                                   𝐂𝐑𝐄𝐃𝐈𝐓𝐎𝐒

                                                                  [█........]


                                                                Juego hecho por:

                                                                
                        ❆ Dulce Vera

                        ❆ Lourdes Fadini

                        ❆ Tomás Bargad

                        ❆ Camilo Vargas


                                                                  [████....]

                                                           Alumnos de Artes Multimediales

                                                              Informatica General 1
          


                                                                  [████████]

                                                        Bajo las órdenes del Almirante Tirigall
          
                                                            y la Vice Almirante Qualindi
        
           ❄ Presione ENTER para continuar.
          
          )" << endl;
        cin.ignore().get();
        opcion = 0;
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
          cout << R"(
                                                                                                             ..............................................................................................................................................

          Sos un estudiante universitario que vive en un departamento del barrio de Almagro con algunos amigxs. 
                                                 
                                                                           
                       .|                                
                       | |                               
                       |'|            ._____             
               ___    |  |            |.   |' .---"|     
       _    .-'   '-. |  |     .--'|  ||   | _|    |     
    .-'|  _.|  |    ||   '-__  |   |  |    ||      |     
    |' | |.    |    ||       | |   |  |    ||      |     
 ___|  '-'     '    ""       '-'   '-.'    '`      |____ 
   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 
          Una noche de diciembre mientras jugaban videojuegos, se corta la luz.
          Uno de tus amigos detecta algo raro al ver por la ventana. Notan un polvo sospechoso en el aire.
          Se miran entre todxs sin saber exactamente que hacer, hasta que decidís 
          que hay que tomar una decisión...
          


                    ELEGÍ una opción:

                  OPCION 1: Salir a la calle para ver que está pasando. (PRESIONÁ 1)
          
                  OPCION 2: Te quedas en casa a pensar otras soluciones. (PRESIONÁ 2)
          
          )" 
          << endl;
          cin >> eleccion;

        } while (eleccion != 1 && eleccion != 2); 

        //-------------------------- Pantalla 1 - Salir y morir  ---------------------------

        if (eleccion == 1)

        {
            // Elección de salir a la nieve. Significa que termina el juego.
            system("clear");
            cout << R"(Tus amigos están discutiendo sobre qué hacer. Algunos dicen que salir a ver que
            pasa es lo mejor. Los otros dudan. Tomás, fanático de los cómics, dice haber leído una historieta
            antigua que advertía de los peligros de una posible nevada radioactiva. Les decís a tus amigos
            que no se preocupen. Vos sos el que va a salir a ver que pasa. Todos te miran asustados, pero
            vos no tomás ni un segundo y decidís salir.

            Luego de forzar un poco la puerta de la entrada podes salir. Tus amigos te celebran desde
            la ventana del balcón. Pero de repente...
            
            Tus músculos empiezan a tensarse.
      No entendés muy bien que está pasando.
                         Tu cara representa el más absoluto terror.
      Intentás volver pero tus rodillas ceden.

                                          Recordás a mamá.

            Tus amigos golpean la ventana...
            Y eso es lo último que ves.
              
            Presiona ENTER para continuar.)" 
            
            
            
            << endl;
                       
            cin.ignore().get();
             gameover = true;

          } 

        //-------------------------- Pantalla 2 - Quedarte en casa  ---------------------------

        else if (eleccion == 2) // Esto lleva a la posibilidad de seguir jugando y hacer un traje.
        {

          do

          {

            system("clear");
            
            cout << R"(: 
            Decidiste: quedarte en casa.
            Lo que parecía un polvo extraño ahora parece nieve. Se acumula en los techos de las casas que ven desde el departamento.
            
            Tomás: ¡Hey! miren!! El gato de la vecina salió al balcón...                                                      
                           *@@@        
                             @#      
               @ #           %@      
             @@@@@           @@      
             @@@@@           @       
       @     @@@@@:*@@%-   @@@       
        #@@@@@@@@@@@@@@@@@@@@        
           @@@@@@@@@@@@@@@@@@        
             @@@@@@@@@@@@@@@@.       
               @@      @@@@@@@       
              @@        @@@ @@@      
              @@       @@@    @      
                             @@      
                                                                                                                                                   
 Todos miran un salto ágil del felino que pierde fuerza a los pocos segundos. Se quedan estupefactos. Lo peor ha sido confirmado.

            Tomás: Creo que esto es realmente grave.
            Lour: Necesitamos buscar una solución.
            Camilo: Ay no, ¿y el resto de la gente? No me digan que...
            Dulce: ¡Boludo! ¿Qué hacemos?

  Todos te miran a vos para tomar una decisión. 
  Estás nervioso pero sabes que cuentan con vos. 

                              PRESIONÁ 1 - para LLENARTE DE DETERMINACIÓN 

                              PRESIONÁ 2 - para mirar hacia el piso y NO DECIR NADA.
                              
                              )" << endl;

            cin >> eleccion;

          } while (eleccion != 1 && eleccion != 2);

          

          // -------------------------- Pantalla 3 - Creación del traje  ---------------------------
          
          
          if (eleccion == 1 || eleccion == 2)

          {

            do

            {

              system("clear");

              cout << R"(
                                                                                                          
                                                                                            
############################################# 
#############*  ##*  ########################                         T I E N E N    Q U E   C R E A R  
############ :#######* +##################### 
##########  ###########* *###* ##############                                    UN TRAJE
######### *##############* * #  ############* 
####### -#################   * ############# #                    Q U E   L E S   P E R M I T A    S A L I R 
####* ###################  #*#  ##########* ##
=*######################*    ####   *###   ###
########################    ##################
#######################   *###################
######################   #####################
#####################   ######################
####################   #######################                    sin ser aniquiladxs 
###################  *########################                          POR LA NIEVE
##################  ##########################
#################  *##########################                   P E L I G R O S A 
################  ############################
###############  #############################
##############  ##############################
############# *###############################
############ #################################       Les decís a tus amigos que empiecen a buscar distintos              
########### ##################################          materiales en el departamento para crear un traje impermeable.
########## ###################################  
######### ####################################
######## #####################################
#######*######################################
##############################################
                                                                                 
)" << endl;

              cin.ignore().get();

              cout << R"(Después de un rato todos se reúnen con ideas de materiales. 
              
              ✃ ¿Con qué haces tu traje? ✃

              PRESIONÁ 1 - Cortina de baño

              PRESIONÁ 2 - Trapo de piso

              PRESIONÁ 3 - Vestido de XV de tu hermana.)" << endl;

              cout << "ElEGÍ UN MATERIAL: " << endl;

              cin >> eleccion;

              validadorMaterial = true;


              if (eleccion == 1)

              {
              
              system("clear");

              cout << R"(

........: ..............:.::  :. 
..=.::::.............*:..::---.*.
......:..............        -:..
..... #%#@-..........        -:..          DECIDÍS QUE TU TRAJE VA A ESTAR 
....+  -+++*-........        -:..
....+: :.............        -:..                      COMPUESTO 
....+   -............        -:..
....*   -:.:..-.:....        -:..              POR LAS CORTINAS DE BAÑO. 
....+:::....  ..  ...        -:..
...:+::......----....        -:..         Estamos en un apocalipsis, asi que ¿Supongo ya no te importaría
....+:::.:...........        -: :          estar duchandote y que por error te vean desnudx....?
....+:...:.:.........        :.::
....+::: . :.........        -:..
.:                             -:
.....#######*########        -:..          PARECE SER LO MÁS IMPERMEABLE
:::..################        -:..                     Y TIENE BUENA RESISTENCIA.... 
.....-##########%####%###%%%-....
......:%#########%%####%%%%-.....
:::::::::@%-:::::::-:::%=::::::::           PRESIONÁ enter para continuar.


  )" << endl;
              
              pantallaCortina = true;
              pantallaTrapo = false;
              cin.ignore().get();
              }

              else if (eleccion == 2)
            // ------------------ Pantalla 3.2 - TRAJE Trapo de Piso  --------------------------

              {
                cout << R"(
                
                Decidís que tu traje va a ser compuesto por varios trapos de piso que pudieron recolectar. 
                      Estamos en un apocalipsis, asi que ¿Supongo que ya no importa si se te derrama tu Coca-Cola...?

                                              
                                @@@@@@@@.                     
                              @@@@@@@@@@@@@@@*                
                            =@@@@@@@@@@@@@@@@@@@@@*           
                         @@@@@@@@@@@@@@@@@@@@@@%@@@@%       
                      @@@@@@@@@@@@@@@@@@@@@@%@:@@@@-@-     
                    =@@@@@@@@@@@@@@@@@@@@@@@%@ @#*@@.@@     
               :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@+@@     
                 +@@@@@@@@@@@@@@@@@@@@@@@%  @%@@%*@@@%      
                     @@@@@@@@@@@@@@@@@@@                    
                          :@@@@@@@@@@@@@                      
                              @@@@@@@                         
                                               
                -- Son de una material poroso que puede servir. Son un poco viejos y algunos tienen un poco de daño.


               PRESIONA ENTER PARA CONTINUAR.)" << endl; // Con esta opción cuando salga a la nieve morirá.



                pantallaTrapo = true;
                pantallaCortina = false;
                cin.ignore().get();

              }

            else if (eleccion == 3)
            // ------------------ Pantalla 3.3 - TRAJE Vestido de 15   --------------------------

              {
                cout << R"(
                                                                                           
                         

               @@@               
            @@@@@@@@@            
            @@@@:@@@@               Dulce: Aww... es muy hermoso.
             @@ @ @@                Lourdes: ¡AY SI, TE VA A QUEDAR DI-VI-NO!
             @@@ @@@                Camilo y Tomás: *se estallan de risa*
              @@@@@              
              @@@@@                    Esto no parece funcionar. 
           =@@ @@@@ @:           
         @@@@ @ @ @@@ @@                  El vestido tiene muchas partes de tela fina, microtul y glitter.
       :@@@  @@@@@@ @@ @@:       
      @@ @ *@@ @@@@@ @@ @@@           ¡PARECE QUE LA NIEVE SE VA A INFILTRAR POR AHÍ!
     @@@@ @@@@@@@ @@-@@@ @@@     
    @@ @ @@@ @@@@@ @@@@@@ @@@             No es lo suficientemente impermeable.
   @@@@*@@@@@@@@@ @@@@@@@@ @@@   
  @@@@@ @@ @@@ @ @@@@@@@@@ @@@@  
 @@@  @@ @@* + @@  @@*@@@@@-@@@@ 
 @@@@@ @@@@@ @@@@@@@ @@ @@@ @ @@ 
@@@@@@ @%@@ @  @@@*@@@@@  @ @@@@@
@@@@@@ @@@@ @@@%@  @ @@@ @@ @@@@@
* @@@@@@@@@@@@@@@@@@@@@@@@@@@@@ *
 %@@@  @@@@@@@@@@@@@@@@@@@  @@@# 
       @@@@@@@@@@@@@@@@@@@       
         
                PRESIONA ENTER PARA CONTINUAR.)" << endl;
                validadorMaterial = false;
                pantallaTrapo = false;
                pantallaCortina = false;
                cin.ignore().get();
                
              }


              } while (eleccion < 1 || eleccion > 3 || !validadorMaterial);

             // ------------------ Pantalla 3.1 - TRAJE Cortina de baño --------------------------


              if (pantallaCortina)

              { 
                cout << R"(
                                                                  
                       ########                                      
                       ##      ##                                      
                       ##        ##                          ########  
                       ##                                ############  
                       ##########                ############                       
                       ######  ##############                             
                       ##############                                                   
                       ######  ##############            
                       ##########                ############        
                       ##                                ############  
                       ##        ##                            ######  
                       ##        ##                                    
                       ########    

                Agarran la cortina y empiezan a trabajar sobre ella. Con tijeras
                y cinta medidora comienzan a hacer los cortes y colocarla sobre tu cuerpo.


                                             -- Presiona ENTER para COSER el TRAJE! -- 
                
                )";
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
                  
                  cout << "PRESIONA ENTER para SEGUIR agregando COSTURAS" ;
                  cin.ignore().get();
                

                }
    
                cout << ""; // Acá poner un ASCII del traje
                
                cout << R"(
                
                El traje está FINALIZADO. 
                ¡Te queda bastante bien! Usás guantesen las manos y borcegos que tenías en el armario.
                              -- Presiona ENTER para salir a la nieve -- )";
                cin.ignore().get();
                trajeTrapo = false;
                trajeCortina = true;


              }

            
              else if (pantallaTrapo)
              {
                cout << R"(

                                                  Juntan varios pedazos de trapo. 
                Con tijera y cinta medidora empiezan a 
                realizar cortes para adaptarlo a tu cuerpo. 
                
                Presiona ENTER para COSER el TRAJE)";
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
                  cout << "PRESIONA ENTER para SEGUIR agregando COSTURAS" ;
                  cin.ignore().get();
                }
                cout << R"(
                

                El traje está FINALIZADO. Es un poco tosco y tenes miedo
                de algunas rajaduras que se fueron formando en el proceso.
                                  
                El material no es muy... amable...

                                        -- Presiona ENTER PARA SALIR A LA NIEVE -- .)" 
                                        << endl;
                cin.ignore().get();
                trajeCortina = false;
                trajeTrapo = true;
              }

           if (trajeCortina) // Esta opción te lleva a sobrevivir.

                {
                  cout << R"(
                  Te fundís en un abrazo con tus amigos. Lo que parecía una noche como tantas
                  otras se convirtió en un verdadero desafío a tu coraje. Pero llegaste hasta acá y lo hiciste.
                  Estás orgulloso de este gran trabajo en equipo.
                  
                  Finalmente salís a la calle después de luchar contra la puerta de entrada.
                  
                  Tus amigos miran expectantes desde la ventana. Te cuesta respirar pero... ¡te sentis bien!.

                  Ellos celebran, te hacen señales de besos, se abrazan entre ellos. Mirás al horizonte y
                  ves la ciudad como nunca la viste. Todo está cubierto de blanco. Es hermoso y desesperante al mismo tiempo.
                  
                  
                  Y recién empieza...

                                        -- Presiona ENTER para FINALIZAR EL JUEGO. --

                  )" ;
                  cin.ignore().get();
                  gameover = true;

                } 
                
                  else if (trajeTrapo) // esta opción te lleva a morir porque se te infiltra la nieve en el traje. 
                {
                  cout << R"(
                  
                  Te fundís en un abrazo con tus amigos. Lo que parecía una noche como tantas
                  otras se convirtió en un verdadero desafío a tu coraje. Pero llegaste hasta acá y lo hiciste.
                  Estás orgulloso de este gran trabajo en equipo.
                  
                  Finalmente salís a la calle después de luchar contra la puerta de entrada.
                  
                  Tus amigos miran expectantes desde la ventana. Te cuesta respirar pero... 

.. ..  .. ..  .. ..  .. ..  @@@@@@*.. ..  No.
........................@@@@@@@@@@@@......  Algo... algo está saliendo mal.
  .. ..  .. ..  @@@@@@@@@@@@@@@@@@@@ .. ..       Te empezás a marear y es ahí que lo sentís.
.. ..  .. .. @@@@@@@@@@@@@@@@@@@@@@@. ..   Una rajadura en el antebrazo..... 
............@@@@@@@@@@@@@@@@@@@@@@@.......            y... Si. Se infiltró un copo.
  .. ..  .@@@@@@@@@@@@@@@@@@@@@@@..  .. ..
.. ..  ..@@@@@@@@@@@@@@@@@@@.. ..  .. ..   Tus músculos se TENSAN.
........@@@@@@@@@@@@@@@@@@@@.............. Tu visión se va APAGANDO.
  .. ..@@@@@@@@@@@@@@@@@@@@.  .. ..  .. .. Tus amigos gritan contra la ventana.
.. ..  @@@@@@@@@@@@@@@@@@@@ .. ..  .. ..  
......@@@@@@@@@@@@@@@@@@@@@@@@:...........
  .. .@@@@@@@@@@@@@@@@@@@@@@@@@@@..  .. ..                               Pensás e n   m  a  m  á...
.. .. @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ ..  
.......@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@..     Caés a la nieve.
  .. ..@@@@@@@@@@@@@@@@@. ..  .. ...@%. ..
.. ..  @@@@@@@@@@@@@@@@@@.  .. ..  .. ..  
.....@@@@@@@@@@@@@@@@@@@@@@...............
  .#@@@@@@@@@@@@@@@@@@@@@@@@  .. ..  .. ..
..+@@@@@@@@@@@@@@@@@@@@@@@@@.. ..  .. ..  
..@@@............@@@@@@@@@................
                  Presiona ENTER para FINALIZAR EL JUEGO.
                  
                  )" ;
                  cin.ignore().get();
                  gameover = true;
                }


      
          }

        }           

        }

      system("clear");



      cout << R"(
      
      El juego ha finalizado.
      
      
      Gracias por jugar 
      
      
      )" << endl;

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