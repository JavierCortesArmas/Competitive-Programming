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
string p;
int main() { _ 
  cin >> p;
  if (p.find('H') != string::npos || p.find('Q') != string::npos || p.find('9') != string::npos) {
    c << "YES" << l;
  }
  else {
    c << "NO" << l;
  }
  return 0;
}


