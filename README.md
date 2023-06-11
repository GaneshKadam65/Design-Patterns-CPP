# Design-Patterns-CPP
Design patterns are used in software development for several reasons:

**Reusability**: Design patterns provide reusable solutions to common design problems. They capture best practices and proven solutions that can be applied in different contexts and scenarios. By using design patterns, developers can leverage existing solutions and avoid reinventing the wheel, saving time and effort.

**Maintainability**: Design patterns promote code maintainability by providing a structured and organized approach to software design. They help in separating concerns, decoupling components, and establishing clear interfaces and boundaries. This makes the codebase more modular, flexible, and easier to understand, modify, and maintain over time.

**Extensibility**: Design patterns support the extensibility of software systems. They allow for easy modification and enhancement of existing code without affecting other parts of the system. By following design patterns, developers can design software that is open for extension but closed for modification, enabling the addition of new features and functionality with minimal impact on the existing codebase.

**Scalability**: Design patterns contribute to the scalability of software systems. They provide scalable architectures and design principles that help in managing complexity and accommodating changes. Design patterns allow developers to design systems that can handle increasing demands, larger datasets, and evolving requirements, ensuring that the software can scale effectively as the needs of the application grow.

**Collaboration and Communication**: Design patterns serve as a common language for developers. They provide a vocabulary and shared understanding of software design concepts, allowing team members to communicate effectively and collaborate on the design and implementation of software systems. Design patterns act as a bridge between different team members and help in fostering collaboration and knowledge sharing.

**Testability**: Design patterns contribute to the testability of software systems. They promote the separation of concerns, which makes it easier to isolate and test individual components. By following design patterns, developers can design code that is modular and loosely coupled, enabling better unit testing and ensuring the reliability and quality of the software.

**Industry Standards**: Design patterns have become widely adopted and recognized as industry standards. They provide a common set of solutions that are widely understood and used by developers worldwide. By using design patterns, developers can align their code with industry standards and best practices, making it easier for other developers to understand and work with the code.

Overall, design patterns serve as guidelines and tools that help in designing software that is maintainable, extensible, scalable, and of high quality. They provide proven solutions to common design problems, leading to more robust and reliable software systems.

Types of design patterns are as following
**Singleton Pattern**:
The Singleton Pattern ensures that only one instance of a class is created and provides a global point of access to it. It is commonly used when you need to limit the number of instances of a class and provide a single point of access to that instance.

**Factory Pattern**:
The Factory Pattern provides an interface for creating objects but delegates the responsibility of instantiation to subclasses or derived classes. It is useful when you want to encapsulate object creation logic and provide a consistent interface for creating different types of objects.

**Abstract Factory Pattern**:
The Abstract Factory Pattern provides an interface for creating families of related or dependent objects without specifying their concrete classes. It allows the creation of objects that are related and compatible with each other, ensuring the consistency of the created objects.

**Builder Pattern**:
The Builder Pattern separates the construction of a complex object from its representation, allowing the same construction process to create different representations. It is useful when you want to create objects step by step, with different combinations of attributes, while keeping the construction process flexible.

**Prototype Pattern**:
The Prototype Pattern involves creating new objects by cloning existing ones. It allows you to create new objects without explicitly specifying their classes by copying existing objects. This pattern is useful when creating complex objects can be expensive, and you want to create new objects based on existing ones.

**Adapter Pattern**:
The Adapter Pattern converts the interface of a class into another interface that clients expect. It allows incompatible classes to work together by wrapping the functionality of one class with a different interface. This pattern is useful when you want to make existing classes work with other classes without modifying their source code.

**Bridge Pattern**:
The Bridge Pattern decouples an abstraction from its implementation, allowing both to vary independently. It separates the interface (abstraction) from its implementation, providing a bridge between them. This pattern is useful when you want to separate the abstraction and implementation hierarchies and be able to extend and combine them independently.

**Composite Pattern**:
The Composite Pattern allows you to compose objects into tree-like structures to represent part-whole hierarchies. It treats individual objects and compositions of objects uniformly, allowing clients to work with them uniformly. This pattern is useful when you want to represent hierarchical structures and want to treat individual objects and groups of objects in a uniform manner.

**Proxy Pattern**:
The Proxy Pattern provides a surrogate or placeholder object to control access to another object. It adds a level of indirection to an object, allowing you to control and manage access to the original object. This pattern is useful when you want to add additional behavior or control access to an object without modifying its implementation.

**Decorator Pattern**:
The Decorator Pattern attaches additional responsibilities to an object dynamically. It provides a flexible alternative to subclassing for extending the functionality of objects. This pattern is useful when you want to add new behaviors or functionalities to an object at runtime without modifying its structure or using inheritance.

**Facade Pattern**:
The Facade Pattern provides a simplified interface to a complex subsystem of classes, making it easier to use and understand. It acts as a unified interface that provides a higher-level interface to a set of interfaces within a subsystem. This pattern is useful when you want to provide a simple and unified interface to a complex system or set of classes.

**Flyweight Pattern**:
The Flyweight Pattern reduces the memory footprint of objects by sharing common data across multiple objects. It allows the sharing of objects to support a large number of fine-grained objects efficiently. This pattern is useful when you need to create a large number of similar objects and want to optimize memory usage.

**Chain of Responsibility Pattern**:
The Chain of Responsibility Pattern creates a chain of objects, where each object in the chain has a chance to handle a request. If the first object cannot handle the request, it passes the request to the next object in the chain until the request is handled or reaches the end of the chain. This pattern is useful when you want to decouple senders and receivers of a request and allow multiple objects to handle the request independently.

**Command Pattern**:
The Command Pattern encapsulates a request as an object, allowing you to parameterize clients with different requests, queue or log requests, and support undoable operations. It separates the requester of an operation from the object that performs the operation. This pattern is useful when you want to decouple the sender and receiver of a request and encapsulate a request as an object.

**Iterator Pattern**:
The Iterator Pattern provides a way to access the elements of an aggregate object sequentially without exposing its underlying representation. It decouples the algorithm for traversing an aggregate from the aggregate itself. This pattern is useful when you want to provide a standard way to traverse and access the elements of a collection or aggregate object.

**Memento Pattern**:
The Memento Pattern provides a way to capture and restore an object's internal state without violating encapsulation. It allows you to save and restore the state of an object, making it possible to undo or rollback changes. This pattern is useful when you want to provide a mechanism to save and restore the state of an object and maintain encapsulation.

**Observer Pattern**:
The Observer Pattern defines a one-to-many dependency between objects, where when one object changes its state, all its dependents are notified and updated automatically. It establishes a relationship between a subject and one or more observers. This pattern is useful when you want to establish loosely coupled relationships between objects, where changes in one object trigger updates in other dependent objects.

**State Pattern**:
The State Pattern allows an object to alter its behavior when its internal state changes. It encapsulates different behaviors into separate state classes and delegates the behavior to the current state. This pattern is useful when you want an object to change its behavior dynamically based on its internal state.

**Strategy Pattern**:
The Strategy Pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. It allows you to select an algorithm at runtime based on the desired behavior. This pattern is useful when you want to define a set of related algorithms or behaviors and make them interchangeable without affecting the clients.

**Template Method Pattern**:
The Template Method Pattern defines the skeleton of an algorithm in a base class and lets subclasses override certain steps of the algorithm without changing its structure. It provides a template for an algorithm and allows subclasses to redefine certain steps. This pattern is useful when you want to define an algorithm with a fixed structure but allow specific steps to be overridden by subclasses.

These descriptions should give you a good overview of each design pattern and their purposes. It's important to study each pattern in detail and understand their implementation nuances to effectively apply them in your software designs.
