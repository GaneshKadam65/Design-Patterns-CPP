#include <iostream>

class Product {
public:
    virtual void operation() = 0;
};

class ConcreteProduct : public Product {
public:
    void operation() {
        std::cout << "ConcreteProduct operation." << std::endl;
    }
};

class Creator {
public:
    virtual Product* createProduct() = 0;
};

class ConcreteCreator : public Creator {
public:
    Product* createProduct() {
        return new ConcreteProduct();
    }
};

int main() {
    Creator* creator = new ConcreteCreator();
    Product* product = creator->createProduct();
    product->operation();
    // Use the product
    return 0;
}
