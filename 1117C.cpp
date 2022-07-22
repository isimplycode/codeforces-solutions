#include <bits/stdc++.h>
using namespace std;

bool isVal(pair<long long, long long> st, pair<long long, long long> en,long long m, string &wind) {
  pair<long long, long long> windloc={0,0};
  for (int i=0; i<size(wind); ++i) {
    if (wind[i]=='U') windloc.second++;
    else if (wind[i]=='D') windloc.second--;
    else if (wind[i]=='R') windloc.first++;
    else windloc.first--;
  }
  windloc.second*=m/size(wind);
  windloc.first*=m/size(wind);
  for (int i=0; i<m%size(wind); ++i) {
    if (wind[i]=='U') windloc.second++;
    else if (wind[i]=='D') windloc.second--;
    else if (wind[i]=='R') windloc.first++;
    else windloc.first--;
  }
  st.first+=windloc.first;
  st.second+=windloc.second;
  return (abs(st.first-en.first))+(abs(st.second-en.second))<=m;
}

int main() {
  pair<long long, long long> startloc,endloc;
  cin >> startloc.first >> startloc.second;
  cin >> endloc.first >> endloc.second;
  int a;
  cin >> a;
  string s;
  cin >> s;
  long long l=1,r=10e17,res=-1;
  while (l<=r) {
    long long m=l+(r-l)/2;
    if (isVal(startloc,endloc,m,s)) {
      res=m;
      r=m-1;
    } else {
      l=m+1;
    }
  }
  cout << res << "\n";
}
