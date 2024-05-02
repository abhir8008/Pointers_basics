// Write a function which will take pointer and display the number on screen.
// Take number from user and print it on screen using that function.

#include<iostream>
using namespace std;

int print(int* a)
{
    cout<< *a << endl;
    cout<< a<< endl;
}

int main()
{
    int n;
    cout<< "enter the number: "<< endl;
    cin >> n;

    print(&n);

}