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
#define c cout
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
lli n, le; double d(0);
int main() { _
  cin >> n >> le;
  lli a[n];
  fore (i, 0, n) {
    cin >> a[i];
  }
  sort(a, a + n);
  fore (i, 0, n - 1) {
    d = max(d,(a[i + 1] - a[i]) / 2.0);
  }
  d = max(d, (double)a[0]);
  d = max(d, (double)le - a[n - 1]);
  cout << fixed;
  cout.precision(10);
  cout << d << l;
  return 0;
}
