#include <bits/stdc++.h>
#define f first
#define s second 
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define pot(a) ((a)*(a))
#define l '\n'
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
lli n(1e18), t(1e3); 
int main() { _
  cin >> t;
  while (t--) {
    cin >> n;
    while(true) {
      string nStr = to_string(n);
      bool fa = true;
      for (char dgt: nStr) {
        if (dgt != '0' && n % (dgt - '0') != 0) {
          fa = false;
          break;
        }
      }
      if (fa) {
        cout << n << l;
        break;
      }
      n++;
    }
  }
  return 0;
}
