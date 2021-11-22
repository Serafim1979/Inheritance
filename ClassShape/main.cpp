#include<iostream>
#include<string>

class Shape
{
private:
    std::string name;

public:
    Shape(std::string name)
    {
        this->name = name;
    }
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
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
