#include <iostream>
using namespace std;

void interval(double* a, double* b, double* dist, double* byte_dist) {

    *dist = *b - *a;
    *byte_dist = ((char*)&b - (char*)&a) * sizeof(double);
}

int main() {

    double a = 51;
    double b = 255;
    double res = 0;
    double byte_res = 0; 

    interval(&a, &b, &res, &byte_res);

    cout << "Distance between a and b: " << res << "\n";
    cout << "Distance between a and b in bytes: " << byte_res << " b" << "\n";
    
    return 0;

}
