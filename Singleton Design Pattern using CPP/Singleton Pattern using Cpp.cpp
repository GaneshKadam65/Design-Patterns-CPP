#include <iostream>

class Singleton {
private:
    static Singleton* instance;
    int data;

    // Private constructor to prevent direct instantiation
    Singleton() {
        data = 0;
    }

public:
    // Public static method to get the singleton instance
    static Singleton* getInstance() {
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Public method to access the data
    int getData() {
        return data;
    }

    // Public method to set the data
    void setData(int newData) {
        data = newData;
    }
};

// Initializing the static instance pointer to nullptr
Singleton* Singleton::instance = nullptr;

int main() {
    // Get the singleton instance
    Singleton* singleton = Singleton::getInstance();

    // Set and retrieve data
    singleton->setData(42);
    std::cout << "Data: " << singleton->getData() << std::endl;

    // Try to create another instance
    Singleton* anotherSingleton = Singleton::getInstance();
    std::cout << "Data from another instance: " << anotherSingleton->getData() << std::endl;

    // The same instance is returned
    if (singleton == anotherSingleton) {
        std::cout << "Both pointers refer to the same instance." << std::endl;
    }

    return 0;
}
