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
string borze, b;
int main() { _ 
  cin >> borze;
  fore (i, 0, borze.length()) {
    if (borze[i] == '.') {
      c << "0";
      b += '0';
    }
    else if (borze[i] == '-' && borze[i + 1] == '.') {
      c << "1";
      b += '1';
      i++;
    }
    else if (borze[i] == '-' && borze[i + 1] == '-') {
      c << "2";
      b += '2';
      i++;
    }
  }
  return 0;
}




