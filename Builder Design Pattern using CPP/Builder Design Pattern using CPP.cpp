#include <iostream>
#include <string>

class Product {
public:
    void setPartA(const std::string& part) {
        partA = part;
    }

    void setPartB(const std::string& part) {
        partB = part;
    }

    void showParts() {
        std::cout << "Part A: " << partA << std::endl;
        std::cout << "Part B: " << partB << std::endl;
    }

private:
    std::string partA;
    std::string partB;
};

class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getProduct() = 0;
};

class ConcreteBuilder : public Builder {
public:
    void buildPartA() {
        product->setPartA("Part A");
    }

    void buildPartB() {
        product->setPartB("Part B");
    }

    Product* getProduct() {
        return product;
    }

private:
    Product* product = new Product();
};

class Director {
public:
    void construct(Builder* builder) {
        builder->buildPartA();
        builder->buildPartB();
    }
};

int main() {
    Director director;
    ConcreteBuilder builder;

    director.construct(&builder);
    Product* product = builder.getProduct();
    product->showParts();

    return 0;
}
