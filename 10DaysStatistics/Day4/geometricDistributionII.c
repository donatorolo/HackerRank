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

    result = 1 - pow(1-p,ntry);
    cout<<fixed<<result<<endl;
  }

  return 0;
}