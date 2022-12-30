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
lli n, a, r(0), temp; map<lli, lli> mp; map<lli, lli>::iterator itr;
int main() { _
    cin >> n;
    fore (i, 0, n) {
        cin >> a;
        mp[a]++;
    }
    for (itr = mp.begin(); itr != mp.end(); itr++) {
        temp = itr->second;
        r = max(r, temp);
    }
    cout << r << endl;
}
