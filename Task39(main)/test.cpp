#include "test.h"

void test(int number, bool expected, string test_name) {
	bool actual = check_number(number);
	string msg = test_name + " ---> ";
	msg += expected == actual ? "PASS \n" : "FAIL \n";
	cout << msg;
}

void run_all_tests() {
	test(123, false, "test01");
	test(321, false, "test02");
	test(-123, false, "test03");
	test(-321, false, "test04");
	test(1, false, "test05");
	test(-7, false, "test06");
	test(0, false, "test07");
	test(12222, true, "test08");
	test(22221, true, "test09");
	test(1443, true, "test10");
	test(-5789353, true, "test11");


}