#include <iostream> 
using namespace std; 
int main() 
{ 
	int a = 10, *pa, &ra; // int *pa; ( int &ra wrong, it doesn't make any sense)
	pa = &a; // pointer can be initialized and assigned both
	ra = a; // but reference can only be initilized
	cout << "a=" << ra; 
	return 0; 
} 
