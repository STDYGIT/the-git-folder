// CALCULATOR LITE
#include <stdio.h>
#include <math.h>
int add(int x, int y);
float sqr(int x);
int power(int x,int i);
int sub(int x, int y);
int multi(int x, int y);
int div(int x, int y);
int main()
{
    int s;
    printf("enter what calculation you want to done \n 1. ADDITION  \n 2. SQUARE ROOT \n 3. RAISE POWER \n 4. SUBTRACTION \n 5. MUTIPICATION \n 6. DIVISION \n ENTER  1->6 AS PER YOUR CALCULATION \n: ");
    scanf("%d",&s);

    if(s==1){
        int x,y;
        printf("enter the two numbers : ");
        scanf("%d %d",&x,&y);
        printf("THE SUM IS : \n %d + %d = %d",x,y,add(x, y));  
    }
    else if(s==2){
        float x;
        printf("enter the number : ");
        scanf("%f",&x);
        printf("THE SQUARE ROOT OF %f IS : \n %f",x,sqr(x));
    }
    else if(s==4){
        int x,y;
        printf("enter the two numbers : ");
        scanf("%d %d",&x,&y);
        printf("THE DIFFERENCE IS : \n %d - %d = %d",x,y,sub(x, y));
    }
    else if(s==3){
        int i,x;
        printf("enter the number : ");
        scanf("%d",&x);
        printf("the power of %d :  ",x);
        scanf("%d",&i);
        printf("%d raise to the power %d is : \n%d",i,x,power(x,i));
    }
    else if(s==5){
        int x,y;
        printf("enter the two numbers : ");
        scanf("%d %d",&x,&y);
        printf("THE MULTIPLICATION IS : \n%d * %d = %d",x,y,multi(x, y));
    }
    else if(s==6){
        int x,y;
        printf("enter the two numbers : ");
        scanf("%d %d",&x,&y);
        printf("THE QUOTIENT OF THE NUMBER  : \n%d/%d = %d",x,y,div(x, y));
    }

    return 0;
}

int add(int x, int y)
{
    return x + y;
}
int s;
float sqr(int x)
{
    s = sqrt(x);
    return s;
}
int p;
int power(int x,int i)
{
    p = pow(x, i);
    return p;
}

int sub(int x, int y)
{
    return x - y;
}

int multi(int x, int y)
{
    return x * y;
}

int div(int x, int y)
{
    return x / y;
}
