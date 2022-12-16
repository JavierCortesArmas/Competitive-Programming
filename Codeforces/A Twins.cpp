#include <bits/stdc++.h>
#define f firts
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
lli n, m(0), m2(0), c(0);
int main() { _ 
    cin >> n;
    lli a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        m += a[i];
    }
    m = m / 2;
    sort(a, a + n);
    for(int j = n - 1; j >= 0; j--) {
        m2 += a[j];
        c++;
        if(m < m2) {
            break;
        }
    }
    cout << c << ENDL;
    return 0;
} 
