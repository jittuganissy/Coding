#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    virtual void draw() {  
	 // virtual function
        cout << "Drawing a generic shape" << endl;
    }
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
	  // overriding base function
        cout << "Drawing a Circle" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape* s;  
	 // base class pointer

    Circle c;
    Rectangle r;
    Shape base;

    // Base pointer points to Circle
    s = &c;
    s->draw();  
	 // ? Circle's draw()

    // Base pointer points to Rectangle
    s = &r;
    s->draw();  
	 // ? Rectangle's draw()

    // Base pointer points to Shape
    s = &base;
    s->draw(); 
	  // ? Shape's draw()

    return 0;
}
