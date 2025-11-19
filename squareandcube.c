#include<stdio.h>
// to generate square and cube of a given number in tabular form
int main(){
int square,cube,num,n;
printf(" enter the count of numbers:");
scanf("%d",&n);
printf("number\t squar\t cube\n:");
for(int i=0; i<n; i++){
    scanf("%d",&num);
    square=num*num;
    cube=num*num*num;
    printf("%d\t %d\t %d",num,square,cube);
}
return 0;
}
