#include <stdio.h> 

int main(void){
    int p, r, t, si; 

    printf("Enter Principal, Rate, Time in line, with space >>>  ");
    scanf("%d %d %d", &p, &r, &t); 

    si = (p * r * t) / 100; 

    printf("%d \n", si);

    return 0; 
}