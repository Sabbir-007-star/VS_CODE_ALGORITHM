#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int maxSum = a[0];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            if (sum > maxSum)
            {
                maxSum = sum;
            }
        }
    }
    cout << "Maximum Subarray Sum: " << maxSum << endl;
    return 0;
}
