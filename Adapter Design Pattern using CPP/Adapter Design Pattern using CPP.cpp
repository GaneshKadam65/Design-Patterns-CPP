#include <iostream>

class Target {
public:
    virtual void request() = 0;
};

class Adaptee {
public:
    void specificRequest() {
        std::cout << "Adaptee's specific request." << std::endl;
    }
};

class Adapter : public Target {
private:
    Adaptee* adaptee;
public:
    Adapter() {
        adaptee = new Adaptee();
    }

    void request() {
        adaptee->specificRequest();
    }
};

int main() {
    Target* target = new Adapter();
    target->request();

    return 0;
}
