#include <bits/stdc++.h>
using namespace std;

bool isVal(double t,vector<double> &x,vector<double> &v) {
  double minloc=DBL_MIN;
  double maxloc=DBL_MAX;
  for (int i=0; i<size(x); ++i) {
    minloc=max((double)minloc,(double)x[i]-t*v[i]);
    maxloc=min((double)maxloc,(double)x[i]+t*v[i]);
    if (minloc>maxloc)
      return false;
  }
  return true;
}

int main() {
  int n;
  cin >> n;
  vector<double> x(n),v(n);
  for (int i=0; i<n; ++i) {
    cin >> x[i];
  }
  for (int i=0; i<n; ++i) {
    cin >> v[i];
  }
  double l=0,r=pow(10,9),res=-1;
  while (r-l > pow(10,-7)) {
    double m=(r+l)/2;
    if (isVal(m,x,v)) {
      r=m;
      res=m;
    } else {
      l=m;
    }
  }
  cout << fixed << setprecision(12) << res;
}
