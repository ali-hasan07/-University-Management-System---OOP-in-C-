#include <iostream>
#include <string>
using namespace std;

// 1. Base Class - الكلاس الاب
class Person {
protected:
    string name;
    int id;

public:
    // Constructor
    Person(string n, int i) {
        name = n;
        id = i;
    }

    // Destructor
    virtual ~Person() {
        // يتنفذ عند حذف الكائن
    }

    // Encapsulation - Setter / Getter
    void setName(string n) { name = n; }
    string getName() { return name; }

    // Polymorphism - دالة وهمية راح تتغير بالابناء
    virtual void showInfo() {
        cout << "Name: " << name << " | ID: " << id << endl;
    }
};

// 2. Derived Class - الابن الاول : وراثة من Person
class Student : public Person {
private:
    double grade; // private = Encapsulation

public:
    // Constructor للابن ينادي constructor الاب
    Student(string n, int i, double g) : Person(n, i) {
        grade = g;
    }

    void setGrade(double g) { grade = g; }
    double getGrade() { return grade; }

    // Override - نعيد تعريف الدالة
    void showInfo() override {
        cout << "[Student] Name: " << name
             << " | ID: " << id
             << " | Grade: " << grade << endl;
    }
};

// 3. Derived Class - الابن الثاني
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(string n, int i, string s) : Person(n, i) {
        subject = s;
    }

    void showInfo() override {
        cout << "[Teacher] Name: " << name
             << " | ID: " << id
             << " | Subject: " << subject << endl;
    }
};

int main() {
    // Polymorphism : مؤشر من نوع الاب يشير لابن
    Person* p1 = new Student("Ali", 101, 95.5);
    Person* p2 = new Teacher("Ahmed", 201, "AI");

    cout << "--- University System ---" << endl;
    p1->showInfo(); // راح يطبع مال الطالب مو مال الاب
    p2->showInfo(); // راح يطبع مال المدرس

    // تجربة الـ Setter / Getter
    p1->setName("Ali Hassan");
    cout << "After Update: " << p1->getName() << endl;

    delete p1; // هنا يشتغل الـ Destructor
    delete p2;

    return 0;
}
