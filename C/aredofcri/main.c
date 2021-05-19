#include <stdio.h>
#include <stdlib.h>
    int radii;
    int diameter;
    float pi=3.14;
void area()
{

    float area_of_circle=(pi*radii*radii);
    printf("area of circle:%f\n",area_of_circle);
}
void cir()
{
    float cir=2*pi*radii;
    printf("cir of circle:%f\n",cir);
}
int main()
{
    printf("enter the radii of circle:");
    scanf("%i",&radii);
    diameter=2*radii;
    printf("diameter of circle:%i\n",diameter);
    area();
    cir();
    return 0;
}
