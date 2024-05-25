#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x = 10 * 33;
    int y = x + 10;
    int z = x * y;
    // O(1)

    // O(n)
    int n;
    for (int i = 0; i < n; i++) { // O(N)
        // O(1)
    } // O(N)

    int m;
    for (int i = 0; i < n; i++) { // O(N)
        for (int j = 0; j < m; j++) { // O(M)
            // O(1)
        }
    } // O(N * M)

    for (int i = 0; i < n; i++) { // O(N)
        for (int j = 0; j < n; j++) { // O(N)
            // O(1)
        }
    } // O(N ^ 2)

    for (int i = 0; i < n; i++) { // O(N)
        for (int j = 0; j < n; j++) { // O(N)
            for (int k = 0; k < n; k++) { // O(N)

            }
        }
    } // O(N ^ 3)

    for (int i = 0; i < n; i++) { // O(N)
        for (int j = 0; j < n; j++) { // O(N)

        }
    } 
    // O(N ^ 2)

    for (int i = 0; i < m; i++) { // O(M)

    }
    // O(M) 

    // O(N ^ 2 + M)


    for (int i = 0; i < n; i++) { // O(N)
        for (int j = 0; j < n; j++) { // O(N)

        }
    } 
    // O(N ^ 2)

    for (int i = 0; i < n; i++) { // O(N)

    }

    // O(N ^ 2)

    while (n > 1) { // O(log(N)) ?
        n /= 2;
    }

    int x = 1;
    while (x < n) {
        x *= 2;
    } // O(log(N))

    // sets - maps

//////////////////////////////////////////////
    for (int i = 0; i < n; i++) { // O(N)
        int x = 1;
        while (x < n) { // O(log(N))
            x *= 2;
        }
    } // O(N * log(N)) => sort
    //ex:
    int arr[n];
    sort(arr, arr + n); // O(n * log(n))

    for (int i = 0; i < sqrt(n); i++) { // prime check

    } // O(sqrt(N)) < O(N)

    // O(2 ^ N) (exp), O(N!) -> recursion (subsets), permutations
    // 1 2 3
    // 1 3 2
    // 2 1 3
    // 2 3 1
    // 3 1 2
    // 3 2 1

    // 1 2 3
    // {}, {1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}

    for (int i = 0; i < 3 * n + 10; i++) {

    } // O(n) - constant factor
}
