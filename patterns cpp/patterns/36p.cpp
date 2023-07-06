#include<iostream>
using namespace std;
int main(){

int n;
cin>>n;

 int i=0;
    while(i<n)
    {
       int j=0;
       while(j<=i)
       {
        cout<<"*";
        j++;
       }
       cout<<endl;
       i++;

    }
i=0;
    while(i<n){
        int j=0;
        while(j<(n-i-1)){
            cout<<"*";
           j++;




        }

        //spaceeee
     int space=1;
     while(space<n-i-1){
        cout<<"q";
        space++;
     }
        cout<<endl;
        i++;
    }


    //spaceeee
     int space=1;
     while(space<n-i+1){
        cout<<"q";
        space++;
     }
}