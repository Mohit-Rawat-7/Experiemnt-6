#include <iostream>
using namespace std;
int main(){
    int i, j, k=0, n;
    cout<<"Enter number of rows: ";
    cin>>n;
/**
//Pyramid
    for(i=1;i<=n;i++){
        for(j=1;j<=(n-i);j++){
            cout<<" ";
        }
        for(k=0;k!=(i-1);k++){
            cout<<"* ";
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
**/
//Odd numbered pyramid
    for(i=0;i<n;i++){
        for(j=n-1;j>i;j--){
            cout<<"  ";
        }
        for(k=0;k<(2*(i)+1);k++){
            cout<<"* ";
        }
        k=0;
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

/**
//Parallel Lines
    for(i=1;i<=n;i++){
        for(j=0;j<=n;j++){
            cout<<" * ";
        }
             
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
//lines
    for(i=1;i<=n;i++){
        while(k!=(i-1)){
            cout<<"* ";
            k++;
        }
        k=0;
        cout<<endl;
    }**/

}