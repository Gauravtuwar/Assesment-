#include <iostream>
using namespace std;
class Car {

public: string brand; string model; int year; };

int main() {



Car carObj1;

carObj1.brand = "mahindra";

carObj1.model = "scorpio";

carObj1.year = 1989;

Car carObj2;

carObj2.brand = "rolls royces";

carObj2.model = "ghost";

carObj2.year = 1967;


cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";

cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

return 0;

}
