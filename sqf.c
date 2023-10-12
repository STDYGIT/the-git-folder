// FIND THE AREA OF SQUARE CIRCLE AND RECTANGLE USING FUNCTIONS AND THERE USESS!!

#include <stdio.h>
float squarearea(float side);
float circlearea(float radius);
float rectanglearea(float length, float breath);

int main()
{
    int v;
    printf("what do you wana find Enter 1 for area of square Enter 2 for area of circle Enter 3 for area of rectangle : ");
    scanf("%d", &v);
    if (v == 1)
    {
        float side;
        printf("enter the side of square : ");
        scanf("%f", &side);
        printf("%f", squarearea(side));
    }

    else if (v == 2)
    {
        float radius;
        printf("enter the radius of circle: ");
        scanf("%f", &radius);
        printf("%f", circlearea(radius));
    }
    else if (v == 3)
    {
        float length, breath;
        printf("enter the length of rectangle : ");
        scanf("%f", &length);
        printf("enter the breath of rectangle : ");
        scanf("%f", &breath);
        printf("%f", rectanglearea(length, breath));
    }
    else
    {
        printf("PLEASE FILL 1 2 3 !!!!!!!!!!");
    }

    return 0;
}

float squarearea(float side)
{
    return side * side;
}

float circlearea(float radius)
{
    return 3.14 * radius * radius;
}

float rectanglearea(float length, float breath)
{
    return length * breath;
}
 
