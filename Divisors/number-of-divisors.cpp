#include <bits/stdc++.h>

using namespace std;

const int mx = 10000;

int a[mx];
int prime[mx];

void sieve() {
    int id=0,i;
    for (i = 2; i*i < mx; i++) {
        if (a[i]) {
            for (int j = i<<1; j < mx; j += i) a[j] = 0;
        }
    }
    for (i = 2; i < mx; i++) if (a[i]) prime[id++] = i;
}

int nDiv(int n) {
    int sum = 1, sq = sqrt(n) + 1;
    for (int i = 0; prime[i] < sq; i++) {
        if (!(n % prime[i])) {
            int c = 0;
            while (!(n % prime[i])) {
                n /= prime[i];
                c++;
            }
            sum *= (c+1);
        }
    }
    if (n > 1) sum *= 2;
    return sum;
}

int main() {
   
    memset(a,1,mx);
    sieve();
    
    int n;
    while (cin >> n) cout << nDiv(n) << endl;
}
