#include "logic.h";

bool check_number(long long number) {
	bool result = false;

	if (number < 0) {
		number *= -1;
	}

	if (number >= 0 and number <= 10) {
		result = false;
	}

	int number_copy = number;
	int number2;

	while (number > 0) {

		int number1 = number % 10;
		int q = 1;
		while (number_copy > 0) {

			number2 = number_copy / int (pow(10, q)) % 10;
			
			if (number1 == number2) {
				return true;
			}

			if (number2 == 0) {
				break;
			}

			q++;
		}

		number /= 10;
		number_copy /= 10;

	}

	return false;
}