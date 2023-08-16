#include <stdio.h>

int main(){
     
    int n,i=0,i2 = 2;
    printf("Enter number: ");
    scanf("%d", &n);

    int num = n;
    int is_prime = 1;
    do{
        num--;
        if (num <= 1) {
            is_prime = 0;
        }
        else {
            i2 = 2 ;
            while (i2 * i2 <= num){
               if (num % i2 == 0) {
                    is_prime = 0;
                    break;
                }
                i2++;
            }
            
        }
        
        if (is_prime) {
            printf("%d ", num);
        }
        is_prime = 1;
    } while (num >= 2);
   
    
    

    return 0;
}