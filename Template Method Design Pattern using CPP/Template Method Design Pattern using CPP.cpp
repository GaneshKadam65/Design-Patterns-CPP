#include <iostream>

class AbstractClass {
public:
    void templateMethod() {
        primitiveOperation1();
        primitiveOperation2();
    }

    virtual void primitiveOperation1() = 0;
    virtual void primitiveOperation2() = 0;
};

class ConcreteClass : public AbstractClass {
public:
    void primitiveOperation1() {
        std::cout << "ConcreteClass: primitiveOperation1." << std::endl;
    }

    void primitiveOperation2() {
        std::cout << "ConcreteClass: primitiveOperation2." << std::endl;
    }
};

int main() {
    AbstractClass* abstractClass = new ConcreteClass();
    abstractClass->templateMethod();

    return 0;
}
