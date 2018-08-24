#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,sum=0;
    float mean,median,mode=0;


    cout.precision(1);

    while(cin >> n){
        sum =0;
        int elements [n];

        for (int i=0; i<n ; i++){
            cin>>elements[i];
            sum+=elements[i];
        }

        mean = sum/float(n);
        sort(elements,elements+n);

        median = (n & 1) ? (elements[n/2]+elements[(n/2)-1])/float(2) : \

                           (elements[int(floor(float(n/float(2)))-1)] + \
                            elements[int(floor(float(n/float(2))))])
                            /float(2);

        mode=elements[0];
        int prevCount=0;
        int count=1;

        for (int i=1;i<n;i++)
        {
            if (elements[i]==elements[i-1])
            {    
                count++;
                if (i==(n-1)){
                    if (count>prevCount)
                        mode = elements[i];
                }
            }
            else if (elements[i]!=elements[i-1])
            {
                if (count>prevCount){
                    mode = elements[i-1];
                    prevCount = count;
                }
                count = 1;
            }
        }

        cout << fixed << mean << endl;
        cout << fixed << median << endl;
        cout << fixed << mode << endl;
    }

    return 0;
}