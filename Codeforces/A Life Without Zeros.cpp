#include <bits/stdc++.h>
#define f first
#define s second 
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define l '\n'
#define c cout    
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
lli a, b, re;
lli deleteZ(lli n) {
  lli ce(0), on(1);
  while (n) {
    lli dig = n % 10;
    n /= 10;
    if (dig) {
      ce += dig * on;
      on *= 10;
    }
  }
  return ce;
}
int main () { _
  cin >> a >> b;
  re = a + b;
  a = deleteZ(a);
  b = deleteZ(b);
  re = deleteZ(re); 
  if (a + b == re) { c << "YES" << l;}
  else { c << "NO" << l; }
  return 0;
}
 
