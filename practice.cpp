
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int vt = 5;

    int g[5][5] = {
        {0, 9, 75, 0, 0},
        {9, 0, 95, 19, 42},
        {75, 95, 0, 51, 66},
        {0, 19, 51, 0, 31},
        {0, 42, 66, 31, 0}
    };

    int picked_edges = 0;
    int selected[5];

    memset(selected, false, sizeof(selected));

    selected[0] = true;

    int u, v, total_cost = 0;

    while (picked_edges < vt - 1) {
        u = 0;
        v = 0;

        int min = 999999;

        for (int i = 0; i < vt; i++) {
            if (selected[i] == true) {
                for (int j = 0; j < vt; j++) {
                    if (!selected[j] && g[i][j] != 0) {
                        if (g[i][j] < min) {
                            min = g[i][j];
                            u = i;
                            v = j;
                        }
                    }
                }
            }
        }

        cout << u << " - " << v << " = " << min << endl;

        selected[v] = true;
        picked_edges++;
        total_cost = total_cost + min;
    }

    cout << "Total Cost = " << total_cost;

    return 0;
}