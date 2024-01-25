#include<iostream>
#include<cmath>
void findmax(int &a,int &b){
	std::cout << ((a + b + std::abs(a - b)) / 2);
}
int main() {
	int a(7),b(999);
	findmax(a,b);
}