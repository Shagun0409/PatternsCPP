#include <iostream>
using namespace std;
int main()
{
   
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        

        int j = 1;
        while (j <=n)
        {
            if(j==1 || j==(n)||i==1||i==n){
                cout<<"*";}
            else{
                cout<<" ";
            }
            j++;
            
        }
        cout << endl;
        i++;
    }
}