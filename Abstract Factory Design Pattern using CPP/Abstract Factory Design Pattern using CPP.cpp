#include <iostream>

class AbstractProductA {
public:
    virtual void operation() = 0;
};

class ConcreteProductA : public AbstractProductA {
public:
    void operation() {
        std::cout << "ConcreteProductA operation." << std::endl;
    }
};

class AbstractProductB {
public:
    virtual void operation() = 0;
};

class ConcreteProductB : public AbstractProductB {
public:
    void operation() {
        std::cout << "ConcreteProductB operation." << std::endl;
    }
};

class AbstractFactory {
public:
    virtual AbstractProductA* createProductA() = 0;
    virtual AbstractProductB* createProductB() = 0;
};

class ConcreteFactory : public AbstractFactory {
public:
    AbstractProductA* createProductA() {
        return new ConcreteProductA();
    }

    AbstractProductB* createProductB() {
        return new ConcreteProductB();
    }
};

int main() {
    AbstractFactory* factory = new ConcreteFactory();
    AbstractProductA* productA = factory->createProductA();
    AbstractProductB* productB = factory->createProductB();
    productA->operation();
    productB->operation();
    // Use the products
    return 0;
}
