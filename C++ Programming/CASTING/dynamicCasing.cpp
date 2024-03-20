#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void makeSound(){
        cout<<"Animal Sound"<<endl;
    }
};
class Dog : public Animal{
    public:
    void makeSound() override{
        cout<<"Dog Sound"<<endl;
    }
};
class Cat : public Animal{
    public:
    void makeSound() override{
        cout<<"Cat Sound"<<endl;
    }
};
class Cow : public Animal{
    //no Overridden function
/*
    public:
    void makeSound() override{
        cout<<"Cow Sound"<<endl;
    }
    */
};

int main(){
    Animal *animalPtr = new Dog;       //assigning pointer for base class with object of erived class
    Dog * dogPtr=dynamic_cast<Dog *>(animalPtr);    //Downcasting--making pointer of derived class with base class pointer
    Cat * catPtr=dynamic_cast<Cat *>(animalPtr);
    Cow * cowPtr=dynamic_cast<Cow *>(animalPtr);

    if(dogPtr){
        dogPtr->makeSound();
    }
    else{
        cout<<"No Downcasting"<<endl;
    }

    if(catPtr){
        catPtr->makeSound();
    }
    else{
        cout<<"No Downcasting"<<endl;
    }

    if(cowPtr){
        cowPtr->makeSound();    //will give result for base class as not overridden
    }
    else{
        cout<<"No Downcasting"<<endl;
    }

/*
    catPtr->makeSound();    
    dogPtr->makeSound();
    cowPtr->makeSound();
    */
}