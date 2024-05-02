#include <iostream> 
using namespace std; 
int main() 
{ 
	int num[5]; // Array of 5
	int* p; // p  is pointer
	p = num; // pointer p assign to array
	*p = 10; // value at p0 is 10 
	p++; // increment of p at 1st place
	*p = 20; // value at p1 assign as 20
	p = &num[2]; // increment of p at 2nd place
	*p = 30; // value at p2 is 30
	p = num + 3; // increment of p at 3rd place
	*p = 40; // value of p3 is 40
	p = num; // 
	*(p + 4) = 50; // value of p4 is 50 
	for (int i = 0; i < 5; i++) 
		cout << num[i] << ", "; 
	return 0; 
} 
