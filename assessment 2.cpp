#include <iostream>

using namespace std;

int main() {
 int notebooks = 15;
 int pens = 20;
 float notebookCost = 2.25;
 float penCost = 0.75;
 
 // Calculate the total cost
 float totalCost = (notebooks * notebookCost) + (pens * penCost);
 
 // Output the total cost
 cout << "The total cost of the supplies is Rs. " << totalCost << endl;

    return 0;
}