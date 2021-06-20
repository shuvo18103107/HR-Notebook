
#include <bits/stdc++.h>

using namespace std;

int main()
{
 int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;

    if(v1>v2)
    {
        int p = (x1-x2)%(v2-v1);
        if(p==0)
        {

            cout<<"YES";
        }
        else
        {

            cout<<"NO";
        }
    }
    else
    {

        cout<<"NO";
    }


}




