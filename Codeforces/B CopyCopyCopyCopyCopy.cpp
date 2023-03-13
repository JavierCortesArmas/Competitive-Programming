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
lli t, n;
int main() { _
  cin >> t;
  fore (i, 0, t) {
    cin >> n;
    lli a[n];
    fore (i, 0, n) { cin >> a[i]; }
    lli cnt(0);
    sort(a, a + n);
    fore (i, 0, n) { if (a[i] == a[i + 1]) { cnt++; } }
    c << n - cnt << l;
  }
  return 0;
}

