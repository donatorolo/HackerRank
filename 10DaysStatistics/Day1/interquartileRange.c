#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

float calculate_q2(const int* elements,int size)
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

  cout.precision(1);

  while(cin>>n)
  {
    int values[n], frequency[n];
    int size=0;

    for (int i = 0; i < n; ++i)
      cin>>values[i];

    for (int i = 0; i < n; ++i)
    {
      cin>>frequency[i];
      size += frequency[i];
    }

    int elements[size];

    int aux=0;
    for (int i = 0; i < n; ++i)
    {
      fill_n(elements+aux,frequency[i],values[i]);
      aux+=(frequency[i]);
    }

    sort(elements,elements+size);

    float q1,q3=0;

    if (size&1)
    {
      q1 = calculate_q2(elements,size/2);
      q3 = calculate_q2(&elements[(size/2)+1],size/2);
    }
    else
    {
      q1 = calculate_q2(elements,(size/2));
      q3 = calculate_q2(&elements[size/2],size/2);
    }

    cout<<fixed<<(q3-q1)<<endl;
  }

  return 0;
}