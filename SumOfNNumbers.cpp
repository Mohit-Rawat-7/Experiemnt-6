#include <iostream>
using namespace std;
int main(){
    int n, i, sum=0;
    cout<<"Numbers do you want the sum for: ";
    cin>>n;
    for(i=0;i<n;i++){
        sum=sum+i;
    }
    
    cout<<"The sum of first "<<n<<" natural numbers is: "<<sum;
    return 0;
}