//git add . git commit -m "Added C practice programs" git push
#include <stdio.h>
#include <math.h>
#define PI 3.14159
//use "const" for constant values instead of #define for better type safety and scoping

int main() {
    //use "const" also for units to avoid magic strings and improve maintainability
    const char *lengthUnit = "m";
    const char *areaUnit = "m^2";
    const char *volumeUnit = "m^3";

    double  r, area, c, surface_area, volume, funnel_volume,h;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);

    printf("Enter the height of the funnel: ");
    scanf("%lf", &h);

    area = PI * pow(r, 2);
    c = 2 * PI * r;
    // Surface area of a sphere is calculated using the formula A = 4 * π * r^2
    surface_area = 4 * PI * pow(r, 2);
    // Volume of a sphere is calculated using the formula V = (4/3) * π * r^3
    volume = (4.0/3.0) * PI * pow(r, 3);
    // Volume of a funnel or Circular cone is calculated using the formula V = (1/3) * π * r^2 * h
    funnel_volume = (1.0/3.0) * PI * pow(r, 2) * h;


    printf("Area of the circle: %.2lf %s\n", area, areaUnit);
    printf("Circumference of the circle: %.2lf %s\n", c, lengthUnit);
    printf("Surface area of the sphere: %.2lf %s\n", surface_area, areaUnit);    
    printf("Volume of the sphere: %.2lf %s\n", volume, volumeUnit);
    printf("Volume of the funnel: %.2lf %s\n", funnel_volume, volumeUnit);
}
