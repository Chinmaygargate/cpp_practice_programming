#include<iostream>

using namespace std;

int main()
{
    int a = 20;
    int b = 20;
    cout << "a greater than b is " << std::boolalpha << (a>b) <<"\n";
    cout << "a less than or equal to b is " << (a<=b) <<"\n";
    cout << "a greater than or is equal to b is " << (a>=b) <<"\n";
    cout << "a less than b is " << (a<b) <<"\n";
    cout << "a is not equal to b is " << (a!=b) <<"\n";
    cout << "a is equal to b is " << (a==b) <<"\n";

return 0;
}
