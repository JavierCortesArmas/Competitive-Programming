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
lli n, m, k(0), i(0), Se(0), Di(0);
int main () { _
  cin >> n;
  lli a[n];
  fore (i, 0, n) { cin >> a[i]; }
  lli j(n-1);
  while(i <= j) {
    if (a[i] >= a[j]) {
      m = a[i];
      i++;
    }
    else {
      m = a[j];
      j--;
    }
    if (k % 2 == 0) { Se = Se + m; }
    else { Di = Di + m; }
    k++;
  }
  c << Se << " " << Di << l;
  return 0;
}
