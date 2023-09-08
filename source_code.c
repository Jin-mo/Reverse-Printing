#include <stdio.h>

int main() {
    int num = 123, reverse_num;
    
    /*printf("Enter the number which you would like to print in the reverse order : ");
    scanf("%d", &num); If we would like to take an input */

    reverse_num = reverse_num + (num % 100);
    printf("%d", reverse_num);

}