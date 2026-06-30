#include <stdio.h>

int main() {
    int arr[] = {12, 1234, 45, 67, 1};
    int n = sizeof(arr) / sizeof(arr[0]); // Array ki length (size) nikalne ke liye
    
    // Step 1: Pehle element ko max aur min maan liya
    int max = arr[0];
    int min = arr[0];
    
    // Step 2: Loop chalakar baaki elements ko compare kiya
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i]; // Naya bada number mila
        }
        if(arr[i] < min) {
            min = arr[i]; // Naya chota number mila
        }
    }
    
    // Step 3: Result print karna
    printf("Maximum element is: %d\n", max);
    printf("Minimum element is: %d\n", min);
    
    return 0;
}
