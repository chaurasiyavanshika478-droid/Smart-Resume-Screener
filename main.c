#include <stdio.h>

int main() {
    int a, b;
    
    // User se pehla number lena
    printf("Enter first number (a): ");
    scanf("%d", &a);
    
    // User se dusra number lena
    printf("Enter second number (b): ");
    scanf("%d", &b);
    
    // Dono ka sum direct print karna
    printf("The sum of a and b is: %d\n", a + b);
    
    return 0;
}
