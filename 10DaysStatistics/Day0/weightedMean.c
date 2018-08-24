#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n=0;
  float weightedMean=0;
  cout.precision(1);

  while(cin>>n)
  {
    weightedMean=0;

    int elements[n];
    int weights[n];

    for (int i = 0; i < n; ++i)
      cin >> elements[i];

    int numerator=0;
    int denominator=0;
    for (int i = 0; i < n; ++i)
    {
      cin >> weights[i];
      numerator += (weights[i]*elements[i]);
      denominator += weights[i];
    }
    
    weightedMean = numerator/float(denominator);

    cout<< fixed<<weightedMean<<endl;
  }

  return 0;
}