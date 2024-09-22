#include <stdio.h>

int main() {
    
    int number;
    printf("enter number ");
    scanf("%d", &number);
     
    if(number %2 == 0){
         printf("%d is even. ", number);
     }else{
         printf("%d is not even.", number);
     }
    

    return 0;
}