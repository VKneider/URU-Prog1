#include <stdio.h>

#include <stdlib.h>

#include <time.h>

#include <locale.h>

#include <windows.h>

#include <math.h>

int main() {

   

  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  setlocale(LC_ALL, "spanish");
  int resultado;
  int item, tipo;
  srand(time(NULL));
  int cifra;
  int a,b;

  SetConsoleTextAttribute(hConsole, 11);

  printf("\n ##########################################################################################\n");
  printf("                                         MENU DE OPCIONES                                        \n");
  printf(" ##########################################################################################\n\n");

  printf("    Ingrese el código de la opción deseada: \n\n");

  printf("[1] Practicar Sumas \n");
  printf("[2] Practicar Restas \n");
  printf("[3] Practicar Multiplicaciones \n");
  printf("[4] Practicar Operaciones Aleatorias \n");

  do {

    scanf("%i", & tipo);
    switch (tipo) {

    case 1:
		printf("\n ##########################################################################################\n");	
		printf ("Para realizar sumas de una sola cifra ingrese 1, para sumas de 2 cifras ingrese 2\n");
		scanf ("%i", &cifra);
      do {
			
			
			
			while (cifra<1 || cifra>2){
				
				printf ("Ingrese una opción valida, intente nuevamente\n");
				scanf ("%i", &cifra);
				printf ("\n");
			}
			
			
			if (cifra==2){
				         a = rand() % 101;
        				 b = rand() % 101;
				
			} else if (cifra==1){
				
				        a = rand() % 11;
        				 b = rand() % 11;
				
			} else {
				
				printf ("\n Ingrese una opción valida\n");
				
			}	
			
			
			int c;
			c = a + b;	


        printf("\n ##########################################################################################\n");
        printf("                          APRENDE A SUMAR, RESPONDE CORRECTAMENTE                          \n");
        printf(" ##########################################################################################\n\n\n");

        printf("                           [ %i ] + [ %i ] = [ ? ]\n", a, b);

        while (resultado != c) {
          SetConsoleTextAttribute(hConsole, 11);
          scanf("%i", & resultado);
          if (resultado != c) {
            SetConsoleTextAttribute(hConsole, 12);
            printf("El resultado es incorrecto, intenta nuevamente\n\n");

          }

        }

        printf("\n");
        SetConsoleTextAttribute(hConsole, 10);
        printf("¡Lo lograste! Tu resultado es correcto\n\n");

        SetConsoleTextAttribute(hConsole, 11);
        printf("¡Para seguir practicando ingresa 0, de lo contrario ingresa 1!\n");

        scanf("%i", & item);

      } while (item == 0);

      break;

    case 2:
		printf("\n ##########################################################################################\n");	
		printf ("Para realizar restas con una sola cifra ingrese 1, para restas de 2 cifras ingrese 2\n");
		scanf ("%i", &cifra);
      do {

        
			
			while (cifra<1 || cifra>2){
				
				printf ("Ingrese una opción valida, intente nuevamente\n");
				scanf ("%i", &cifra);
				printf ("\n");
			}
			
			
			if (cifra==2){
				         a = rand() % 101;
        				 b = rand() % 101;
				
			} else if (cifra==1){
				
				        a = rand() % 11;
        				 b = rand() % 11;
				
			} else {
				
				printf ("\n Ingrese una opción valida\n");
				
			}	
		int c;
        c = a - b;

        printf("\n ##########################################################################################\n");
        printf("                          APRENDE A RESTAR, RESPONDE CORRECTAMENTE                          \n");
        printf(" ##########################################################################################\n\n\n");

        printf("                           [ %i ] - [ %i ] = [ ? ]\n", a, b);

        while (resultado != c) {
          SetConsoleTextAttribute(hConsole, 11);
          scanf("%i", & resultado);
          if (resultado != c) {
            SetConsoleTextAttribute(hConsole, 12);
            printf("El resultado es incorrecto, intenta nuevamente\n\n");

          }

        }

        printf("\n");
        SetConsoleTextAttribute(hConsole, 10);

        printf("¡Lo lograste! Tu resultado es correcto\n\n");
        SetConsoleTextAttribute(hConsole, 11);

        printf("¡Para seguir practicando ingresa 0, de lo contrario ingresa 1!\n");

        scanf("%i", & item);

      } while (item == 0);

      break;

    case 3:
    	printf("\n ######################################################################################################\n");	
		printf ("Para realizar multiplicaciones de una cifra ingrese 1, para multiplicacoines de 2 cifras ingrese 2\n");
		scanf ("%i", &cifra);
    	
      do {
			
			
			while (cifra<1 || cifra>2){
				
				printf ("Ingrese una opción valida, intente nuevamente\n");
				scanf ("%i", &cifra);
				printf ("\n");
			}
			
			
			if (cifra==2){
				         a = rand() % 101;
        				 b = rand() % 10;
				
			} else if (cifra==1){
				
				        a = rand() % 11;
        				 b = rand() % 11;
				
			} else {
				
				printf ("\n Ingrese una opción valida\n");
				
			}
			
       
        int c;

        c = a * b;

        printf("\n ##########################################################################################\n");
        printf("                          APRENDE A MULTIPLICAR, RESPONDE CORRECTAMENTE                          \n");
        printf(" ##########################################################################################\n\n\n");

        printf("                           [ %i ] x [ %i ] = [ ? ]\n", a, b);

        while (resultado != c) {
          SetConsoleTextAttribute(hConsole, 11);
          scanf("%i", & resultado);
          if (resultado != c) {
            SetConsoleTextAttribute(hConsole, 12);
            printf("El resultado es incorrecto, intenta nuevamente\n\n");

          }

        }

        printf("\n");
        SetConsoleTextAttribute(hConsole, 10);
        printf("¡Lo lograste! Tu resultado es correcto\n\n");
        SetConsoleTextAttribute(hConsole, 11);

        printf("¡Para seguir practicando ingresa 0, de lo contrario ingresa 1!\n");

        scanf("%i", & item);

      } while (item == 0);

      break;

    default:
      printf("Ingrese un código válido, intente nuevamente \n");
      break;

    case 4: {
    	printf("\n ##########################################################################################\n");	
		printf ("Para realizar operaciones con una sola cifra ingrese 1, para oepraciones de 2 cifras ingrese 2\n");
    	scanf ("%i", &cifra);
    	
      do {

        int d = rand() % 3;
 			

        switch (d) {

        case 1: {
        
        	
         	
			
			while (cifra<1 || cifra>2){
				
				printf ("Ingrese una opción valida, intente nuevamente\n");
				scanf ("%i", &cifra);
				printf ("\n");
			}
			
			
			if (cifra==2){
				         a = rand() % 101;
        				 b = rand() % 101;
				
			} else if (cifra==1){
				
				        a = rand() % 11;
        				 b = rand() % 11;
				
			} else {
				
				printf ("\n Ingrese una opción valida\n");
				
			}
			
          int c;

          c = a + b;

          printf("\n ##########################################################################################\n");
          printf("                          APRENDE A SUMAR, RESPONDE CORRECTAMENTE                          \n");
          printf(" ##########################################################################################\n\n\n");

          printf("                           [ %i ] + [ %i ] = [ ? ]\n", a, b);

          while (resultado != c) {
            SetConsoleTextAttribute(hConsole, 11);
            scanf("%i", & resultado);
            if (resultado != c) {
              SetConsoleTextAttribute(hConsole, 12);
              printf("El resultado es incorrecto, intenta nuevamente\n\n");

            }

          }

          printf("\n");
          SetConsoleTextAttribute(hConsole, 10);
          printf("¡Lo lograste! Tu resultado es correcto\n\n");

          break;

        }

        case 2:

        {
         
        	
         	
			
			while (cifra<1 || cifra>2){
				
				printf ("Ingrese una opción valida, intente nuevamente\n");
				scanf ("%i", &cifra);
				printf ("\n");
			}
			
			
			if (cifra==2){
				         a = rand() % 101;
        				 b = rand() % 10;
				
			} else if (cifra==1){
				
				        a = rand() % 11;
        				 b = rand() % 11;
				
			} else {
				
				printf ("\n Ingrese una opción valida\n");
				
			}
			
          int c;

          c = a - b;

          printf("\n ##########################################################################################\n");
          printf("                          APRENDE A RESTAR, RESPONDE CORRECTAMENTE                          \n");
          printf(" ##########################################################################################\n\n\n");

          printf("                           [ %i ] - [ %i ] = [ ? ]\n", a, b);

          while (resultado != c) {
            SetConsoleTextAttribute(hConsole, 11);
            scanf("%i", & resultado);
            if (resultado != c) {
              SetConsoleTextAttribute(hConsole, 12);
              printf("El resultado es incorrecto, intenta nuevamente\n\n");

            }

          }

          printf("\n");
          SetConsoleTextAttribute(hConsole, 10);

          printf("¡Lo lograste! Tu resultado es correcto\n\n");

          break;

        }

        case 0: {
          
        	
         	
			
			while (cifra<1 || cifra>2){
				
				printf ("Ingrese una opción valida, intente nuevamente\n");
				scanf ("%i", &cifra);
				printf ("\n");
			}
			
			
			if (cifra==2){
				         a = rand() % 101;
        				 b = rand() % 10;
				
			} else if (cifra==1){
				
				        a = rand() % 11;
        				 b = rand() % 11;
				
			} else {
				
				printf ("\n Ingrese una opción valida\n");
				
			}
          int c;

          c = a * b;

          printf("\n ##########################################################################################\n");
          printf("                          APRENDE A MULTIPLICAR, RESPONDE CORRECTAMENTE                          \n");
          printf(" ##########################################################################################\n\n\n");

          printf("                           [ %i ] x [ %i ] = [ ? ]\n", a, b);

          while (resultado != c) {
            SetConsoleTextAttribute(hConsole, 11);
            scanf("%i", &resultado);
            if (resultado != c) {
              SetConsoleTextAttribute(hConsole, 12);
              printf("El resultado es incorrecto, intenta nuevamente\n\n");

            }

          }

          printf("\n");
          SetConsoleTextAttribute(hConsole, 10);
          printf("¡Lo lograste! Tu resultado es correcto\n\n");

          break;

        }

        break;
        } 

        SetConsoleTextAttribute(hConsole, 11);
        printf("¡Para seguir practicando ingresa 0, de lo contrario ingresa 1!\n");

        scanf("%i", & item);


      } while (item == 0);

    }


	case 5:
		
		
		
			do {
			
			float f,g,h;
				
				 f = rand() % 11;
	        g = rand() % 101;
	        h = rand() % 101;
	        float x, diferencia=0.2, resultados;

	        

	        printf("\n ##########################################################################################\n");
	        printf("                          APRENDE ECUACIONES, RESPONDE CORRECTAMENTE                          \n");
	        printf(" ##########################################################################################\n\n\n");

	        /*fx + g = h
	        x=(h-g)/f*/
	        
	        
	        /*b+dx+cx=a
	        x(d+c)=a-b
	        x=(a-b)/(d+c)*/
	        
	        
	        
	        x = (h-g) / f;

	        printf("                           [ %.0fx  +  %.0f  =  %.0f ]\n\n", f, g, h);
	        printf("Ingrese el valor de X tomando en cuenta 2 decimales: \n");

	        while (diferencia >=0.1) {
	                SetConsoleTextAttribute(hConsole, 11);
	                scanf("%f", &resultados);
	                diferencia = fabs(x - resultados);
	                if (diferencia >= 0.1 ) {
	                        SetConsoleTextAttribute(hConsole, 12);
	                        printf("El resultado es incorrecto, intenta nuevamente\n\n");
	                        
	                }

	        }

	        printf("\n");
	        SetConsoleTextAttribute(hConsole, 10);
	        printf("¡Lo lograste! Tu resultado es correcto\n\n");
	        SetConsoleTextAttribute(hConsole, 11);
	        printf("¡Para seguir practicando ingresa 0, de lo contrario ingresa 1!\n");
	        scanf("%i", & item);
	        
	} while (item == 0);
	
		break;

			SetConsoleTextAttribute(hConsole, 11);
	
				
				
				
			
	       
	
		
		
		}
	
		
  
  
	}while (tipo < 1 || tipo > 5);

}
