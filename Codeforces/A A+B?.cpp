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
lli a, b, t, r;
int main() { _ 
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a && b <= 9) {
      r = a + b;
      c << r << l;
    }
    else if (a == 0){
      c << b << l;
    }
    else if (b == 0){
      c << a << l;
    }
  }
  return 0;
}
