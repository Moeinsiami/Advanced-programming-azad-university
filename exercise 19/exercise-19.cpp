#include <iostream>
using namespace std;

int main() {
    float first_camera, second_camera, distance;

    cout << "zaman obour az dourbin aval (sanie): ";
    cin >> first_camera;
    cout << "zaman obour az dourbin dovom (sanie): ";
    cin >> second_camera;
    cout << "fasele do dourbin (metr): ";
    cin >> distance;

    float time = second_camera - first_camera;
    
    float average_speed = distance / time;

    cout << "Average speed is " << average_speed << endl;

    return 0;
}