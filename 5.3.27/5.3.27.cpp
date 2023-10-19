#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
using namespace std;
int main() {

	setlocale(0, "Rus");
	ofstream inp;
	char msg[1024];
	inp.open("myFile.txt");
	if (!inp) {
		cout << "Sorry, can't open file.";

	}
	else {
		cout << "Enter random string: " << endl;
		cin.getline(msg, 1024);
		inp << msg;

	}
	inp.close();

	char check;
	char tmp;
	int counter = 0;

	cout << "Enter the symbol which quantity you want to find: " << endl;
	cin >> check;

	ifstream outp;
	outp.open("myFile.txt");
	if (!outp) {
		cout << "Sorry, can't open your file.";
	}
	else {
		while (outp.get(tmp)) {

			if (tmp == check) {
				counter++;
			}
		}
	}
	outp.close();
	cout << counter;

}