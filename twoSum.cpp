
#include <iostream>
using namespace std;

int main()
{
    int n, a[100], target;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter target: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] == target)
            {
                cout << a[i] << " " << a[j];
                return 0;
            }
        }
    }

    cout << "No pair found";

    return 0;
}
