#include <iostream>

class Context;

class State {
public:
    virtual void handle(Context* context) = 0;
};

class ConcreteStateA : public State {
public:
    void handle(Context* context);
};

class ConcreteStateB : public State {
public:
    void handle(Context* context);
};

class Context {
private:
    State* currentState;
public:
    Context() : currentState(nullptr) {}
    void setCurrentState(State* state) {
        currentState = state;
    }
    void request() {
        currentState->handle(this);
    }
};

void ConcreteStateA::handle(Context* context) {
    std::cout << "ConcreteStateA handles the request." << std::endl;
    // Change the state if necessary
    context->setCurrentState(new ConcreteStateB());
}

void ConcreteStateB::handle(Context* context) {
    std::cout << "ConcreteStateB handles the request." << std::endl;
    // Change the state if necessary
    context->setCurrentState(new ConcreteStateA());
}

int main() {
    Context context;
    context.setCurrentState(new ConcreteStateA());

    context.request();
    context.request();
    context.request();

    return 0;
}
