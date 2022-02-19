#include <iostream>

using namespace std;

//----------------------Task#1----------------------//

class Person 
{
public:
    std::string m_name;
    int m_age;
    int m_weight;

    Person(std::string name = "A", int age = 0, int weight = 0)
        : m_name(name), m_age(age), m_weight(weight)
    {
    }

    std::string getName() const { return m_name; }
    int getAge() const { return m_age; }
    int getWeight() const { return m_weight; }
};

void printPerson(Person& person)
{
    std::cout << "Name: " << person.getName() << '\n' << "Age: " << person.getAge()  << '\n' << "Weight: " <<  person.getWeight() << '\n';
}

class Student : public Person 
{
public:
    int m_year;

    Student(int year) : m_year(year)
    {
    }

    int getYear() const { return m_year; }
};

void printStudent(Student& student)
{
    std::cout << "Year: " << student.getYear() << '\n';
}

int main() 
{
    Person person("Vladislav", 26, 70);
    Student student(5);
    printPerson(person);
    printStudent(student);

    Person alexey;
    alexey.m_name = "Alexey";
    alexey.m_age = 31;
    alexey.m_weight = 80;
    std::cout << '\n' << "Name: " << alexey.getName() << '\n' << "Age: " << alexey.getAge() << '\n' << "Weight: " << alexey.getWeight() << '\n';
    

    Person andrey;
    andrey.m_name = "Andrey";
    andrey.m_age = 18;
    andrey.m_weight = 68;
    std::cout << '\n' << "Name: " << andrey.getName() << '\n' << "Age: " << andrey.getAge() << '\n' << "Weight: " << andrey.getWeight() << '\n';
   

    return 0;
    
}

