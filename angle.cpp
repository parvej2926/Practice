#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double dotProduct(vector<int>& A,vector<int>& B) {
    double dot = 0;
    for (int i = 0; i < A.size(); i++) {
        dot += A[i] * B[i];
    }
    return dot;
}

double magnitude(const vector<int>& V) {
    double mag = 0;
    for (int i = 0; i < V.size(); i++) {
        mag += V[i] * V[i];
    }
    return sqrt(mag);
}

int main() {
    vector<int> D1 = {1, 1, 1, 1, 0, 0};
    vector<int> D2 = {0, 0, 1, 1, 0, 1};

    double dot = dotProduct(D1, D2);
    double magD1 = magnitude(D1);
    double magD2 = magnitude(D2);

    double angle_deg = acos(dot / (magD1 * magD2))* (180.0 / 3.14);
    cout << "Angle (in degrees): " << angle_deg << "°" << endl;

    return 0;
}
