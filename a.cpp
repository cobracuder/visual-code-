#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> solve(int N, int K, vector<int>& parents, vector<int>& earning_members) {
int h = ceil(log2(N));
 vector<vector<int>> jump(h, vector<int>(N));
 jump[0] = parents;
    jump[0][0] = 0;
    vector<bool> have_salary(N, false);
    vector<int> ans;

    for (int i = 1; i < h; ++i) {
        for (int j = 0; j < N; ++j) {
            jump[i][j] = jump[i - 1][jump[i - 1][j]];
        }
    }

    auto getKthAncestor = [&](int node, int k) {
        int v = 0;
        while (k) {
            if (k & 1) {
                node = jump[v][node];
            }
            k >>= 1;
            ++v;
        }
        return node;
    };

    for (int i : earning_members) {
        int l = 0, r = N - 1;
        if (have_salary[i]) {
            continue;
        }
        int res = i;
        while (l < r) {
            int n = (l + r + 1) >> 1;
            int node = getKthAncestor(i, n);
            if (have_salary[node]) {
                r = n - 1;
            } else {
                res = node;
                l = n;
            }
        }

        have_salary[res] = true;
        ans.push_back(res);
    }

    return ans;
}

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> parents(N);
    vector<int> earning_members(K);

    for (int i = 0; i < N; ++i) {
        cin >> parents[i];
    }

    for (int i = 0; i < K; ++i) {
        cin >> earning_members[i];
    }

    vector<int> result = solve(N, K, parents, earning_members);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}