#include <bits/stdc++.h>

using namespace std;
int main()
{

 int n;
 cin>>n;
 int arr[n];
 //insert array
 for(int i=0;i<n;i++)
 {
     cin>>arr[i];
 }
 //reverse the array
 for(int i = n-1 ; i>=0 ; i--)
 {

     cout<<arr[i]<<" ";
 }
 return 0;

}


