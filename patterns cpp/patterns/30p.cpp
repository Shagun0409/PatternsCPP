#include<iostream>
using namespace std;
int main(){
    char ch;

int n;

cin>>n;

 int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){

            ch='A'+j-1;
        
        
            cout<<ch;

            j++;
        }
        cout<<endl;
        i++;


    }
}