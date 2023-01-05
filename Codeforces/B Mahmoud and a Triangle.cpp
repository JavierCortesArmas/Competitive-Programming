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
lli n(3e5); 
int main() { _
  cin >> n;
  lli a[n];
  fore (i, 0, n) {
    cin >> a[i];
  }
  sort(a, a + n);
  lli b = 0;
  fore (i, 0, n - 2) {
    if (a[i] + a[i + 1] > a[i + 2]) {
      b = 1;
      cout << "YES" << l;
      break;
    }
  }
  if (b == 0) {
    cout << "NO" << l;
  }
  return 0;
}
/*
A non-degenerate triangle is
a + b > c
b + c > a
a + c > b
*/
