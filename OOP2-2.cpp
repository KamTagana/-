#include <iostream>

//--------------------Task#2----------------------//

using namespace std;

class Fruit {
private:
    std::string f_name;
    std::string f_color;
public:
    Fruit(std::string name = "", std::string color = "") : f_name(name), f_color(color) {}

    std::string getName() const { return f_name; }
    std::string getColor() const { return f_color; }
};

class Apple : public Fruit{
public:
    Apple(std::string name = "Apple", std::string color = "") : Fruit(name, color){}

};

class Banana : public Fruit {
public:
    Banana(std::string name = "Banana", std::string color = "Yellow") : Fruit(name, color) {}
};

class GrannySmith : public Apple {
public:
    GrannySmith(std::string name = "GrannySmith apple", std::string color = "Green") : Apple(name, color) {}
};

int main()
{
    Apple a("red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    return 0;
}

