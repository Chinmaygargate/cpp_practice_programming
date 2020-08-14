#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers;       //declare the variables firstNumber,secondNumber and sumOfTwoNumbers of type integer

    cout << "Enter two integers: ";                     //ask user enter the value of two integers
    cin >> firstNumber >> secondNumber;                 //input the value of firstNumber and secondNumber

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    // Prints sum of two numbers
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;

    return 0;
}
