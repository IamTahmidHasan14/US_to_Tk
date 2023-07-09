#include<stdio.h>
int main(){

    int a;
    int b;
    float c;
    printf("Enter Taka: ");
    scanf("%d",&a);
    b=a/77.5;
    c=a-(b*77.5);
    printf("%d US$ %f Tk\n\n",b,c);

return (0);
}
