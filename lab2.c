#include <stdio.h>
#include <math.h>

int main()
{
    int choice;

    printf("\n===== PRACTICE PROBLEMS MENU =====\n");
    printf("1. Square and Cube\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area and Circumference of Circle\n");
    printf("4. Volume of Cylinder\n");
    printf("5. Simple Interest\n");
    printf("6. Celsius to Fahrenheit\n");
    printf("7. Fahrenheit to Celsius\n");
    printf("8. Distance Conversion\n");
    printf("9. Minutes to Hours and Minutes\n");
    printf("10. Days to Years, Months, Weeks and Days\n");
    printf("11. Centimeter to Inch\n");
    printf("12. Volume of Sphere and Cube\n");
    printf("13. Movie Running Time Conversion\n");
    printf("14. (A-B)/(C-D)\n");
    printf("15. Distance Between Two Points\n");
    printf("16. Area of Triangle (3 sides)\n");
    printf("17. Area of Triangle (base & height)\n");
    printf("18. Area and Perimeter of Square\n");
    printf("19. Sum, Difference, Product, Quotient\n");
    printf("20. Volume and Surface Area of Box\n");
    printf("21. BMI Calculator\n");
    printf("22. Fencing Cost of Field\n");
    printf("23. Midpoint of Two Points\n");
    printf("24. Taka Note Counter\n");
    printf("25. Paint Required for Room\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        {
            double n;
            printf("Enter number: ");
            scanf("%lf", &n);
            printf("Square = %.2lf\n", n*n);
            printf("Cube = %.2lf\n", n*n*n);
            break;
        }

        case 2:
        {
            double l,b;
            printf("Enter length and breadth: ");
            scanf("%lf%lf",&l,&b);
            printf("Area = %.2lf\n", l*b);
            break;
        }

        case 3:
        {
            double r;
            printf("Enter radius: ");
            scanf("%lf",&r);
            printf("Area = %.2lf\n",3.14*r*r);
            printf("Circumference = %.2lf\n",2*3.14*r);
            break;
        }

        case 4:
        {
            double r,h;
            printf("Enter radius and height: ");
            scanf("%lf%lf",&r,&h);
            printf("Volume = %.2lf\n",3.14*r*r*h);
            break;
        }

        case 5:
        {
            double p,r,t;
            printf("Enter principal, rate and time: ");
            scanf("%lf%lf%lf",&p,&r,&t);
            printf("Simple Interest = %.2lf\n",(p*r*t)/100);
            break;
        }

        case 6:
        {
            double c;
            printf("Enter Celsius: ");
            scanf("%lf",&c);
            printf("Fahrenheit = %.2lf\n",c*9/5+32);
            break;
        }

        case 7:
        {
            double f;
            printf("Enter Fahrenheit: ");
            scanf("%lf",&f);
            printf("Celsius = %.2lf\n",(f-32)*5/9);
            break;
        }

        case 8:
        {
            double km;
            printf("Enter distance in km: ");
            scanf("%lf",&km);

            printf("Meters = %.2lf\n",km*1000);
            printf("Feet = %.2lf\n",km*3280.84);
            printf("Inches = %.2lf\n",km*39370.1);
            printf("Centimeters = %.2lf\n",km*100000);
            break;
        }

        case 9:
        {
            int min;
            printf("Enter minutes: ");
            scanf("%d",&min);

            printf("Hours = %d\n",min/60);
            printf("Minutes = %d\n",min%60);
            break;
        }

        case 10:
        {
            int days;
            printf("Enter total days: ");
            scanf("%d",&days);

            int years = days/365;
            days %= 365;

            int months = days/30;
            days %= 30;

            int weeks = days/7;
            days %= 7;

            printf("Years = %d\nMonths = %d\nWeeks = %d\nDays = %d\n",
                   years, months, weeks, days);
            break;
        }

        case 11:
        {
            double cm;
            printf("Enter length in cm: ");
            scanf("%lf",&cm);

            printf("Inches = %.2lf\n",cm/2.54);
            break;
        }

        case 12:
        {
            double r,side;
            printf("Enter sphere radius and cube side: ");
            scanf("%lf%lf",&r,&side);

            printf("Sphere Volume = %.2lf\n",(4.0/3.0)*3.1416*r*r*r);
            printf("Cube Volume = %.2lf\n",side*side*side);
            break;
        }

        case 13:
        {
            int h,m;
            printf("Enter hour and minute: ");
            scanf("%d%d",&h,&m);

            int total = h*60+m;

            printf("Running Time = %d minutes\n",total);
            printf("Running Time = %.2f hours\n",total/60.0);
            break;
        }

        case 14:
        {
            double A,B,C,D;
            printf("Enter A B C D: ");
            scanf("%lf%lf%lf%lf",&A,&B,&C,&D);

            if(C-D==0)
                printf("Division by zero not possible\n");
            else
                printf("Result = %.2lf\n",(A-B)/(C-D));

            break;
        }

        case 15:
        {
            double x1,y1,x2,y2;

            printf("Enter x1 y1 x2 y2: ");
            scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

            printf("Distance = %.2lf\n",
                   sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)));
            break;
        }

        case 16:
        {
            double a,b,c,s,area;

            printf("Enter three sides: ");
            scanf("%lf%lf%lf",&a,&b,&c);

            s=(a+b+c)/2;
            area=sqrt(s*(s-a)*(s-b)*(s-c));

            printf("Area = %.2lf\n",area);
            break;
        }

        case 17:
        {
            double base,height;

            printf("Enter base and height: ");
            scanf("%lf%lf",&base,&height);

            printf("Area = %.2lf\n",0.5*base*height);
            break;
        }

        case 18:
        {
            double side;

            printf("Enter side: ");
            scanf("%lf",&side);

            printf("Perimeter = %.2lf\n",4*side);
            printf("Area = %.2lf\n",side*side);
            break;
        }

        case 19:
        {
            double a,b;

            printf("Enter two numbers: ");
            scanf("%lf%lf",&a,&b);

            printf("Sum = %.2lf\n",a+b);
            printf("Difference = %.2lf\n",a-b);
            printf("Product = %.2lf\n",a*b);

            if(b!=0)
                printf("Quotient = %.2lf\n",a/b);
            else
                printf("Division by zero not possible\n");

            break;
        }

        case 20:
        {
            double l,w,h;

            printf("Enter length width height: ");
            scanf("%lf%lf%lf",&l,&w,&h);

            printf("Volume = %.2lf\n",l*w*h);
            printf("Surface Area = %.2lf\n",
                   2*(l*w+l*h+w*h));
            break;
        }

        case 21:
        {
            double weight,height;

            printf("Enter weight(kg) and height(m): ");
            scanf("%lf%lf",&weight,&height);

            printf("BMI = %.2lf\n",
                   weight/(height*height));
            break;
        }

        case 22:
        {
            double l,w,cost;

            printf("Enter length width and cost per meter: ");
            scanf("%lf%lf%lf",&l,&w,&cost);

            printf("Total Fencing Cost = %.2lf\n",
                   2*(l+w)*cost);
            break;
        }

        case 23:
        {
            double x1,y1,x2,y2;

            printf("Enter x1 y1 x2 y2: ");
            scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

            printf("Midpoint = (%.2lf , %.2lf)\n",
                   (x1+x2)/2,(y1+y2)/2);
            break;
        }

        case 24:
        {
            int amount;

            printf("Enter amount in taka: ");
            scanf("%d",&amount);

            printf("500 = %d\n",amount/500);
            amount%=500;

            printf("100 = %d\n",amount/100);
            amount%=100;

            printf("50 = %d\n",amount/50);
            amount%=50;

            printf("20 = %d\n",amount/20);
            amount%=20;

            printf("10 = %d\n",amount/10);
            amount%=10;

            printf("5 = %d\n",amount/5);
            amount%=5;

            printf("1 = %d\n",amount);
            break;
        }

        case 25:
        {
            double length,width,height,coverage;

            printf("Enter room length width height: ");
            scanf("%lf%lf%lf",&length,&width,&height);

            printf("Enter paint coverage (sq.m per unit): ");
            scanf("%lf",&coverage);

            double area =
                2*(length*height) +
                2*(width*height);

            printf("Wall Area = %.2lf sq.m\n",area);
            printf("Paint Required = %.2lf units\n",
                   area/coverage);
            break;
        }

        default:
            printf("Invalid Choice!\n");
    }

    return 0;
}