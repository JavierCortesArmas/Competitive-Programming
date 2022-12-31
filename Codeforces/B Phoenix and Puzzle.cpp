#include <bits/stdc++.h>
#define f first
#define s second 
#define fore(i,a,b) for(int i = (a), ThxMK = (b); i < ThxMK; ++i)
#define pb push_back
#define all(s) begin(s), end(s)
#define _ ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sz(s) int(s.size())
#define ENDL '\n'
#define pot(a) ((a)*(a))
using namespace std;
typedef long double ld;
typedef long long lli;
typedef pair<lli,lli> ii;
typedef vector<lli> vi;
lli t(0), n(1e9);
int main() { _
    cin >> t;
    while (t--) {
        cin >> n;
        lli r1 = sqrt(n), r2 = sqrt(n / 2);
        if ( (n % 2 == 0 && r1 * r1 == n) || (2 * r2 * r2 == n) ) {
            cout << "YES" << ENDL;
        }    
        else {
            cout << "NO" << ENDL;
        }
    }
    return 0; 
}
