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

    float first,second,p=0;
    int n,x=0;

    n=b;
    x=2;

    p = a/float(100);
    
    first = binomialDistribution(x,n,p) + binomialDistribution(x-1,n,p) + \
            binomialDistribution(x-2,n,p);

    second = (1-first)+binomialDistribution(x,n,p);

    cout<<fixed<<first<<endl<<second<<endl;
  }


  return 0;
}