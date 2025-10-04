// //Basics of oop
// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     float cgpa;

//     void getPercentage() {
//         cout << (cgpa * 10) << "% /n";
//     }

// };

// class User {
//      int id;
//      string username;
//      string password;
//      string bio;

//      void deactivate() {
//         cout << "Deleting Account\n";
//      }

//      void editBio(string newBio) {
//         bio = newBio;
//      }
// };

// int main () {
//     Student s1;
//     cout << sizeof(s1);
//     return 0;
// }



//Access Modifiers
// #include <iostream>
// using namespace std;

// class Student {
//     string name; // Can be acessed with in the class or in the friend function

//     public:
//     float cgpa;  //Can be Accessed anywhere outside the class also

//     void getPercentage() {
//         cout << (cgpa * 10) << "% /n";
//     }

// };

// int main () {
//     Student s1;
//     // s1.name = "Adarsh";/// Will cause an Error as Access Modifier is Private 
//     s1.cgpa = 9.82;
//     cout << s1.cgpa;
//     return 0;
// }



//Getter and Setter

// #include <iostream>
// using namespace std;

// class Student {
//     string name;
//     float cgpa;

//     public: 

//     void getPercentage() {
//         cout << (cgpa * 10) << "% /n";
//     };

//     //Setters
//     void setName(string nameValue) {
//         name = nameValue;
//     }

//     void setCgpa(float cgpaValue) {
//         cgpa = cgpaValue;
//     }

//     //Getters
//     string getName () {
//         return name;
//     }

//     float getCgpa () {
//         return cgpa;
//     }
// };

// int main () {
//     Student s1;
//     s1.setName("Adarsh");
//     s1.setCgpa(9.1);
    
//     cout << s1.getCgpa() << endl;
//     cout << s1.getName() << endl; ///Due to this it is getting a indirect access of the data members which are private
//     return 0;
// }



//Constructor
// #include <iostream>
// #include <string>
// using namespace std;

// class Teacher {
//     private: 
//      double salary;

//     public:
//       string name;
//       string dept;
//       string subject;

//     Teacher() {
//         cout<<"Hi, I am a Constructor";
//     }  
    
//     //Non-Parameterized Constructor
//     Teacher(string name, string dept, string subject) {
//         // name = name;
//         // dept = dept;
//         // subject = subject;
//         this->name = name;
//         this->dept = dept;
//         this->subject = subject;
//     }

//     //copy constructor

//     Teacher(Teacher &orgObj) {
//         this->name = orgObj.name;
//         this->dept = orgObj.dept;
//         this->subject = orgObj.subject;
//     }
   
//     void changeDept(string newDept) {
//         dept = newDept;
//     }
    
//     //setter
//     void setSalary(double s) {
//         salary = s;
//     }

//     //getter 
//     double getSalary() {
//         return salary;
//     }
// };

// int main () {
//     // Teacher t1; //Contructor will be called Automatically when object is created
//     Teacher t1("Adarsh", "ECE", "BEE");
//     Teacher t2("Om", "CSE", "DSA");
//     Teacher t3(t2);
//     // t1.name = "Adarsh";
//     // t1.subject = "DSA";
//     // t1.dept = "Computer Engineering";
//     // t1.setSalary(25000);

//     // cout << t1.name <<endl;
//     // cout << t1.getSalary() << endl;
//     // cout<< t2.name << endl;
//     cout <<t3.name <<endl;
//     return 0;
// }



//Shallow and Deep Copy
// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     public: 
//     string name;
//     // double cgpa;
//     double* cgpaPtr;

//     //Parameterized Constructor
//     Student(string name, double cgpa) {
//        this->name = name;
//     //    this->cgpa = cgpa;
//        cgpaPtr = new double;
//        *cgpaPtr = cgpa;
//     }
    
//     //Copy Constructor for making shallow copy
//     // Student(Student &obj) {
//     //    this->name = obj.name;
//     //    this->cgpaPtr = obj.cgpaPtr;
//     // }
  
//     //Copy Constructor for making Deep Copy
//     Student(Student &obj) {
//         this->name = obj.name;
//         cgpaPtr = new double;
//         *cgpaPtr = *obj.cgpaPtr;
//     }

//     //destructor
//     ~Student() {
//         cout << "Hey!, I deleted Everything";
//         delete cgpaPtr;
//     }

//     void getInfo() {
//         cout << "name: " << name << endl;
//         cout << "cgpa: " << *cgpaPtr << endl;
//     }
// };

// int main () {
//     Student s1("Adarsh", 8.6);
//     Student s2(s1); ///New Object(Om)
//     s1.getInfo();
//     *(s2.cgpaPtr) = 9.8;
//     s2.name = "Om";
//     s1.getInfo();
//     s2.getInfo();
//     return 0;
// }



//Inheritance

// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
//     public: 
//        string name;
//        int age;
    
//     // Person(string name, int age) {
//     //     this->name = name;
//     //     this->age = age;
//     // }

//     // Person () {
//     //    cout << "Parent Constructor" << endl;
//     // }
// };

// class Student : public Person {    // Access Modifier + Base Class name (Access Modifier is for apko kiss mode mein access karna hai)
//     public:
//        int rollno;

//     // Student (string name, int age, int rollno) : Person(name, age) {
//     // //    cout << "Child Constructor" << endl;
//     //       this->rollno = rollno;
//     // }

//     // void getInfo() {
//     //     cout << "Name :" << name << endl;
//     //     cout << "Age: " << age << endl;
//     //     cout << "Roll No: " <<rollno << endl;
//     // }
// };

// class GradStudent : public Student {
//     public:
//        string researchArea;
// };


// int main () {
//     // Student s1("Adarsh", 20, 05);
//     // s1.name = "Adarsh";
//     // s1.age = 20;
//     // s1.rollno = 05;
//     // s1.getInfo();
//     GradStudent s1;
//     s1.name = "Adarsh Jha";
//     s1.researchArea = "ML";
//     cout << s1.name << endl;
//     cout << s1.researchArea << endl;
//     return 0;
// }



//Multiple -Level Inheritance

// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
//     public:
//        string name;
//        int rollno;
// };

// class Teacher {
//     public: 
//        string subject;
//        double salary;
// };

// class TA: public Student, public Teacher {
    
// };

// int main () {
//     TA t1;
//     t1.name = "Adarsh Jha";
//     t1.subject = "C++";

//     cout << t1.name << endl;
//     cout << t1.subject << endl;
//     return 0;
// }



//Polymorphism

//Compile Time Ploymorphism (Function Overloading)
// #include <iostream>
// using namespace std;

// class Print {
//     public: 
//       void show(int x) {
//         cout << "Integer: " << x <<endl;
//       }

//       void show(char ch) {
//         cout << "Character: " << ch << endl;
//       }
// };

// int main () {
//     Print s1;
//     s1.show(5);
//     s1.show('#');
//     return 0;
// }


//Compile Time Ploymorphism (Operator Overloading)
//Binary Operator Overloading
// #include <iostream>
// using namespace std;

// class Demo {
//     int a;
//     public: 
//        void getdata () {
//         cout << "\n Enter a Number: ";
//         cin >> a;
//        }
//        void putdata () {
//         cout << "\n Value: " << a;
//        }
//        Demo operator + (Demo B) {
//             Demo C;
//             C.a = a + B.a;
//             return C;
//        }
// };

// int main () {
//     Demo A, B, C;
//     A.getdata();
//     B.getdata();
//     C = A + B;
//     C.putdata();
//     return 0;
// }

//Unary Operator Overloading
// #include <iostream>
// using namespace std;

// class Demo  {
//       int x;
//       public: 
//          void getData() {
//             cout << "\n Enter a Number: ";
//             cin >> x;
//          }
//           int putData() {
//             return x;
//          }
//          void operator ++() {
//             x = x + 1;
//          }
//          void operator ++(int) {
//             x = x + 1;
//          }
// };

// int main () {
//     Demo A;
//     A.getData();
//     cout << "\n Original Value : " << A.putData() << endl;
//     // ++A;
//     A++;
//     cout << "\n New Value : " << A.putData() << endl;
//     return 0;
// }


//Run-Time Polymorphism
//Function Overriding
// #include <iostream>
// using namespace std;

// class Parent {
//       public:
//          void getInfo() {
//             cout << "Parent Class\n";
//          }

//          virtual void hello () {
//             cout << "Hello from Parent Class";
//          }
// };

// class Child : public Parent {
//       public:
//          void getInfo() {
//             cout << "Child Class\n";
//          }

//           void hello () {
//             cout << "Hello from Parent Class";
//          }
// };

// int main () {
//     Parent p1;
//     p1.getInfo();
//     p1.hello();
//     return 0;
// }


//Issue with Function Overriding

// #include <iostream>
// using namespace std;

// class B {
//       public:
//          virtual void show () {
//            cout << "Base";
//          }
// };

// class D : public B {
//       public:
//         void show () {
//            cout << "Derived";
//          }
// }; 

// int main () {
//      B* ptr;
//      D d;
//      ptr = &d;
//      ptr->show(); //Pointer Ignores that it is pointing to D class if we don't write virtual keyword
//      return 0;
// }



//Pure Virtual Functions 

// #include <iostream>
// using namespace std;

// class Shape {
//     public:
//        virtual void getArea()=0; /// Pure Virtual Function
// };

// class Circle : public Shape {
//     public:
//        void getArea() {
//           cout<< "Enter Circle Radius: ";
//           int r;
//           cin >>r;
//           cout << "Area of Circle is :"<< (3.14*r*r) <<endl;
//        }
// };

// int main () {
//       Circle C1;
//       C1.getArea();
//       return 0;
// }


//Friend Function 

#include <iostream>
using namespace std;

class X {
    private:
       int a = 5;

    friend class Y;
};

class Y {
     public: 
        void show(X obj) {
            cout << obj.a << endl;
        }
};

int main () {
    X obj1;
    Y obj2;
    obj2.show(obj1);
    return 0;
}