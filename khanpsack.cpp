
#include <iostream>
using namespace std;

int main()
{
    int n, w[100], v[100], capacity;
    float total = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> w[i] >> v[i];

    cin >> capacity;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if ((float)v[i] / w[i] < (float)v[j] / w[j])
            {
                swap(w[i], w[j]);
                swap(v[i], v[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (capacity >= w[i])
        {
            total += v[i];
            capacity -= w[i];
        }
        else
        {
            total += (float)v[i] / w[i] * capacity;
            break;
        }
    }

    cout << "Maximum Value = " << total;

    return 0;
}
