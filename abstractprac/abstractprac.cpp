#include <iostream>
#include<string>
using namespace std;

class Animal
{
protected:
    string name;
    string characteristic;
public:
    Animal(string name, string characteristic) {
        this->name = name;
        this->characteristic = characteristic;
    }
    virtual void Sound() = 0;
    virtual void Show() = 0;
    virtual void Type() = 0;

    virtual ~Animal(){}
};
class Dog :public Animal
{
public:
    Dog(string name, string characteristic)
        :Animal(name, characteristic)
    {
    }
    void Sound() override
    {
        cout << "Wof!" << '\n';
    }
    void Show() override
    {
        cout << "Jack" << name << '\n';
    }
    void Type()override
    {
        cout << "Buldog" << '\n';
    }
};
class Cat :public Animal
{
public:
    Cat(string name, string characteristic)
        :Animal(name, characteristic)
    {
    }
    void Sound() override
    {
        cout << "Mey!" << '\n';
    }
    void Show() override
    {
        cout << "Uki" << name << '\n';
    }
    void Type()override
    {
        cout << "Maine Coon breed" << '\n';
    }
};

class Parrot :public Animal
{
public:
    Parrot(string name, string characteristic)
        :Animal(name, characteristic)
    {
    }
    void Sound() override
    {
        cout << "Gerr!" << '\n';
    }
    void Show() override
    {
        cout << "Grisha" << name << '\n';
    }
    void Type()override
    {
        cout << "budgerigar" << '\n';
    }
};
class Humster :public Animal
{
public:
    Humster(string name, string characteristic)
        :Animal(name, characteristic)
    {
    }
    void Sound() override
    {
        cout << "pi!" << '\n';
    }
    void Show() override
    {
        cout << "Tolstyak" << name << '\n';
    }
    void Type()override
    {
        cout << "Djungarian" << '\n';
    }
};

int main()
{
    std::cout << "Hello World!\n";
}
