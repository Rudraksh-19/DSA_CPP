#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows and cloumns : ";
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cout<<(char)(64+i)<<" ";
        }
        cout<<endl;
    }
}