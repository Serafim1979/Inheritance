#include<iostream>
#include<string>

class Shape
{
private:
    double x, y;

public:
    Shape(double x = 0., double y = 0.)
    {
        this->x = x > 0 ? x : 0.;
        this->y = y > 0 ? y : 0.;
    }
    virtual ~Shape(){}
    virtual double area()const = 0;}
    virtual double perimeter()const = 0;}
};

class Rect : public Shape
{
private:
    double height, width;
public:
    Rect(double height, double width)
    {
        this->height = height > 0 ? height : 0.;
        this->width = width > 0 ? width : 0.;
    }
    ~Rect(){}
    double area()const{return height * width;}
    double perimeter()const{return 2 * (height + width);}
};

class Circle : public Shape
{
private:
    std::string name;

public:

};

class Square : public Shape
{
private:
    std::string name;
public:
};

class Triangle : public Shape
{
private:
public:

};

int main()
{
    Shape sh(2., 3.5);
    Rect rct(3, 4);
    std::cout << rct.area() << " " << rct.perimeter() << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
