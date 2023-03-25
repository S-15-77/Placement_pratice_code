#include <stdio.h>

void printZeroSumSubarrays(int arr[], int n) {
    // iterate over all subarrays
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            
            // check if subarray sum is zero
            if (sum == 0) {
                // print subarray
                printf("{ ");
                for (int k = i; k <= j; k++) {
                    printf("%d ", arr[k]);
                }
                printf("}\n");
            }
        }
    }
}

int main() {
    int arr[] = {4, 2, -3, -1, 0, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Input array: { ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("}\n");
    
    printf("Subarrays with zero sum:\n");
    printZeroSumSubarrays(arr, n);
    
    return 0;
}
