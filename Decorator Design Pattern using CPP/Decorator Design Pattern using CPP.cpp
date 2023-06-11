#include <iostream>
#include <string>

class Component {
public:
    virtual void operation() = 0;
};

class ConcreteComponent : public Component {
public:
    void operation() {
        std::cout << "ConcreteComponent operation." << std::endl;
    }
};

class Decorator : public Component {
public:
    Decorator(Component* component) : component(component) {}

    void operation() {
        component->operation();
    }

private:
    Component* component;
};

class ConcreteDecoratorA : public Decorator {
public:
    ConcreteDecoratorA(Component* component) : Decorator(component) {}

    void operation() {
        Decorator::operation();
        std::cout << "Added behavior A." << std::endl;
    }
};

class ConcreteDecoratorB : public Decorator {
public:
    ConcreteDecoratorB(Component* component) : Decorator(component) {}

    void operation() {
        Decorator::operation();
        std::cout << "Added behavior B." << std::endl;
    }
};

int main() {
    Component* component = new ConcreteComponent();
    component->operation();

    Component* decoratorA = new ConcreteDecoratorA(component);
    decoratorA->operation();

    Component* decoratorB = new ConcreteDecoratorB(decoratorA);
    decoratorB->operation();

    return 0;
}
