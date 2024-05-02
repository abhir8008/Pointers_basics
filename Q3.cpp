
// 2. What will be the output of the following program?

#include <iostream> 
using namespace std; 

int main() 
{ 
	const int i = 20; 
	const int* const ptr = &i; 
	(*ptr)++; // *ptr = *ptr + 1; 21
	int j = 15; 
	ptr = &j; 
	cout << i; 
	return 0; 
} 

// compilation error as the value of const int i nad const ptr cannot be changed,
// but they are trying to chage the calue in 3rd and 5th line of main function.
