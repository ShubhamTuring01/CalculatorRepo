//Project Simple Calculator
#include <iostream>


long long add(int firstNum, int secondNum)
{
	return firstNum + secondNum;
}

int main()
{
	int firstNum=0,secondNum=0;
	char op = ' ';

	std::cout << "Welcome to basic calculator\n";

	std::cout << "Enter first number:"<<"\n";
	std::cin >> firstNum;
	
	std::cout << "Select the opration:"<<"\n";
	std::cout << "+ for add\n";

	std::cin >> op;
	std::cout << "Enter second num\n";
	std::cin >> secondNum;

	long long result=0;

	if (op == '+')
		result += add(firstNum, secondNum);
	
	
	std::cout << "\nResult:" << result << "\n";
	
	return 0;
}