#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    int age;

public:
  void set_name(string n);
  void set_age(int x);
  int get_age();
  void print_name();
  void display();
};

    void student::set_name(string n) {
        name = n;
    }
    
    void student::set_age(int x) {
        if(x>80) age=20;
        else if(x<13) age=13;
        else age = x;
    }
    
    int student::get_age() {
        return age;
    }
    
    void student::print_name() {
        cout << name;
    }

    void student::display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    }

#endif