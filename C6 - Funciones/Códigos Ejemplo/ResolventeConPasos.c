#include <stdio.h>

#include <locale.h>

#include <windows.h>

#include <math.h>

int main() {

   system("color F0");
   setlocale(LC_ALL, "spanish");
   int item = 0;
   float a = 0, b = 0, c = 0;
   float rp1 = 0, rp2 = 0, dosa = 0;
   float m1 = 0, m2 = 0, m = 0;
   do {
      printf("				 _____________________________________________________________________________________\n");
      printf("				|                                                                                     |\n");
      printf("				| d8888b. d88888b .d8888.  .d88b.  db      db    db d88888b d8b   db d888888b d88888b |\n");
      printf("				| 88  `8D 88'     88'  YP .8P  Y8. 88      88    88 88'     888o  88 `~~88~~' 88'     |\n");
      printf("				| 88oobY' 88ooooo `8bo.   88    88 88      Y8    8P 88ooooo 88V8o 88    88    88ooooo |\n");
      printf("				| 88`8b   88ooooo   `Y8b. 88    88 88      `8b  d8' 88~~~~~ 88 V8o88    88    88ooooo |\n");
      printf("				| 88 `88. 88.     db   8D  8b  d8' 88booo.  `8bd8'  88.     88  V888    88    88.     |\n");
      printf("				| 88   YD Y88888P `8888Y'  8888P'  Y88888P    YP    Y88888P VP   V8P    YP    8888888 |\n");
      printf("				|_____________________________________________________________________________________|\n\n\n");

      printf("				Ingrese el valor de a: ");
      scanf("%f", & a);

      printf("\n				Ingrese el valor de b: ");
      scanf("%f", & b);

      printf("\n				Ingrese el valor de c: ");
      scanf("%f", & c);

      dosa = 2.0 * a;
      rp1 = b * b;
      rp2 = -4.0 * a * c;
      float discriminante = 0;
      discriminante = rp1 + rp2;

      printf("\n\n");

      printf("									 __________\n");
      printf("									|          |\n");
      printf("									|RESOLUCIÓN|\n");
      printf("									|__________|\n\n\n\n");

      printf("				x= (  -(%.2f) +- R( (%.2f)^2 - 4 * (%.2f)(%.2f) ) / 2*(%.2f)\n", b, b, a, c, a);

      printf("				x= (  %.2f +- Raíz (%.2f + %.2f)  ) /%.2f                        \n", -b, rp1, rp2, dosa);
      printf("				x= (  %.2f +- Raíz (%.2f) ) / %.2f\n", -b, discriminante, dosa);

      if (discriminante < 0) {
         printf("				x1= (  %.2f + Raíz (%.2f)*i ) / %.2f\n", -b, -discriminante, dosa);
         printf("				x2= (  %.2f - Raíz (%.2f)*i ) / %.2f\n\n", -b, -discriminante, dosa);

         discriminante = -discriminante;
         discriminante = sqrt(discriminante);
         discriminante = discriminante / dosa;
         m = (-b / dosa);
         printf("				x1=%.2f+%.2fi\n", m, discriminante);
         printf("				x2=%.2f-%.2fi\n", m, discriminante);

      } else {
         printf("				x1= (  %.2f + Raíz (%.2f) ) / %.2f\n", -b, discriminante, dosa);
         printf("				x2= (  %.2f - Raíz (%.2f) ) / %.2f\n\n", -b, discriminante, dosa);
         m1 = ((-b + sqrt(rp1 + rp2)) / dosa);
         m2 = ((-b - sqrt(rp1 + rp2)) / dosa);

         printf("				x1=%.2f\n", m1);
         printf("				x2=%.2f\n\n", m2);
      }

      printf("			   ####################################################################################################\n\n\n");

      printf("				'##::::'##:'##:::'##:'##::: ##:'########:'####:'########::'########:'########::\n");
      printf("				 ##:::: ##: ##::'##:: ###:: ##: ##.....::. ##:: ##.... ##: ##.....:: ##.... ##:\n");
      printf("				 ##:::: ##: ##:'##::: ####: ##: ##:::::::: ##:: ##:::: ##: ##::::::: ##:::: ##:\n");
      printf("				 ##:::: ##: #####:::: ## ## ##: ######:::: ##:: ##:::: ##: ######::: ########::\n");
      printf("				. ##:: ##:: ##. ##::: ##. ####: ##...::::: ##:: ##:::: ##: ##...:::: ##.. ##:::\n");
      printf("				:. ## ##::: ##:. ##:: ##:. ###: ##:::::::: ##:: ##:::: ##: ##::::::: ##::. ##::\n");
      printf("				::. ###:::: ##::. ##: ##::. ##: ########:'####: ########:: ########: ##:::. ##:\n");
      printf("				:::...:::::..::::..::..::::..::........::....::........:::........::..:::::..::\n\n\n");

      printf("				..#######....#####..........##....#######..########......#######..########.########\n");
      printf("				.##.....##..##...##.......####...##.....##.##....##.....##.....##.##.......##......\n");
      printf("				........##.##.....##........##...##............##.......##.....##.##.......##......\n");
      printf("				..#######..##.....##........##...########.....##.........#######..#######..#######.\n");
      printf("				........##.##.....##........##...##.....##...##.........##.....##.......##.......##\n");
      printf("				.##.....##..##...##..###....##...##.....##...##.....###.##.....##.##....##.##....##\n");
      printf("				..#######....#####...###..######..#######....##.....###..#######...######...######.\n\n\n");
      printf("			   ####################################################################################################\n\n\n");
      printf("					Ingrese 1 para repetir el proceso, 0 para finalizar:");
      scanf("%i", & item);
      system("pause");
      system("cls");
   } while (item == 1);

   system("pause");
   return 0;

}
