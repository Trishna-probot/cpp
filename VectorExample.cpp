// Using vectors and custom structs with operator overloading

#include <iostream>
#include <vector>
using namespace std;

struct Corners {
    float a, b, c, d;
};

ostream& operator<<(ostream& stream, const Corners& corner) {
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}

int main() {
    vector<int> inty = {2, 3, 4, 5};
    for (auto i = inty.begin(); i != inty.end(); ++i) {
        cout << *i << endl;
    }

    vector<Corners> corners;
    corners.push_back({1, 2, 3, 4});
    corners.push_back({5, 6, 7, 8});
    for (const auto& c : corners) {
        cout << c << endl;
    }

    return 0;
}
