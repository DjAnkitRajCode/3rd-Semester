(Class Template) Design a template Stack which can work with either a Student record
 or an Employee record. A Student record contains name, rollNo and cgpa. An Employee
 record contains name, empId and salary fields. Provide push, pop, display functions 
to the template stack class.]


#include<iostream>
#include<cstdlib>
#include<cstring>

using namespace std;

class Person {
    char name[20];

    public:
        Person() {
        }

        Person(char *name) {
            strcpy(this->name, name);
        }

        virtual void display() {
            cout << "\n Name : " << name;
        }
};

class Student : public Person {
    int rollno;
    float cgpa;

    public: 

        Student(): Person() {
            rollno = 0;
            cgpa = 0;
        }

        Student(char *name, int r, float c): Person(name) {
            rollno = r;
            cgpa = c;
        }

        void display() {
            Person::display();
            cout << "\n Roll no. : " << rollno << "\n CGPA : " << cgpa << endl;
        }
};

class Employee : public Person {
    int id;
    float salary;

    public: 

        Employee(): Person() {
            id = 0;
            salary = 0;
        }

        Employee(char *name, int idx, float sl): Person(name) {
            id = idx;
            salary = sl;
        }

        void display() {
            Person::display();
            cout << "\n Id : " << id << "\n Salary : " << salary << endl;
        }
};

template<class T, int size>
  class STACK {

  	private:
        T v[size];
        int top;
  	public:

    STACK() {
        top = -1;
    }

    int push(T newV) {
        if(top == size - 1) {
            return 1;
        } else {
            v[++top] = newV;
            return 0;
        }
    }

    int pop(T &delV) {
        if(top == -1) {
            return 1;
        } else {
            delV = v[top--];
            return 0;
        }
    }

  	void display() {
        cout << endl ; 	
        if(top != -1) {
            for (int i = 0; i <= top; i++) {
                v[i].display();
            }    
        } else {
            cout<< "\n Empty STACK" << endl; 
        }	
        cout << endl ;
  	}

};



  int main() {
    STACK<Student, 2> s1;
    STACK<Employee, 2> s2;

    Student st1((char*)"abc", 345, 9.0);
    Student st2((char*)"xyz", 405, 9.7);
    
    Employee e1((char*)"pqr", 1205, 39000.00);
    Employee e2((char*)"mno", 1206, 27000.00);

    s1.push(st1);
    s1.push(st2);

    s2.push(e1);
    s2.push(e2);

    Student delK1;
    Employee delK2;

    s1.display();
    s1.pop(delK1);
    s1.display();

    s2.display();
    s2.pop(delK2);
    s2.pop(delK2);
    s2.display();
  return 0;
}
