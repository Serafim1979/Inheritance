#include<iostream>
#include<string>
#include <cmath>

class Shape
{
protected:
    std::string name;
    std::string type;
public:
    Shape(std::string name, std::string type)
    {
        this->name = name;
        this->type = type;
    }
    std::string get_name()const{return name;}
    std::string get_type()const{return type;}
    virtual double get_area()const = 0;
};


class Circle : public Shape
{
private:
    double radius;
public:
    Circle(std::string name, double radius , std::string type = "2D"):Shape(name, type)
    {
        this->name = name;
        this->type = type;
        this->radius = radius;
    }
    double get_area()const {return 3.14 * radius * radius;}
    double get_perimeter()const {return 2 * 3.14 * radius;}
    void show()const
    {
        std::cout << name << " type: " << type << ", area: " << get_area() << ", perimeter: " << get_perimeter() << std::endl;
    }
};

class Square : public Shape
{
private:
    double side;
public:
    Square(std::string name, double side, std::string type = "2D") : Shape(name, type)
    {
        this->name = name;
        this->type = type;
        this->side = side;
    }
    double get_area()const {return side * side;}
    double get_perimeter()const {return 4 * side;}
    void show()const
    {
        std::cout << name << " type: " << type << ", area: " << get_area() << ", perimeter: " << get_perimeter() << std::endl;
    }
};

class Rectangle : public Shape
{
private:
    double side_a, side_b;
public:
    Rectangle(std::string name, double side_a, double side_b, std::string type = "2D") : Shape(name, type)
    {
        this->name = name;
        this->type = type;
        this->side_a = side_a;
        this->side_b = side_b;
    }
    double get_area()const {return side_a * side_b;}
    double get_perimeter()const {return 2 * (side_a + side_b);}
    void show()const
    {
        std::cout << name << " type: " << type << ", area: " << get_area() << ", perimeter: " << get_perimeter() << std::endl;
    }
};

class Triangle : public Shape
{
private:
    double side_a, side_b, side_c;
public:
    Triangle(std::string name, double side_a, double side_b, double side_c, std::string type = "2D") : Shape(name, type)
    {
        this->name = name;
        this->type = type;
        this->side_a = side_a;
        this->side_b = side_b;
        this->side_c = side_c;
    }
    double get_area()const
    {
        double p = (side_a + side_b + side_c) / 2;
        return std::sqrt(p *(p - side_a) *(p - side_b)*(p - side_c));
    }
    double get_perimeter()const {return side_a + side_b + side_c;}
    void show()const
    {
        std::cout << name << " type: " << type << ", area: " << get_area() << ", perimeter: " << get_perimeter() << std::endl;
    }
};

class Cube : public Shape
{
private:
    double length;
public:
    Cube(std::string name, double length, std::string type = "3D") : Shape(name, type)
    {
        this->name = name;
        this->type = type;
        this->length = length;
    }
    double get_area()const {return 6 * length * length;}
    double get_volume()const {return length * length * length;}
    double get_perimeter()const {return 12 * length;}
    void show()const
    {
        std::cout << name << " type: " << type << ", area: " << get_area() << ", volume: " << get_volume() << ", perimeter: " << get_perimeter() << std::endl;
    }
};

class Sphere : public Shape
{
private:
    double radius;
public:
    Sphere(std::string name, double radius, std::string type = "3D") : Shape(name, type)
    {
        this->name = name;
        this->type = type;
        this->radius = radius;
    }
    double get_area()const {return 4 * 3.14 * radius * radius;}
    double get_volume()const {return (4 / 3) * 3.14 * radius * radius * radius;}
    void show()const
    {
        std::cout << name << " type: " << type << ", area: " << get_area() << ", volume: " << get_volume() << std::endl;
    }
};


/*
--Реализовать конструкторы,
--Методы, выводящие информацию о фигуре(название и тип),
--Методы, считающие площадь, периметр и объем(где он есть)
*/


int main()
{
    Circle crcl("Circle", 2.1);
    Square sqr("Square", 4.);
    Rectangle rect("Rectangle", 5., 4.);
    Triangle triangl("Triangle", 3., 4., 5.);
    Cube cbe("Cube", 6.);
    Sphere sph("Sphere", 5.);
    crcl.show();
    sqr.show();
    rect.show();
    triangl.show();
    cbe.show();
    sph.show();
    return 0;
}
