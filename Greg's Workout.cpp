#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[100000],c1=0,c2=0,c3=0,x,y;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%3==1)
            c1+=a[i];
        else if(i%3==2)
            c2+=a[i];
        else if(i%3==0)
            c3+=a[i];
    }
    ///cout<<c1<<" "<<c2<<" "<<c3<<endl;
    x=max(c1,c2);
    y=max(x,c3);
    if(y==c1)
        cout<<"chest";
    else if(y==c2)
        cout<<"biceps" ;
    else
        cout<<"back";

}
