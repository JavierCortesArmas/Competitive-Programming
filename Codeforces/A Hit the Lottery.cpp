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
lli n(1e9), r(0), b[] = {100, 20, 10, 5, 1};
int main() { _
  cin >> n;
  fore (i, 0, 5) {
    r += n / b[i];
    n = n % b[i];
  }
  c << r << l;
  return 0;
}
