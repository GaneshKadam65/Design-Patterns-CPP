#include <iostream>
#include <vector>

class Command {
public:
    virtual void execute() = 0;
};

class Receiver {
public:
    void action() {
        std::cout << "Receiver's action." << std::endl;
    }
};

class ConcreteCommand : public Command {
private:
    Receiver* receiver;
public:
    ConcreteCommand(Receiver* rec) : receiver(rec) {}
    void execute() {
        receiver->action();
    }
};

class Invoker {
private:
    std::vector<Command*> commands;
public:
    void addCommand(Command* cmd) {
        commands.push_back(cmd);
    }
    void executeCommands() {
        for (Command* cmd : commands) {
            cmd->execute();
        }
        commands.clear();
    }
};

int main() {
    Invoker invoker;
    Receiver receiver;
    Command* command = new ConcreteCommand(&receiver);

    invoker.addCommand(command);
    invoker.executeCommands();

    return 0;
}
