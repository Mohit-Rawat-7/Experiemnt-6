# Experiemnt-6
# Aim:
To learn about for loop and while loop.

# Software Used
VS Code

# Problem Statement
1.) Write a c++ code for printing numbers using for loop.

2.) Write a c++ code for printing numbers using while loop.

3.) Write a c++ code for making a triangular star pattern.

4.) Write a c++ code for making a square shaped star pattern.

5.) Write a c++ code for making a pyramid of star.

6.) Write a c++ code to get sum of the numbers printed.

7.) Write a c++ code to make a Floyd triangle.

8.) Write a c++ code to make Floyd triangle of alphabets.

9.) Write a c++ code for password validation till correct password is entered.

#  Theory
In C++, for loop is an entry-controlled loop that is used to execute a block of code repeatedly for the specified range of values. Basically, for loop allows you to repeat a set of instructions for a specific number of iterations.

While Loop in C++ is used in situations where we do not know the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test condition. Loops in C++ come into use when we need to repeatedly execute a block of statements.

Floyd's triangle is a triangular array of natural numbers used in computer science education. It is named after Robert Floyd. It is defined by filling the rows of the triangle with consecutive numbers, starting with a 1 in the top left corner

# Program Codes
```javascript
 //Printing numbers using for loop.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the end value: ";
    cin >> num ;
    for(int i = 1; i<=num; i++)
    {
        cout<< "  " <<i;
    }
    return 0;
}

//Printing numbers using while loop.
#include<iostream>
using namespace std;
int main ()
{ int a,i=1;
    cout << "Enter end value: ";
    cin >> a;
    while( i <= a)
    { 
        cout<< " "<<i;
        i++;
    }
    return 0;

}

//Triangular star pattern
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}


//Pyramid of star
#include<iostream>
using namespace std;
int main ()
{
    int row;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for ( int k = row-1 ; k>i; k--)
    {
        cout << " ";
    }
        for(int j= 0 ; j<2*i+1; j++)
    {
        cout << "*";
    }
    cout << endl;
    }
    return 0;
}

//Sum of the numbers printed
#include<iostream>
using namespace std;
int main()
{
    int sum = 0, num;
    cout << "Enter last number: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
        

    }
    cout << "Sum is: "<<sum;
    return 0;

}

//Floyd triangle
#include<iostream>
using namespace std;
int main()
{
    int row, a=1;
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Floyd triangle of alphabets
#include<iostream>
using namespace std;
int main()
{
    int row; 
    char a='A';
    cout<< "Enter number of rows: ";
    cin >> row;
    for ( int i =0; i<row ; i++)
    { for(int j= 0 ; j<= i; j++)
    { 
        cout << " "<<a;
        a++;
    }
    
    cout << endl;
    }
    return 0;
}

//Password validation
#include<iostream>
#include<string>
using namespace std;
int main ()
{ string pass;
    do
{
 cout << "Enter a password: ";
 cin >> pass;
 if (pass=="SIT")
 {
    cout << "Sucess !!";
 }
 else
 {
    cout << "Try again"<<endl;
 }
} 
while (pass != "SIT");
return 0;
}
```

# Output:
1.) ![image](https://github.com/user-attachments/assets/3ef5fb43-7ddf-4dcf-82a0-998405117a10)
2.) ![image](https://github.com/user-attachments/assets/da055ab4-441a-4360-8acf-0bd2d53ca259)
3.) ![image](https://github.com/user-attachments/assets/94d8977b-32e3-44ab-81e2-a1cf840d23ee)
4.) ![image](https://github.com/user-attachments/assets/e9fc778e-b506-4dce-92cf-a7481f15b025)
5.) ![image](https://github.com/user-attachments/assets/19a3d031-f498-4a5b-94da-1f5d42c20ced)
6.) ![image](https://github.com/user-attachments/assets/402c77fb-aaaa-4500-9929-b70156f7c4d8)
7.) ![image](https://github.com/user-attachments/assets/3654bcd9-c821-4dc4-979d-6338079f6fa2)
8.) ![image](https://github.com/user-attachments/assets/92ec92ab-bc40-487f-946a-01d108b7763c)

# Conclusion
We learnt to use for loop, while loop and nested for loop.
