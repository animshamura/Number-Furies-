#include <bits/stdc++.h>

using namespace std;

const int mx = 10000;

int a[mx];

void sieve() {
    a[0] = a[1] = 0;
    for (int i = 2; i*i <= mx; i++) {
        if (a[i]) {
            for (int j = 2*i; j <= mx; j+=i) a[j] = 0;
        }
    }
}

int main() {
    memset(a,1,mx);
    sieve();
    int n;
    while(true){
    cin>>n;
    if (a[n]) cout<<n<<" is prime."<<endl;
    else cout<<n<<" is not prime."<<endl;
    }
    return 0;
}
