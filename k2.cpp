#include <stdio.h>

int main() {
	float r, area;
    
    printf("enter redius: ");
    scanf("%f", &r);
    
    area = 3.14 * r * r;
    
    printf("area of circle = %.2f",area);
    return  0;
}