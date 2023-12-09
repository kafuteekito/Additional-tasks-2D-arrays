#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m, 1));

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
