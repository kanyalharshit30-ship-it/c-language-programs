#include <stdio.h>

int main() {
    int arr[5] = {1, 34, 45, 32, 11};
    int largest = arr[0];
    int second = -1;  // assuming all elements are positive

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        } 
        else if (arr[i] > second && arr[i] < largest) 
        {
            second = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Second largest element = %d\n", second);

    return 0;
}
     