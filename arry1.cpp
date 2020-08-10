# include <iostream>
using namespace std;
int main ()
{
    int numbers[5], sum = 0;                  //initialize empty array called numbers holding 5 integers and variable sum
    cout<<"Enter 5 numbers:";                 //ask user to enter 5 numbers

   for(int i = 0;  i<5; ++i)                  // this initializes i to 0 value and while i is less than 5 increment i and run the loop
    {
        cin>>numbers[i];                      //take input from user and save it to the i'th position of numbers array
        sum += numbers[i];                    //change value of sum by adding numbers [i]
    }
    cout<<"Sum="<<sum<<endl;                  // display Sum
    return 0;
}
