#include <bits/stdc++.h>
 
using namespace std ;
 
 
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int arr[3]={0};
   arr[0]=a;
   arr[1]=b;
   arr[2]=c;
 
   sort(arr,arr+3);
 
   cout<<arr[0]<<" "<<arr[2]<<endl;
 
     return 0 ;
 
}
 