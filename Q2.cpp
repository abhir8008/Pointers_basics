
//1. What will be the output of the following program?

#include <iostream> 
using namespace std; 

int main() 
{ 
	int a = 32, *ptr = &a; 
	char ch = 'A', &cho = ch; // cho is address of ch

	cho = cho + a; // ch =  A + a; 65 + 32 = 97
	*ptr = *ptr + ch; // 32 + 97 = 129 // *ptr = a
	cout << a << ", " << ch << endl; 
	return 0; 
} 
