#include <stdio.h>

int main(){
    int a, b;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &a, &b);

    if ((a % 2 == 0) && (b % 2 == 0)){
        printf("Eve/n\n");
    }
    else {
        printf("The numbers are not the same parity.\n");
    }
    return 0;
}