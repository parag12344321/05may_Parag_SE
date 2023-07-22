//WAP to find area of circle, rectangle and tringle
#include<stdio.h>
int main()
{
    int red; //radius formula pia = 3.14*(r)*(r)
    float aoc = 3.14;//aoc means Area of circle
    int len, wid;
    float b, h, aot = 0.5;//tringle formula = 1/2*base*hight
    //find the area of circle :
    printf("Enter the radius : ");
    scanf("%d", &red);
    printf("The Area of circle is : %f%d", aoc*(red*red));
    printf("\n");

    //find the area of rectangle :
    printf("\nEnter the rectangle length : ");
    scanf("%d", &len);
    printf("Enter the width : ");
    scanf("%d", &wid);
    printf("The area of rectangle is :%d ",len*wid);
    printf("\n");

    //find the area of tringle :
    printf("\nEnter the base : ");
    scanf("%f", &b);
    printf("Enter the hight : ");
    scanf("%f", &h);
    printf("The area of tringle :%f", aot*b*h);
    return 0;
}