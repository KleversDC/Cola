#include <iostream>
using namespace std;
//1
//class Vehicle {
//protected:
//    const char* brand;
//    const char* model;
//
//public:
//    Vehicle(const char* b, const char* m) : brand(b), model(m) {}
//
//    virtual void PrintInfo() {
//        cout << "Brand: " << brand << ", Model: " << model << endl;
//    }
//};
//
//class Car : public Vehicle {
//private:
//    int numDoors;
//
//public:
//    Car(const char* b, const char* m, int doors) : Vehicle(b, m), numDoors(doors) {}
//
//    void PrintInfo() override {
//        Vehicle::PrintInfo();
//        cout << "Number of doors: " << numDoors << endl;
//    }
//};
//
//class Motorcycle : public Vehicle {
//private:
//    bool hasSidecar;
//
//public:
//    Motorcycle(const char* b, const char* m, bool sidecar) : Vehicle(b, m), hasSidecar(sidecar) {}
//
//    void PrintInfo() override {
//        Vehicle::PrintInfo();
//        cout << "Has sidecar: " << (hasSidecar ? "Yes" : "No") << endl;
//    }
//};

//2
//class Shape {
//public:
//    virtual double Area() = 0;
//};
//
//class Circle : public Shape {
//private:
//    double radius;
//
//public:
//    Circle(double r) : radius(r) {}
//
//    double Area() override {
//        return 3.14159 * radius * radius;
//    }
//};
//
//class Rectangle : public Shape {
//private:
//    double width;
//    double height;
//
//public:
//    Rectangle(double w, double h) : width(w), height(h) {}
//
//    double Area() override {
//        return width * height;
//    }
//};
// 3
//class Employee {
//protected:
//    const char* name;
//    int id;
//
//public:
//    Employee(const char* n, int i) : name(n), id(i) {}
//
//    virtual double CalculateSalary() = 0;
//
//    void PrintInfo() {
//        cout << "Employee: " << name << ", ID: " << id << endl;
//    }
//};
//
//class HourlyEmployee : public Employee {
//private:
//    double hourlyRate;
//    int hoursWorked;
//
//public:
//    HourlyEmployee(const char* n, int i, double rate, int hours)
//        : Employee(n, i), hourlyRate(rate), hoursWorked(hours) {}
//
//    double CalculateSalary() override {
//        return hourlyRate * hoursWorked;
//    }
//};
//
//class SalariedEmployee : public Employee {
//private:
//    double monthlySalary;
//
//public:
//    SalariedEmployee(const char* n, int i, double salary)
//        : Employee(n, i), monthlySalary(salary) {}
//
//    double CalculateSalary() override {
//        return monthlySalary;
//    }
//};
//4
//class Animal {
//public:
//    virtual void MakeSound() = 0;
//};
//
//class Dog : public Animal {
//public:
//    void MakeSound() override {
//        cout << "Dog: Woof!" << endl;
//    }
//};
//
//class Cat : public Animal {
//public:
//    void MakeSound() override {
//        cout << "Cat: Meow!" << endl;
//    }
//};
//
//class Cow : public Animal {
//public:
//    void MakeSound() override {
//        cout << "Cow: Moo!" << endl;
//    }
//};
//5
class Person {
protected:
    const char* name;
    int age;

public:
    Person(const char* n, int a) : name(n), age(a) {}

    virtual void PrintInfo() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person {
private:
    int studentID;

public:
    Student(const char* n, int a, int id) : Person(n, a), studentID(id) {}

    void PrintInfo() override {
        Person::PrintInfo();
        cout << "Student ID: " << studentID << endl;
    }
};

class Teacher : public Person {
private:
    const char* subject;

public:
    Teacher(const char* n, int a, const char* subj) : Person(n, a), subject(subj) {}

    void PrintInfo() override {
        Person::PrintInfo();
        cout << "Subject: " << subject << endl;
    }
};



















int main() {
    //1
    //    Car car("Toyota", "Corolla", 4);
//    Motorcycle motorcycle("Harley-Davidson", "Sportster", false);
//
//    car.PrintInfo();
//    motorcycle.PrintInfo();
    //2
    //Circle circle(5.0);
    //Rectangle rectangle(4.0, 6.0);

    //cout << "Area of Circle: " << circle.Area() << endl;
    //cout << "Area of Rectangle: " << rectangle.Area() << endl;
    // 3
    //HourlyEmployee hourly("John Doe", 1, 20.0, 160);
    //SalariedEmployee salaried("Jane Smith", 2, 3000.0);

    //hourly.PrintInfo();
    //cout << "Salary: " << hourly.CalculateSalary() << endl;

    //salaried.PrintInfo();
    //cout << "Salary: " << salaried.CalculateSalary() << endl;
    //4
    //Dog dog;
    //Cat cat;
    //Cow cow;

    //dog.MakeSound();
    //cat.MakeSound();
    //cow.MakeSound();
    //5
    Student student("Alice", 20, 12345);
    Teacher teacher("Mr. Brown", 45, "Mathematics");

    student.PrintInfo();
    teacher.PrintInfo();
}