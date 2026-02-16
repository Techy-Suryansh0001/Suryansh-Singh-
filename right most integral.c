#include <stdio.h>

int main()
{
    float a;
    int x;
    printf("enter a number");
    scanf("%f",&a);
    
    
    x=(int)a;
	printf("The rightmost digit is %d\n", x % 10);
	
	


    return 0;
}