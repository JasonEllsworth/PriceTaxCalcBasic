#include <iostream>
using namespace std;

int main() {
    cout << "hello welcome to franks room cleaning" << endl;
    cout << "\nHow many rooms would you like cleaned?";

    int numberOfLargeRooms {0};
    int numberOfSmallRooms {0};
    cout << "How many large rooms: ";
    cin >> numberOfLargeRooms;
    cout << "How many small rooms: ";
    cin >> numberOfSmallRooms;

    const double pricePerLargeRoom{35.0};
    const double pricePerSmallRoom{25.0};
    const double salesTax{0.06};
    const int estimateExpiry{30}; // days
    double cost {(numberOfLargeRooms * pricePerLargeRoom) + (numberOfSmallRooms * pricePerSmallRoom) };

    cout << "\n Estimate for carpet cleaning service" << endl;
    cout << "Number of large rooms: " << numberOfLargeRooms << endl;
    cout << "Number of small rooms: " << numberOfSmallRooms << endl;
    cout << "Price per large room: $" << pricePerLargeRoom << endl;
    cout << "Price per large room: $" << pricePerSmallRoom << endl;
    cout << "cost: $" << cost << endl;
    cout << "Tax: $" << cost * salesTax << endl;
    cout << "============================================" << endl;
    cout << "Total estimate: $" << (cost * salesTax) + cost << endl;
    cout << "This estimate is valid for " << estimateExpiry << " days" << endl;

    cout << endl;
    return 0;
}
