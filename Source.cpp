#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main() {
	int count = 0;
	int num, sys, number,num2,sys2;
	char answer = 'Y';
	while (answer == 'Y' || answer == 'y') {
		cout << "Enter the number that you want to convert: ";
		cin >> num;
		num2 = num;
		cout << "Enter the system in which it shoud be converted: ";
		cin >> sys;
		sys2 = sys;
		count = 0;
		while (num > 0) {
			number = num % sys;
			//cout << number;
			num = num / sys;
			count++;
		}
		int *mass = new int[count];
		int i = 0;
		while (num2 > 0) {

			number = num2 % sys;
			num2 = num2 / sys;
				mass[i] = number;
				i++;
		}
		cout << endl << "Here is your uber in " << sys2 << " system: " << endl;
			for (int i = count-1; i >= 0; i--) {
				cout << mass[i];
			}

		cout << endl;
	 delete mass;
		cout << "If you want to countinue type Y or y:";
		cin >> answer;
		cout << endl;
}
	return 0;
}