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
double H, L;
int main() { _
  cin >> H >> L;
  cout << fixed << setprecision(13) << ((L * L - H * H) / (2 * H));
  return 0;
}
