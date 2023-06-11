#include <iostream>

class Prototype {
public:
    virtual Prototype* clone() = 0;
    virtual void info() = 0;
};

class ConcretePrototypeA : public Prototype {
public:
    Prototype* clone() {
        return new ConcretePrototypeA(*this);
    }

    void info() {
        std::cout << "ConcretePrototypeA" << std::endl;
    }
};

class ConcretePrototypeB : public Prototype {
public:
    Prototype* clone() {
        return new ConcretePrototypeB(*this);
    }

    void info() {
        std::cout << "ConcretePrototypeB" << std::endl;
    }
};

int main() {
    Prototype* prototypeA = new ConcretePrototypeA();
    Prototype* cloneA = prototypeA->clone();
    cloneA->info();

    Prototype* prototypeB = new ConcretePrototypeB();
    Prototype* cloneB = prototypeB->clone();
    cloneB->info();

    return 0;
}
