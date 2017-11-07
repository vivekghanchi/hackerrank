#include <iostream>
using namespace std;

int main()
{
    long n, k;
    cin>>n>>k;
    
    int a[n];
    for(long i=0; i<n; i++)
        cin>>a[i];
    
    long b_charge, sum=0;
    cin>>b_charge;
    
    for(long i=0; i<n; i++)
    {
        if(i==k)
            continue;
        sum+=a[i];
    }
    
    long b_actual = sum/2;
    if(b_actual == b_charge)
        cout<<"Bon Appetit"<<endl;
    else
        cout<<(b_charge-b_actual)<<endl;
    return 0;
}
