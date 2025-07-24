#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
    float λ1 = 530e-9, λ2 = 700e-9,θ1 = 65.0,m1 = 3, m2 = 2,θ1_rad, d, sintheta2, θ2_rad, θ2_deg;
    printf("the wavelength 1 is: 530nm\n");
    printf("The wavelength 2 is: 700nm\n");
    printf("the order m1 is : 3\n");
    printf("the order m2 is : 2\n");

    θ1 = θ1 * PI / 180.0;

    d = (m1 * λ1) / sin(θ1_rad);

    sintheta2 = (m2 * λ2) / d;

    if (sintheta2 > 1.0)
    {
        printf("No bright fringe (sin(θ2) > 1)\n");
    }
    else
    {

        θ2_rad = asin(sintheta2);
        θ2_deg = θ2_rad * 180.0 / PI;

        printf("Second-order light angle for red light: %.2f degrees\n", θ2_deg);
    }

    return 0;
}
