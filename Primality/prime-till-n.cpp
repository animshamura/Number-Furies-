#include <bits/stdc++.h>
using namespace std;
int primeContainer[1001];


bool IsPrime(int n) {
    if(n == 2) return true;
    if(n<2 || n%2==0) return false;
    for(int i = 3; i*i <= n; i+=2){
        if(n%i==0) return false;
    }
    return true;
}

void Find() {
    memset(primeContainer,0,1001);
    for(int i = 2; i < 1001; i++){
        if(IsPrime(i)) primeContainer[i] = primeContainer[i-1]+1;
        else primeContainer[i] = primeContainer[i-1];
    }
}

 int main () {
    Find();
    int t;
    cin>>t;
    cout<<"Number of primes till "<<t<<" is "<<primeContainer[t]<<endl;
   
 }
