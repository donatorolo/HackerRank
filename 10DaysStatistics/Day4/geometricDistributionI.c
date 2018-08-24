#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  int num, den, ntry=0;

  cout.precision(3);

  while(cin>>num,cin>>den,cin>>ntry)
  {
    float result,p=0;
    p = num/float(den);

    result = pow(1-p,ntry-1)*p;
    cout<<fixed<<result<<endl;
  }

  return 0;
}