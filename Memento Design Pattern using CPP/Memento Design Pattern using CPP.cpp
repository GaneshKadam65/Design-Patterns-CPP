#include <iostream>
#include <string>

class Memento {
private:
    std::string state;
public:
    Memento(const std::string& s) : state(s) {}
    std::string getState() const {
        return state;
    }
};

class Originator {
private:
    std::string state;
public:
    void setState(const std::string& s) {
        state = s;
    }
    std::string getState() const {
        return state;
    }
    Memento* createMemento() {
        return new Memento(state);
    }
    void restoreMemento(const Memento* memento) {
        state = memento->getState();
    }
};

class Caretaker {
private:
    Memento* memento;
public:
    void setMemento(Memento* mem) {
        memento = mem;
    }
    Memento* getMemento() const {
        return memento;
    }
};

int main() {
    Originator originator;
    originator.setState("State 1");

    Caretaker caretaker;
    caretaker.setMemento(originator.createMemento());

    originator.setState("State 2");
    std::cout << "Current state: " << originator.getState() << std::endl;

    originator.restoreMemento(caretaker.getMemento());
    std::cout << "Restored state: " << originator.getState() << std::endl;

    return 0;
}
