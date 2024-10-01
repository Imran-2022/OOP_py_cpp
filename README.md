# Object-Oriented Programming Concepts

## 1. Abstraction
Abstraction is the concept of hiding complex implementation details and showing only the essential features of an object. It allows developers to focus on what an object does, rather than how it does it. This is typically achieved through abstract classes and interfaces.

## 2. Class
A class is a blueprint for creating objects. It defines a data structure by bundling attributes (variables) and behaviors (methods) into a single unit. Each object created from the class will have the same attributes and behaviors.

## 3. Encapsulation
Encapsulation is the practice of bundling the data (attributes) and the methods that operate on the data into a single unit, typically a class. It also involves restricting direct access to some of the object’s components, usually by making attributes private and providing public getter and setter methods.

## 4. Inheritance
Inheritance allows one class (child class) to inherit properties and methods from another class (parent class). It promotes code reusability and establishes a relationship between classes. The child class can override or extend the behavior of the parent class.

## 5. Methods
Methods are functions defined inside a class that represent the behaviors of the object. They are responsible for manipulating object data and defining actions that an object can perform.

## 6. Object
An object is an instance of a class. It contains both data (attributes) and methods (functions) that define its behavior. Each object has a unique identity and state, and the ability to interact with other objects.

## 7. Polymorphism
Polymorphism means "many forms." It allows objects of different types to be treated as objects of a common supertype. The most common use of polymorphism in OOP is through method overriding (runtime polymorphism) and method overloading (compile-time polymorphism).

## 8. Abstract vs Interface
- **Abstract Classes** can have both fully implemented methods and abstract methods that must be overridden by derived classes. They provide partial implementation.
- **Interfaces** only declare method signatures and provide no implementation. Any class that implements an interface must provide implementations for all its methods.

## 9. Virtual Keyword
The `virtual` keyword is used to modify a method, property, indexer, or event declaration, allowing it to be overridden in a derived class. It supports dynamic polymorphism, meaning the method implementation that gets executed is determined at runtime based on the object's type.
