#include <iostream>
using namespace std;

class Print {
public:
    void show(int x) {
        cout << "Integer: " << x << endl;
    }

    void show(double x) {
        cout << "Double: " << x << endl;
    }

    void show(string x) {
        cout << "String: " << x << endl;
    }
};

int main() {
    Print p;
    p.show(9);            // Calls int version
    p.show(8.9);          // Calls double version
    p.show("Hii");      // Calls string version
    return 0;
}
