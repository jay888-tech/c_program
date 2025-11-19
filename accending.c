#include<stdio.h>
// to display 3 number input in accending order
int main() {
int a,b,c,order;
printf("enter a b and c : ");
scanf("%d %d %d",&a,&b,&c);
if(a>b){
order=a;
a=b;
b=order;
}
if(a>c){
    order=a;
    a=c;
    c=order;
}
if(b>c){
    order=b;
    b=c;
    c=order;
}
    printf("the accending order is:%d %d %d",a,b,c);

     return 0;
}