#include<stdio.h>
/* input an positive integer number and diplay its odd 
number from range[1,n]*/
int main() {
int n;
printf("enter the value of n:");
scanf("%d",&n);
for(int i=1; i<=n; i+=2){
    printf("the range of odd number is %d\n",i);
}
return 0;
}