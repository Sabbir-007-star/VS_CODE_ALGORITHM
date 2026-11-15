#include <iostream>
using namespace std;
int partition(int a[], int p, int r)
{
    int pivot = a[r]; 
    int i = p - 1;    

    for (int j = p; j < r; j++) 
    {
        if (a[j] <= pivot)
        {
            i=i+1;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[r]);
    return (i + 1); 
}
void Quicksort(int a[], int p, int r)
{
    if (p < r)
    {
        int q = partition(a, p, r);
        cout << "Pivot Index: " << q << "\n"; 

        Quicksort(a, p, q - 1);
        Quicksort(a, q + 1, r);
    }
}

int main()
{
    int n;
    cout << "Enter Array Size: ";
    cin >> n;
    int a[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    Quicksort(a, 0, n - 1);

    cout << endl << "Sorted Array: ";

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
        
    cout << endl;

    return 0;
}