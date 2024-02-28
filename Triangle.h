#include <iostream>
using namespace std;

class Triangle{
    private:
        int size;
        char border;
        char fill;
    public:
        Triangle(int size, char border = '#', char fill = '*');

        int getSize() const;
        int perimeter() const;
        double area() const;
        void grow();
        void shrink();
        void setBorder(char newBorder);
        void setFill(char newFill);
        void draw() const;
        void summary() const;

};