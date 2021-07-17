#include <bits/stdc++.h>
using namespace std;
int main()
{
 int n, counter = 0;
 long long arr[n];
   cin>>n;
for(int i =0;i<n;i++)
{

    cin>>arr[i];
}
//find out highest value
 long long maxarrVal;

  maxarrVal= arr[0];
for(int i = 0; i<n;i++)
{

    if(arr[i]>maxarrVal)
    {

        maxarrVal = arr[i];
    }
}

// counddown the highest value

for(int i =0; i<n; i++)
{

    if(arr[i] == maxarrVal )
    {
        counter++;
    }
}

cout<<counter;
return 0;

}
