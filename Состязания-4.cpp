#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> arr(n, vector<int>(m));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int maxThrow = arr[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            maxThrow = max(maxThrow, arr[i][j]);
        }
    }

    int w = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == maxThrow) {
                w++;
                break;            
            }
        }
    }

    cout << w << endl;

    return 0;
}
