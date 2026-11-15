
#include <iostream>
using namespace std;

int main()
{
    int n,  count[100] = {0};
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
    }
    cout << "Sorted array: ";
    for (int i = 0; i < 100; i++)
    {
        while (count[i] > 0)
        {
            cout << i << " ";
            count[i]--;
        }
    }
    return 0;
}
