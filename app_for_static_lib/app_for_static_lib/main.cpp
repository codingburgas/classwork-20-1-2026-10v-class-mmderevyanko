#include <iostream>
#include "../math/math.h"
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	cout << add(a, b) << "\n";
	cout << subtract(a, b) << "\n";
	cout << multiply(a, b) << "\n";
	cout << divide(a, b) << "\n";
}