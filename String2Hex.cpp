#include "String2Hex.h"
using namespace std;
int main() {
	while (true)
	{
		std::cout << "Enter a string you want to convert to Hexadecimal: ";
		string s1;
		getline(std::cin, s1);
		std::cout << "\nString: " << s1 << std::endl;
		std::cout << "\nHexadecimal: ";
		for (int i = 0; i < s1.size(); i++) {
			int character = int(s1[i]);
			std::cout << hex << character;
		}
		std::cout << '\n' << std::endl;
	}
}