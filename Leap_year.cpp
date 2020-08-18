#include<iostream>
using namespace std;
int main()
{
    int year;                                           //declare year of type integer
    cout<<"Enter a year: ";                             //ask user enter a year
    cin>>year;                                          //input the value of year
    if(year % 4 == 0)                                   //if year divided by 4 has remainder of 0
    {
      if(year % 100 == 0)                               //if year divided by 100 has remainder of 0
      {
         if(year % 400 == 0)                            //if year divided by 400 has remainder of 0
            cout<<year<<"is a leap year.";              //display year and is a leap year
         else
            cout<<year<<"is not a leap year.";          //display year and is not a leap year
      }
      else
        cout<<year<<"is a leap year.";                  //display year and is a leap year
    }
    else
        cout<<year<<"is not a leap year.";                  // display year and is not a leap year
    return 0;
}
