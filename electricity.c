#include<stdio.h>
/*to display the elecricity bill 
conditions are: 1.if the units are <100 the amount is zero
                2.if the units are >100 && <250 its 5 rs. per unit
                3.if the units are >250 && <500 its 10 rs. per unit
                4.if the units are >500 its 25 rs. per unit*/
 int main () {
    int amount,units,bill;
    printf("enter the units you have used:");
    scanf("%d",&units);
    if(units<=100){
        printf("the amount is:0");
    }
        if(units>100 && units <=250){
        bill=units*5;
        printf("amount is:%d",bill);
        }
        if(units>250 && units <=500){
        bill=units*10;
        printf("amount is:%d",bill);
        }
        if(units>500){
        bill=units*25;
        printf("amount is:%d",bill);
    }
    return 0;
}
            