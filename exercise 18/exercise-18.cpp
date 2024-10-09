#include <iostream>
using namespace std;

float calculate_required_buses(int passenger, int capacity) {
    int required_buses = passenger / capacity;
    if (passenger % capacity != 0) {
        required_buses++;
    }
    return required_buses;
}

int main() {
    int passenger_count, bus_capacity;

    cout << "passengres counts: " << endl;
    cin >> passenger_count;
    cout << "bus capacity: " << endl;
    cin >> bus_capacity;

    int result = calculate_required_buses(passenger_count, bus_capacity);
    cout << "We need " << result << " buses" << endl;
    return 0;
}