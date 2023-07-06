#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

  /*  int i = 1;
    
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }*/

    int i=0;
    while(i<=n){


        int space;
        space=0;
        while(space<n-i-1){
            cout<<"q";
            space=space+1;
        }

       int j=0;
        while(j<(2*i+1)){
            cout<<"*";
            j++;

        }
        space =0;
        while(space<n-i-1){
            cout<<"q";
            space=space+1;}
        cout<<endl;
        i++;
    }
}