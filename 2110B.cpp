
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int count = 0;
        int total = 0;

        for (int i = 1; i < s.size() - 1; i++)
        {
            if (s[i] == '(')
            {
                count++;
            }
            else
            {
                count--;
            }

            if (count < 0)
            {
                total = 1;
                break;
            }
        }

        if (total || count > 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
