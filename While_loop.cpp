// This program gives all the even numbers till the given number

#include<iostream>              //This is standard input-output stream
#include<conio.h>               //This is console input and output header file
using namespace std;            //to use classes of function
int main()                      //this is start of main function
{
    int n,i = 1;                   //initialize  the integer variables n and i
    cout<<"Enter a number:";       //ask user for input
    cin>>n;                         //take input from user and save in n
    while(i<=n)                     //till condition i less than or equal to n
    {
        if(i % 2 == 0)                   //if i divided by 2 has remainder of 0
        {
             cout<<i<<"\n";                    //prints value of i
        }
       i++;                              // increase value of i
 }
getch ();
return 0;
}
