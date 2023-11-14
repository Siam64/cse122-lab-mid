#include <iostream>

using namespace std;

int maxNumber(int num1, int num2, int num3)
{
    int result;

if (num1 > num2  && num1 > num3) {
    result = num1;
}
else if (num2 > num1  && num2 > num3) {
    result = num2;
}
else if (num3 > num1  && num3 > num2) {
    result = num3;
}
return result;

}

int main() {

int a, b, c, final;

cout << "Enter first number: ";
cin >> a;
cout << "Enter sec number: ";
cin >> b;
cout << "Enter third number: ";
cin >> c;

final = maxNumber(a, b, c);

cout << "Largest: " << final;

cin.get();
return 0;
}

