#include <iostream>

class Handler {
protected:
    Handler* successor;
public:
    Handler() : successor(nullptr) {}
    void setSuccessor(Handler* handler) {
        successor = handler;
    }
    virtual void handleRequest(int request) = 0;
};

class ConcreteHandlerA : public Handler {
public:
    void handleRequest(int request) {
        if (request < 10) {
            std::cout << "ConcreteHandlerA handles the request." << std::endl;
        }
        else if (successor != nullptr) {
            successor->handleRequest(request);
        }
    }
};

class ConcreteHandlerB : public Handler {
public:
    void handleRequest(int request) {
        if (request >= 10 && request < 20) {
            std::cout << "ConcreteHandlerB handles the request." << std::endl;
        }
        else if (successor != nullptr) {
            successor->handleRequest(request);
        }
    }
};

class ConcreteHandlerC : public Handler {
public:
    void handleRequest(int request) {
        if (request >= 20) {
            std::cout << "ConcreteHandlerC handles the request." << std::endl;
        }
        else if (successor != nullptr) {
            successor->handleRequest(request);
        }
    }
};

int main() {
    Handler* handlerA = new ConcreteHandlerA();
    Handler* handlerB = new ConcreteHandlerB();
    Handler* handlerC = new ConcreteHandlerC();

    handlerA->setSuccessor(handlerB);
    handlerB->setSuccessor(handlerC);

    handlerA->handleRequest(5);
    handlerA->handleRequest(15);
    handlerA->handleRequest(25);

    return 0;
}
