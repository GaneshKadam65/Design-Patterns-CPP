#include <iostream>

class Strategy {
public:
    virtual void execute() = 0;
};

class ConcreteStrategyA : public Strategy {
public:
    void execute() {
        std::cout << "ConcreteStrategyA execute." << std::endl;
    }
};

class ConcreteStrategyB : public Strategy {
public:
    void execute() {
        std::cout << "ConcreteStrategyB execute." << std::endl;
    }
};

class Context {
private:
    Strategy* strategy;
public:
    void setStrategy(Strategy* strat) {
        strategy = strat;
    }
    void executeStrategy() {
        strategy->execute();
    }
};

int main() {
    Context context;
    ConcreteStrategyA strategyA;
    ConcreteStrategyB strategyB;

    context.setStrategy(&strategyA);
    context.executeStrategy();

    context.setStrategy(&strategyB);
    context.executeStrategy();

    return 0;
}
