#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
    double lemda_nm,lemda_m,m,a1,a2,a3,theta1,theta2,theta3,sintheta;
    printf("Enter wavelength in nm : ");
    scanf("%lf",&lemda_nm);
    if(lemda_nm < 380 || lemda_nm >750)
    {
        printf("Out of Range\n",lemda_nm);
    }
    printf("enter the value of m : ");
    scanf("%lf",&m);

    printf("Enter5 the first slit width a1 : ");
    scanf("%lf",&a1);
    printf("Enter the second slit width a2 : ");
    scanf("%lf",&a2);
    printf("Enter the third slit width a3 : ");
    scanf("%lf",&a3);


    lemda_m = lemda_nm * 1e-9;

    sintheta = (m * lemda_m) / (a1 * 1e-6);
    theta1 = asin(sintheta) * (180 / pi);

    sintheta = (m * lemda_m) / (a2 * 1e-6);
    theta2 = asin(sintheta) * (180 / pi);

    sintheta = (m * lemda_m) / (a3 * 1e-6);
    theta1 = asin(sintheta) * (180 / pi);

    printf("the angle for slit a1 :%.2f degrees\n",theta1);
    printf("the angle for slit a2 :%.2f degrees\n",theta2);
    printf("the angle for slit a3 :%.2f degrees\n",theta3);


    if(theta1 > theta2 && theta1 > theta3)
    {
        printf("slit a1 light bend the most\n");
    }
    else if(theta2 > theta1 && theta2 > theta3)
    {
        printf("slit a2 light bend the most\n");
    }
    else if(theta3 > theta1 && theta3 > theta2)
    {
        printf("slit a3 light bend the most\n");
    }

    printf("color of light : ");
    if(lemda_nm >=380 && lemda_nm < 450)
    {
        printf("Voilet\n");
    }
    else if(lemda_nm >= 450 && lemda_nm < 485)
    {
        printf("Blue\n");
    }
    else if(lemda_nm >=485 && lemda_nm < 500)
    {
        printf("Cyan\n");
    }
    else if(lemda_nm >=500 && lemda_nm < 565)
    {
        printf("Green\n");
    }
    else if(lemda_nm >=565 && lemda_nm < 590)
    {
        printf("Yellow\n");
    }
    else if(lemda_nm >=590 && lemda_nm < 625)
    {
        printf("Orange\n");
    }
    else if(lemda_nm >=625 && lemda_nm < 750)
    {
        printf("Red\n");
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}
