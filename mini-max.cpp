#include <bits/stdc++.h>

using namespace std;
int main()
{
    //take an array of 5 int value
    long int arr[5], sum = 0 , minarr,maxarr;

    for(int i= 0 ; i<5;i++)
    {

        cin>>arr[i];
        sum+=arr[i];
    }

    //minimum sum bire korte hoile array er vitor highest value ke minus dibo sum diye
    // 1+3+5+7+9 = 25 sum = 25 so min sum = 25- 9 = 16
    // max sum = sum - lowest val in array

    // now findout lowest value and highest value in the array
    minarr = arr[0];
    for(int i =1 ; i<5; i++)
    {

        if(minarr>arr[i])
        {

            minarr = arr[i];
        }

    }
    maxarr = arr[0];
    for(int i = 1 ; i<5; i++)
    {

        if(maxarr<arr[i])
        {

            maxarr = arr[i];
        }

    }



    cout<<sum - maxarr<<" "<<sum - minarr;
}
