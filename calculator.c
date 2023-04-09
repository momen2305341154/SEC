#include <stdio.h>
int addi(int a, int b);
int subs(int a, int b);
void command();
int main() {
    int a, b;
    printf("Enter two integer numbers: ");
    scanf("%d%d", &a, &b);

    command();

}
void command(){
    int z;
    printf("Enter 1 or 2: 1 for addition and 2 for substraction: ");
    switch (z) {
        case 1:
        addi();
        break;
        case 2:
        subs();
        break;
        default:
        printf("Not valid number: ");
    }
}

int addi(int a, int b) {
    
    int sum = a + b;
    printf("addition of two numbers: %d", sum);
    return sum;

}
int subs (int a, int b){
    
    int sub = a - b;
    printf("Substraction of two numbers: %d", sub);
    return sub;
}

