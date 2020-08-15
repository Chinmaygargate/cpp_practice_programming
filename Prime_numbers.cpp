#include<iostream>
using namespace std;
int main()
{
    int n,i,m = 0, flag = 0;                                //initialize n,i,m variables value is 0
    cout<<"Enter the number to check Prime:";               //ask user to ender number to check prime
    cin>>n;                                                 //take input from user and save it to value of n
    m = n/2;                                                //  divide value of n by 2 and store as value of m
    for(i = 2; i <= m; i++)           // initialize i to 2 and while i less than m  or is equal to m and increment i variable
    {
        if(n%i == 0)                                       //check if n divided by i  has remainder is 0
        {
            cout<<"Number is not prime."<<endl;             //print number is not prime
            flag = 1;                                       //change flag value to 1
            break;                                          //stop if loop
        }
    }
    if(flag == 0)                                          //Check if flag is equal to 0
        cout<<"Number is Prime."<<endl;                    //print number is prime
    return 0;
}
