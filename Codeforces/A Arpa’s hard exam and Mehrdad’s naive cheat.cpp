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
lli n, ans(0);
int main() { _
  cin >> n;
  if (n == 0) {
    c << 1 << l;
    return 0;
  }
  if (n % 4 == 0) {
    c << 6 << l;
  }
  else if (n % 4 == 1) {
    c << 8 << l;
  }
  else if (n % 4 == 2) {
    c << 4 << l;
  }
  else if (n % 4 == 3) {
    c << 2 << l;
  }
  return 0;
}
