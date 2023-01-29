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
char D; string Mole, Keyb = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main () { _
  cin >> D;
  cin >> Mole;
  if (D == 'R') {
    fore (i, 0, Mole.length()) {
      fore (j, 0, 31) {
        if (Mole[i] == Keyb[j]) {
          c << Keyb[j - 1];
        }
      }
    }
    c << l;
  }
  else if (D == 'L') {
    fore (i, 0, Mole.length()) {
      fore (j, 0, 31) {
        if (Mole[i] == Keyb[j]) {
          c << Keyb[j + 1];
        }
      }
    }
    c << l;
  }
  return 0;
}
