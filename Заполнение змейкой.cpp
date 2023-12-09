#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int arr[n][m];

    int num = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            for (int j = 0; j < m; ++j)
            {
                arr[i][j] = num++;
            }
        } 
        else {
            for (int j = m - 1; j >= 0; --j)
            {
                arr[i][j] = num++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
        {
            cout << setw(3) << arr[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
