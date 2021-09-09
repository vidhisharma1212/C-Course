#include<stdio.h> 

int main(){
    int radius;
    printf("Enter the value of the radius \n");
    scanf("%d", &radius);

    float pi= 3.14;

    printf("The value of area of circle is %f square units", pi*radius*radius);
    return 0;
}