#include <stdio.h>

int main() {
    
    int num = 123, num1 = 0, num2 = 0, num3 = 0;
    num1 += (num % 10);
    num2 += (num / 10) % 10;
    num3 += ((num / 10) / 10);
    printf("The number in reverse order is %d%d%d", num1, num2, num3);
    return 0;

}