#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int calculate_q2(const int* elements,int size)
{
  if (size&1)
  {
    return (elements[int(ceil(size/2))]);
  }
  else
  {
    return ((elements[int(size/2)]+elements[int((size/2)-1)])/2);
  }
}


int main() {

  int n=0;

  while(cin>>n)
  {
    int elements[n];

    for (int i = 0; i < n; ++i)
      cin>>elements[i];

    sort(elements, elements+n);

    int q1,q2,q3=0;

    q2 = calculate_q2(elements,n);
    if (n&1)
    {
      q1 = calculate_q2(elements,n/2);
      q3 = calculate_q2(&elements[(n/2)+1],n/2);
    }
    else
    {
      q1 = calculate_q2(elements,(n/2));
      q3 = calculate_q2(&elements[n/2],n/2);
    }

    cout<<q1<<endl;
    cout<<q2<<endl;
    cout<<q3<<endl;
  }

  return 0;
}