// Oct27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include<string>

std::string getUserInput()
{
	std::string userInput;
	std::cout << "Enter a string: " << std::endl;
	//std::cin >> userInput;
	std::getline(std::cin, userInput);
	return userInput;
}
bool isPalindrome(std::string input)
{
	std::string copyOfInput = input;

	std::reverse(input.begin(), input.end());

	return (copyOfInput == input);
}

int main()
{
	while (true)
	{
		std::string userInput = getUserInput();

		if (isPalindrome(userInput))
		{
			std::cout << "The string is a palindrome." << std::endl;
		}
		else
		{
			std::cout << "The string is not a palindrome." << std::endl;

		}
	}

}