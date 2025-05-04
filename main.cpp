#include <iostream>
#include <string>
using namespace std;

int main()
{
  bool gameover;
  int opcion;
  int vidas = 1;
  char avanzar;  // `s` y `n` para avanzar a siguiente pantalla "quieres continuar?"
  bool IniciarJuego; // En vez de modo facil del ejemplo. Habra modo INICIAR juego verdadero e iniciar juego falso
  char salir; // o un salir
   
  gameover = false;


  while (vidas > 0) // Nos va a ser más simple manejarnos con la variable vidas en vez de gameover. Cuando vidas = 0 ahí tiramos pantalla de gameover.
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
    switch (opcion)
        {
         
        case 1:
          cout << "Elegiste iniciar el juego" << endl;
          IniciarJuego = true;  
          break;
        case 2:  
          cout << " CRÉDITOS. JUEGO ASOMBROSO HECHO POR CAMILO, DULCE, LOURDES Y TOMAS! " << endl;
          
          //IniciarJuego = false; tenemos dudas, no sabemos si va
          break;
        default:
        break;
          // cout << "¡Opción incorrecta!\n" << endl;
        }

     while (vidas >=1)
     {
      cout << "EL ETERNAUTA. Juego Iniciado" << endl;
     
      if (IniciarJuego)
      {
        cout << "EMPEZÓ LA AVENTURA. PANTALLA 1" << endl;
        cout << "Querès avanzar? (s/n)" << endl;
        cin >> avanzar;
        if (avanzar == 's' || == 'S') // Si ponemos un ; acá terminamos la secuencia. No se ejecuta el if.
        {
          cout << "Dale, AVANZAMOS A la PANTALLA 2" << endl;
          vidas = 1;
        }

        else if ( avanzar == 'n' || == 'N'); // el problema que teníamos acá es que no habíamos puesto == en ambos lados

        {
          cout << "Decidiste salir a la nieve." << endl;
        
          vidas = 0;
        }

        else // acá había un error de sintáxis. El else no lleva condiciones. El else if si.

        {
            cout << "Opción no válida. Intenta de nuevo." << endl;

        }
      }



      {
 
      cout << "La nieve radioactiva entra por tus poros. Es el final." << endl;
      gameover = true;
 
      cout << "Presione ENTER para continuar...";
      cin.ignore().get();
      system("clear");  

     }


    }


  }

  return 0;

}




// EJEMPLO DE OTRO JUEGO HECHO CON SWITCH PARA VER SI SEGUIMOS NUESTRA ESTRUCTURA O CAMBIAMOS

// //#include <iostream>
// using namespace std;

// int main() {
//     int pantalla_actual = 0; // 0 = Menú
//     int vidas = 3;
//     char input;

//     while (vidas > 0) {
//         system("clear"); // Limpia la pantalla (usar "cls" en Windows)

//         switch (pantalla_actual) {
//             // ----------------------------
//             // PANTALLA 0: MENÚ PRINCIPAL
//             // ----------------------------
//             case 0:
//                 cout << "🔥 EXPEDICIÓN PELIGROSA 🔥\n";
//                 cout << "1. Iniciar Aventura\n";
//                 cout << "2. Instrucciones\n";
//                 cout << "3. Salir\n";
//                 cout << "Elige: ";
//                 cin >> input;

//                 if (input == '1') pantalla_actual = 1; // Ir a Pantalla 1
//                 else if (input == '2') pantalla_actual = 4; // Ir a Instrucciones
//                 else if (input == '3') vidas = 0; // Salir
//                 break;

//             // ----------------------------
//             // PANTALLA 1: BOSQUE
//             // ----------------------------
//             case 1:
//                 cout << "🌳 BOSQUE OSCURO 🌳\n";
//                 cout << "Vidas: " << vidas << "\n\n";
//                 cout << "Un lobo te ataca! ¿Qué haces?\n";
//                 cout << "1. Pelear\n2. Huir\n";
//                 cout << "Elige: ";
//                 cin >> input;

//                 if (input == '1') {
//                     cout << "¡Ganaste el combate! Avanzas a la cueva.\n";
//                     pantalla_actual = 2; // Ir a Pantalla 2
//                 } else {
//                     vidas--;
//                     cout << "Escapaste, pero perdiste 1 vida.\n";
//                 }
//                 cin.ignore(); // Pausa
//                 break;

//             // ----------------------------
//             // PANTALLA 2: CUEVA
//             // ----------------------------
//             case 2:
//                 cout << "🕳️ CUEVA MISTERIOSA 🕳️\n";
//                 cout << "Vidas: " << vidas << "\n\n";
//                 cout << "Hay dos túneles:\n";
//                 cout << "1. Izquierda (oscuro)\n2. Derecha (ruidos)\n";
//                 cout << "Elige: ";
//                 cin >> input;

//                 if (input == '1') {
//                     pantalla_actual = 3; // Ir a Pantalla 3 (Tesoro)
//                 } else {
//                     pantalla_actual = 5; // Ir a Pantalla 5 (Trampa)
//                 }
//                 break;

//             // ----------------------------
//             // PANTALLA 3: TESORO
//             // ----------------------------
//             case 3:
//                 cout << "💎 SALA DEL TESORO 💎\n";
//                 cout << "¡Encontraste un cofre! ¿Abrirlo?\n";
//                 cout << "s/n: ";
//                 cin >> input;

//                 if (input == 's') {
//                     cout << "¡GANASTE EL JUEGO! 🏆\n";
//                     vidas = 0; // Termina el juego
//                 } else {
//                     pantalla_actual = 1; // Regresa al bosque
//                 }
//                 break;

//             // ----------------------------
//             // PANTALLA 4: INSTRUCCIONES
//             // ----------------------------
//             case 4:
//                 cout << "📜 INSTRUCCIONES 📜\n";
//                 cout << "Usa números para elegir opciones.\n";
//                 cout << "Cada decisión afecta tu supervivencia.\n";
//                 cout << "Presiona 's' para continuar...";
//                 cin >> input;
//                 pantalla_actual = 0; // Regresa al menú
//                 break;

//             // ----------------------------
//             // PANTALLA 5: TRAMPA
//             // ----------------------------
//             case 5:
//                 cout << "💀 TRAMPA MORTAL 💀\n";
//                 cout << "¡Caíste en un pozo!\n";
//                 vidas = 0; // Game Over
//                 break;
//         }

//         // Pausa entre pantallas
//         if (vidas > 0 && pantalla_actual != 0) {
//             cout << "\nPresiona Enter para continuar...";
//             cin.ignore();
//             cin.get();
//         }
//     }

//     cout << "FIN DEL JUEGO\n";
//     return 0;
// }