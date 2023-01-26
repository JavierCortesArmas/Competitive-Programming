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
lli n, m, mi(0), ma(0), ans = 1000;
int main() { _ 
   cin >> n >> m;
   lli Fm[m];
   fore (i, 0 , m) {
    cin >> Fm[i];
   }
   sort(Fm, Fm + m);
   for (lli i = 0; i <= m - n; i++) {
    ans = min(ans, Fm[i + n - 1] - Fm[i]);
   }
   c << ans << l;
  return 0;
}

