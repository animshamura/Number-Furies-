#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll modulo(ll b, ll e, ll mod) {
   ll a = 1;
   while (e>0) {
      if (e%2 == 1){
         a = (a*b) % mod;
         b = (b*b) % mod;
         e = e/2;
   }
   }
   return a%mod;
}

bool Fermat(ll m, int itr) {
   if (m == 1) return false;
   
   for (int i = 0; i < itr; i++) {
      ll x = rand() % (m - 1) + 1;
      if (modulo(x, m - 1, m) != 1) return false;
   }
   return true;
}

int main() {
   int itr = 70;
   ll num;
   cin>>num;
   cout<<((Fermat(num, itr))?"Prime":"Not Prime");
   cout<<endl;
   return 0;
}
