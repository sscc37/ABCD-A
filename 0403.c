#include <stdio.h>
#include <math.h>
#define ¥è = 3.1415926

int main() {
   
    double x, y;      
    double r, angle_degree;  

   
    printf("Á÷±³ ÁÂÇ¥¸¦ ÀÔ·ÂÇÏ¼¼¿ä. (x, y): ");
    scanf_s("%lf %lf", &x, &y);

    r = sqrt(x * x + y * y);   
    angle_degree = atan2(x, y);       

    printf("±Ø ÁÂÇ¥.: r = %.1lf, ¥è = %.1lf\n", r, angle_degree);

    
    printf("±Ø ÁÂÇ¥¸¦ ÀÔ·ÂÇÏ¼¼¿ä. (r, ¥è ): ");
    scanf_s("%lf %lf", &r, &angle_degree);

    x = r * cos(angle_degree);  
    y = r * sin(angle_degree); 

    printf("Á÷±³ ÁÂÇ¥.: x = %.1lf, y = %.1lf\n", x, y);

    return 0;
}
