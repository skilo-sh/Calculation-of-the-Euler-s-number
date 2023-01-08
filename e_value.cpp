#include <iostream>

int factorielle (int n);

int main() 
{
	double e = 1;
	for(int i = 1; i < 30; i++)
		e += 1 / static_cast<double>(factorielle(i));

	std::cout << e << std::endl;
}

int factorielle (int n)
{
	int result = 1;
  	for (int i = 2; i <= n; i++)
		result *= i;
  	
  	return result;
}
