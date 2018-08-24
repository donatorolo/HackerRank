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

int combinatorial(int n,int x)
{
  return fact(n)/(fact(x)*(fact(n-x)));
}

float binomialDistribution(int x,int n,float p)
{
  return combinatorial(n,x)*(pow(p,x))*(pow(1-p,n-x));
}


int main() {  

  float a,b=0;

  cout.precision(3);

  while(cin>>a,cin>>b){

    float result,p=0;
    int n,x=0;

    n=6;
    x=3;

    p = a/float(a+b);
    
    result = binomialDistribution(x,n,p) + binomialDistribution(x+1,n,p) + \
             binomialDistribution(x+2,n,p) + binomialDistribution(x+3,n,p);
    cout<<fixed<<result<<endl;
  }


  return 0;
}