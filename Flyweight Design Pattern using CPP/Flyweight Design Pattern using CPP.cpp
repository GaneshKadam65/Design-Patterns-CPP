#include <iostream>
#include <string>
#include <unordered_map>

class Flyweight {
private:
    std::string intrinsicState;
public:
    Flyweight(const std::string& intrinsicState) : intrinsicState(intrinsicState) {}

    void operation(const std::string& extrinsicState) {
        std::cout << "Intrinsic State: " << intrinsicState << ", Extrinsic State: " << extrinsicState << std::endl;
    }
};

class FlyweightFactory {
private:
    std::unordered_map<std::string, Flyweight*> flyweights;
public:
    Flyweight* getFlyweight(const std::string& key) {
        if (flyweights.find(key) == flyweights.end()) {
            flyweights[key] = new Flyweight(key);
        }
        return flyweights[key];
    }
};

int main() {
    FlyweightFactory factory;

    Flyweight* flyweight1 = factory.getFlyweight("A");
    flyweight1->operation("Extrinsic State 1");

    Flyweight* flyweight2 = factory.getFlyweight("B");
    flyweight2->operation("Extrinsic State 2");

    return 0;
}
