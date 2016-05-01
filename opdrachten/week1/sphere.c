/* Filename: sphere.c */
/* version : 1.0 */
/* Author : Thomas van der Meulen */
/* Studentnummer: 15020169 */
/* purpose of the programma :  calculate the volume of a sphere with a given radius */


# include <stdio.h>

int main(void){
  #define PI  3.14159
  float R, volume; /* R stands for Radius*/

  printf(" Please enter the Radius: \n" );
  scanf("%f",&R );

  volume = 4.0f / 3.0f * PI * (R*R*R);

  printf("The volume of a sphere with the given radius  is: %.1f m^3 \n", volume );



}
