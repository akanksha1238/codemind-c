#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float s,area;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    s=(float)(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%.2f",area);
    return 0;
}