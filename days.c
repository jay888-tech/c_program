#include<stdio.h>
// this code is to find the day in a week
int main(){
    int days;
    printf("enter the number of a day:");
    scanf("%d",&days);
    switch(days) {
    case 1: printf("MONDAY");
            break;
    case 2: printf("TUESDAY");
            break;
    case 3: printf("WEDNESDAY");
            break;
    case 4: printf("THURSDAY");
            break;
    case 5: printf("FRIDAY");
            break;
    case 6: printf("SATURDAY");
            break;
    case 7: printf("SUNDAY");
            break;
    case 8: printf("INVAILD DAY");
            break;
        
    }         
        return 0;
}