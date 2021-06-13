#include <bits/stdc++.h>

using namespace std;

//a function that returns the sum of max hourglass;



int main()
{
    int arr[6][6];
    //6*6 array input

    for(int i =0; i<6; i++)
    {
        for(int j=0;j<6;j++)
        {

            cin>>arr[i][j];
        }


    }

    //find out the max hourglass sum

    int maxhourglass = -100;

    for(int i =0 ; i<4;i++)
    {

        for(int j =0;j<4;j++)
        {

            int hourglassSUm= arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];

            if(hourglassSUm>maxhourglass)
            {

                maxhourglass= hourglassSUm;
            }
        }
    }

    cout<<maxhourglass;



}
