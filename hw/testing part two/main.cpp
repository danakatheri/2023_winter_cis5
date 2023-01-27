#include <iostream>
#include <string>
using namespace std;
int main() {
 string package;
 float time;
 float price;
 cout << "Choose package: ";
 cin >> package;
 // Package validation
 if ((package == "A") || (package == "B") || (package == "C")) {
 cout << "The number of hours: ";
 cin >> time;
 // Time validation
 if (time <= 744) {
// Package A
if (package == "A") {
if (time > 10) {
price = 9.95 + (time - 10) * 2;
} else {
price = 9.95;
}
// Package B
} else if (package == "B") {
if (time > 20) {
price = 14.95 + (time - 20) * 1;
} else {
price = 14.95;
}
// Package C
} else {
price = 19.95;
}
 } else {
cout << "Invalid number of hours!";
 }
 } else {
 cout << "Invalid package!";
}
cout << "Price: $" << price;
} 