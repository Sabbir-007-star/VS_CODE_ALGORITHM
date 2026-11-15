
#include <iostream>
using namespace std;

int main() {
    int e = 5;

    int u[] = {0, 0, 1, 1, 2};
    int v[] = {1, 2, 3, 2, 3};
    int w[] = {5, 3, 1, 2, 3};

    // Sort edges by weight
    for (int i = 0; i < e - 1; i++) {
        for (int j = i + 1; j < e; j++) {
            if (w[i] > w[j]) {
                swap(w[i], w[j]);
                swap(u[i], u[j]);
                swap(v[i], v[j]);
            }
        }
    }

    // Initially, every vertex is separate
    int component[] = {0, 1, 2, 3};

    int count = 0, total = 0;

    cout << "MST Edges:\n";

    for (int i = 0; i < e; i++) {
        if (component[u[i]] != component[v[i]]) {
            cout << u[i] << " - " << v[i]
                 << " : " << w[i] << endl;

            int oldLabel = component[v[i]];
            int newLabel = component[u[i]];

            for (int j = 0; j < 4; j++) {
                if (component[j] == oldLabel)
                    component[j] = newLabel;
            }

            total += w[i];
            count++;

            if (count == 3)
                break;
        }
    }

    cout << "Total Weight = " << total << endl;

    return 0;
}
