#include <iostream>

class Subject {
public:
    virtual void request() = 0;
};

class RealSubject : public Subject {
public:
    void request() {
        std::cout << "RealSubject request." << std::endl;
    }
};

class Proxy : public Subject {
private:
    RealSubject* realSubject;
public:
    void request() {
        if (realSubject == nullptr) {
            realSubject = new RealSubject();
        }

        realSubject->request();
    }
};

int main() {
    Proxy* proxy = new Proxy();
    proxy->request();

    return 0;
}
