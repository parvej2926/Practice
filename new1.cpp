#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

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

    double dot = inner_product(D1.begin(), D1.end(), D2.begin(), 0.0);
    double magD1 = magnitude(D1);
    double magD2 = magnitude(D2);

    double cosine_similarity = dot / (magD1 * magD2);
    double angle_rad = acos(cosine_similarity);
    double angle_deg = angle_rad * (180.0 / M_PI);

    cout << "Cosine Similarity: " << cosine_similarity << endl;
    cout << "Angle (in radians): " << angle_rad << endl;
    cout << "Angle (in degrees): " << angle_deg << "°" << endl;

    return 0;
}
