#include <iostream>
#include <vector>

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual int next() = 0;
};

class Aggregate {
public:
    virtual Iterator* createIterator() = 0;
};

class ConcreteAggregate : public Aggregate {
private:
    std::vector<int> items;
public:
    void addItem(int item) {
        items.push_back(item);
    }
    Iterator* createIterator();
};

class ConcreteIterator : public Iterator {
private:
    ConcreteAggregate* aggregate;
    int position;
public:
    ConcreteIterator(ConcreteAggregate* agg) : aggregate(agg), position(0) {}
    bool hasNext() {
        return position < aggregate->items.size();
    }
    int next() {
        return aggregate->items[position++];
    }
};

Iterator* ConcreteAggregate::createIterator() {
    return new ConcreteIterator(this);
}

int main() {
    ConcreteAggregate aggregate;
    aggregate.addItem(1);
    aggregate.addItem(2);
    aggregate.addItem(3);

    Iterator* iterator = aggregate.createIterator();
    while (iterator->hasNext()) {
        std::cout << iterator->next() << " ";
    }
    std::cout << std::endl;

    return 0;
}
