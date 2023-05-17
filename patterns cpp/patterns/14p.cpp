#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int i = 1;
    
    while(i<=n){
        int j=1;
        char ch;
        while(j<=n){
            ch='A'+i+j-2;
            cout<<ch;
          //  ch=ch+1;
            
            
            j=j+1;

        }
        cout<<endl;
        
        i=i+1;
    }

    
   
}