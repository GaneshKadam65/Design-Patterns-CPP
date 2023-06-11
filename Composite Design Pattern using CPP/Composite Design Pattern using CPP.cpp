#include <iostream>
#include <vector>

class Component {
public:
    virtual void operation() = 0;
};

class Leaf : public Component {
public:
    void operation() {
        std::cout << "Leaf operation." << std::endl;
    }
};

class Composite : public Component {
public:
    void operation() {
        std::cout << "Composite operation." << std::endl;

        for (Component* component : components) {
            component->operation();
        }
    }

    void addComponent(Component* component) {
        components.push_back(component);
    }

    void removeComponent(Component* component) {
        // Remove the component from the vector
    }

private:
    std::vector<Component*> components;
};

int main() {
    Component* leaf1 = new Leaf();
    Component* leaf2 = new Leaf();
    Component* composite = new Composite();

    composite->addComponent(leaf1);
    composite->addComponent(leaf2);

    composite->operation();

    return 0;
}
