#include <string>  
#include <iostream>

int main()
{
	std::string name;
	std::cout << "What is your name?";
	getline(std::cin, name);
	std::cout << "Hello, " << name << "!\n";

	std::string age;
	std::cout << "What is your age? ";
	getline(std::cin, age);
	std::cout << "How do you feel being " << age << "?\n";

	std::cout << "As a great man once said: ´I'm too old just to play, And too young to be quite without wishes.`";
}
