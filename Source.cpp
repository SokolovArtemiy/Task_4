// Дана сторока, вывести подстроку из первых n элементов
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	int n;

	cout << "input string: ";
	cin >> s1;
	cout << "input symblos: ";
	cin >> n;

	if (n <= s1.length()) {
		for (int i = 0; i < n; i++) {
			s2 += s1[i];
		}
	}
	else {
		cout << "eror";
	}
	cout << "result: " << s2 << endl;
}