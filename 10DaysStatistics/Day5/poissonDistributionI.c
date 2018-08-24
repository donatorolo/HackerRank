#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int fact(int n)
{
  return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}

float poissonpdf(float mean, int k)
{
  // Two ways of declaring the euler number
  // return (pow(mean,k)*pow(M_E,mean))/float(fact(k));
  return pow(mean,k)/float(fact(k)*pow(exp(1),mean));
}



int main() {

  float mean=0;
  int x=0;

  cout.precision(3);
  while(cin>>mean,cin>>x)
  {
    cout<< fixed << poissonpdf(mean,x) << endl;
  }



  return 0;
}