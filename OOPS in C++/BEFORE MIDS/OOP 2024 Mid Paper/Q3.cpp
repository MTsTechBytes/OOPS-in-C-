using namespace std;
#include <iostream>
#include <string>

class Animal
{
    string name;
    int age;
    string species;

    public:
    Animal(string n, int a, string s) : name(n), age(a), species(s) {}
    
    void displayInfo() const
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Species : " << species << endl;
    }
};

class Habitat
{
    string habitatType, climate;

    public:
    Habitat(string ht, string c) : habitatType(ht), climate(c) {} 

    void displayHabitat() const
    {
        cout << "Habitat Type : " << habitatType << endl;
        cout << "Climate : " << climate << endl;
    }
};

class Mammal : public Animal, public Habitat
{
    string furColor;

    public:
    Mammal (string n, int a, string s, string ht, string c, string fc) : Animal(n, a, s) , Habitat(ht, c) 
    {
        furColor = fc;
    }

    void makeSound()
    {
        cout << "Roar!" <<endl;
    }
};


class Bird : public Animal, public Habitat
{
    string wingSpan;

    public:
    Bird (string n, int a, string s, string ht, string c, string ws) : Animal(n, a, s) , Habitat(ht, c) 
    {
        wingSpan = ws;
    }

    void makeSound()
    {
        cout << "Tweet!" << endl;
    }
};

class Reptile : public Animal, public Habitat
{
    string scalePattern;

    public:
    Reptile (string n, int a, string s, string ht, string c, string sp) : Animal(n, a, s) , Habitat(ht, c) 
    {
        scalePattern = sp;
    }

    void makeSound()
    {
        cout << "Hiss!" << endl;
    }
};

class Carnivore : public Mammal
{
    public:
    Carnivore(string n, int a, string s, string ht, string c, string fc) : Mammal(n, a, s, ht, c, fc) {}

    void eat()
    {
        cout << "Eating meat" << endl;
    }
};

class Herbivore : public Mammal
{
    public:
    Herbivore(string n, int a, string s, string ht, string c, string fc) : Mammal(n, a, s, ht, c, fc) {}

    void eat()
    {
        cout << "Eating plants" << endl;
    }
};

int main()
{
    Carnivore c1("Sheroo", 50, "Lion", "grassland", "tropical", "golden");
    Herbivore h1("Deero", 10, "Dear", "forest", "temperate", "brown");

    c1.displayInfo();  //
    c1.displayHabitat();  
    c1.makeSound();
    c1.eat();

    cout << "\n-------------------------------------------\n";

    h1.displayInfo();
    h1.displayHabitat();
    h1.makeSound();
    h1.eat();

    return 0;
}
