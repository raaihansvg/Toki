#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();

int min_attacks(int N, vector<int>& A) {
    vector<vector<int>> dp(N + 1, vector<int>(N + 1, INF));
    dp[0][1] = 0; 
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            if (dp[i - 1][j] != INF) {
                
                if (j + 1 <= N) {
                    dp[i][j + 1] = min(dp[i][j + 1], dp[i - 1][j] + (A[i - 1] != j + 1));
                }
                // Pilihan 2: Teleport ke bagian 1
                dp[i][1] = min(dp[i][1], dp[i - 1][j] + (A[i - 1] != 1));
            }
        }
    }
    return *min_element(dp[N].begin(), dp[N].end());
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    cout << min_attacks(N, A) << "\n";
    return 0;
}
