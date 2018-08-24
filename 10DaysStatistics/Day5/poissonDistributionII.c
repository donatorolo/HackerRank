#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  float meanA,meanB=0;

  cout.precision(3);
  while(cin>>meanA,cin>>meanB)
  {
    cout<< fixed << 160+(40*(meanA+pow(meanA,2))) << endl;
    cout<< fixed << 128+(40*(meanB+pow(meanB,2))) << endl;
  }

  return 0;
}