#include <iostream>

// Subsystem classes
class SubsystemA {
public:
    void operationA() {
        std::cout << "SubsystemA operation." << std::endl;
    }
};

class SubsystemB {
public:
    void operationB() {
        std::cout << "SubsystemB operation." << std::endl;
    }
};

// Facade class
class Facade {
private:
    SubsystemA* subsystemA;
    SubsystemB* subsystemB;
public:
    Facade() {
        subsystemA = new SubsystemA();
        subsystemB = new SubsystemB();
    }

    void operation() {
        subsystemA->operationA();
        subsystemB->operationB();
    }
};

int main() {
    Facade facade;
    facade.operation();

    return 0;
}
