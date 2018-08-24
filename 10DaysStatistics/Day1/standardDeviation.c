#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  int n=0;

  cout.precision(1);

  while(cin>>n){

    float mean=0;
    int elements[n];

    for (int i = 0; i < n; ++i)
    {
      cin>>elements[i];
      mean+=elements[i];
    }

    mean = mean/float(n);

    float std=0;
    for (int i = 0; i < n; ++i)
      std += pow((elements[i]-mean),2);

    std = sqrt(std/float(n));

    cout << fixed << std << endl;
  }

  return 0;
}