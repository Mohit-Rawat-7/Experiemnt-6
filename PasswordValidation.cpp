#include<iostream>
#include<string>
using namespace std;
int main()
{
   int i=1;
   string password ="siu",newpassword;
   do
   {
    cout<<"Enter password: ";
    cin>>newpassword;
     if(newpassword==password)
     {
      cout<<"Success";
      break;
     }
     else
     {
      cout<<"Try again!"<<endl;
     }
     i++;
   } while (i);
   
}
