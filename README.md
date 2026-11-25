# University Management System - OOP in C++

## 1. Project Overview
This project is a simple University Management System built in C++ using
Object-Oriented Programming (OOP) concepts.

The system manages different types of people in a university (Students and Teachers)
with a common base class and different behaviors.

## 2. Project Idea
In a university, all people share common attributes like Name and ID,
but each type has its own special attributes:
- Student has a Grade
- Teacher has a Subject

Instead of repeating the code, we use Inheritance to reuse the common
attributes from the base class.

## 3. OOP Concepts Used

### a) Encapsulation
- Data members are private and protected.
- Access is only through setName(), getName(), setGrade(), getGrade().
- This protects data from direct modification.

### b) Inheritance
- Person is the Base Class.
- Student and Teacher are Derived Classes.
- They inherit name and id from Person using:
  class Student : public Person

### c) Polymorphism
- showInfo() is declared as virtual in the base class.
- Each derived class overrides it with its own version using override.
- A base class pointer can point to a derived object and call the correct function.

### d) Constructor
- Person(string n, int i) is called automatically when an object is created.
- It initializes the name and ID.
- Derived constructors call the base constructor:
  Student(...) : Person(n, i)

### e) Destructor
- virtual ~Person() is called when the object is deleted with delete.
- It frees memory and prevents memory leaks.

## 4. Class Structure

- *Person (Base Class)*
    - Attributes: name, id
    - Methods: setName(), getName(), showInfo()

- *Student (Derived Class)*
    - Extra Attribute: grade
    - Method: showInfo() -> prints Student info

- *Teacher (Derived Class)*
    - Extra Attribute: subject
    - Method: showInfo() -> prints Teacher info

## 5. How to Run
1. Open any C++ compiler (Code::Blocks / Visual Studio / Online Compiler).
2. Create a file named main.cpp.
3. Paste the code.
4. Compile and Run.
