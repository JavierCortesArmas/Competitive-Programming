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
lli t, n, k;
int main() { _ 
  cin >> t;
  while (t--) {
    cin >> n >> k;
    string str;
    cin >> str;
    int a[n + 1];
    for (lli i = 1; i <= n; i++) 
      if (str[i - 1] == 'W') 
        a[i] = a[i - 1] + 1;
      
      else 
        a[i] = a[i - 1];
      
    int ans = INT_MAX;
    for (lli i = k; i <= n; i++) {
      ans = min(ans, a[i] - a[i - k]);
    }
    c << ans << l;
  }
  return 0;
}
