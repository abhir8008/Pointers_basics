#include<iostream>
using namespace std;


int main()
{
    int  n = 5;
    cout<< n<< endl;
    cout << &n << endl;

    int* ptr = &n;      //pointer me address hi dala jata hai
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 10;
    cout<< ptr << endl;
    cout << *ptr << endl;
    cout << n <<endl;

    cout<< endl << endl;


    float  m = 15;
    cout<< m<< endl;
    cout << &m << endl;

    float* ptrm = &m;      //float ka pointer bhi float hi hoga
    cout << ptrm << endl;
    cout << *ptrm << endl;
    *ptrm = 20;
    cout<< ptrm << endl;
    cout << *ptrm << endl;
    cout << m <<endl;
}
