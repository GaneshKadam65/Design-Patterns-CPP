#include <iostream>

class Implementor {
public:
    virtual void operationImpl() = 0;
};

class ConcreteImplementorA : public Implementor {
public:
    void operationImpl() {
        std::cout << "ConcreteImplementorA operation implementation." << std::endl;
    }
};

class ConcreteImplementorB : public Implementor {
public:
    void operationImpl() {
        std::cout << "ConcreteImplementorB operation implementation." << std::endl;
    }
};

class Abstraction {
protected:
    Implementor* implementor;
public:
    virtual void operation() = 0;
    void setImplementor(Implementor* impl) {
        implementor = impl;
    }
};

class RefinedAbstraction : public Abstraction {
public:
    void operation() {
        implementor->operationImpl();
    }
};

int main() {
    Abstraction* abstraction = new RefinedAbstraction();
    Implementor* implementorA = new ConcreteImplementorA();
    Implementor* implementorB = new ConcreteImplementorB();

    abstraction->setImplementor(implementorA);
    abstraction->operation();

    abstraction->setImplementor(implementorB);
    abstraction->operation();

    return 0;
}
