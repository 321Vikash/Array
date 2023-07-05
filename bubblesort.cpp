/* Programmer :Vikash Kumar Thakur
   Topic      :Bubble Short(Array)
   IDE        :VS Code
   Date       :05-07-2023
*/
#include<iostream>
using namespace std;
 int main()
 {
    int n[10],i,j,t;

    cout<<"Enter 10 element of array";
    for(i=0;i<=9;i++)
    cin>>n[i];

    for(i=0;i<=9;i++)
    {
        for(j=0;j<(9-i);j++)
        {
            if(n[j]>n[j+1])
            {
                t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
                
            }
        }
    }
    cout<<"sorted list";
    for(i=0;i<=9;i++)
    cout<<n[i]<<endl;
    return 0;
 }