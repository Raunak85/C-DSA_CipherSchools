// Pair Sum, find the target value in array that sum of element of array is equal to target value or not
// input {3, 1, 5, 10, 0, 2, 7} , is present (2,7): input {3,  5, 10, 1, 4, 7} is present (5,4);

#include <iostream>
using namespace std;

int main() {
    int arr[] = {3,  5, 10, 1, 4, 7};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    bool pairExists = false;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            if (sum == target) {
                pairExists = true;
                cout << "Yes! Sum pair exists: (" << arr[i] << ", " << arr[j] << ")\n";
                break;
            }
        }
        if (pairExists) {
            break;
        }
    }

    if (!pairExists) {
        cout << "No! Sum pair does not exist\n";
    }

    return 0;
}
