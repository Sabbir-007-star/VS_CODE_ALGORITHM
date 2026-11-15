#include <iostream>
using namespace std;
int main() {
    int numTests;
    cout << "Enter test cases number: ";
    cin >> numTests;

    while (numTests--) {
        int n;
        cout << "Enter array size: ";
        cin >> n;
        int arr[n];
        cout << "Enter array elements: ";
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int currentSum = 0;
        int maxSum = arr[0];

        for (int i = 0; i < n; i++) {
            currentSum += arr[i];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
            if (currentSum < 0) {
                currentSum = 0;
            }
        }
        cout << "Maximum subarray sum is: " << maxSum << endl;
    }
    return 0;
}
