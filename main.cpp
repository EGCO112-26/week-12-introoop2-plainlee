// #include <iostream>
// #include <string>

// using namespace std;

// #include "student.h"
// #define N 3

// int main(int argc, char* argv[]) {
//     student s1, s2;

//     s1.set_name("Amy"); 
//     s1.set_age(20);
//     s2.set_name("James");
//     s2.set_age(17);

//     if (s1.get_age() > s2.get_age()) {
//         s1.print_name();
//         cout << " is older\n";
//     } else {
//         s2.print_name();
//         cout << " is older\n";
//     }

//     student a[N];
    
//     // 4. Change input from cin to argv
//     if (argc == 1 + (N * 2)) {
//         cout << "\n[ Reading data from argv ]\n";
//         for (int i = 0; i < N; i++) {
//             a[i].set_name(argv[(i * 2) + 1]);
//             a[i].set_age(stoi(argv[(i * 2) + 2])); // ใช้ stoi() แปลง string เป็น int
//         }
//     } else {
//         // 1. Ask for N names and N age using cin
//         cout << "\n[ Reading data from cin ]\n";
//         for (int i = 0; i < N; i++) {
//             string n;
//             int age;
            
//             cout << "Person " << i + 1 << " Name: ";
//             cin >> n;
//             cout << "Person " << i + 1 << " Age: ";
//             cin >> age;
            
//             a[i].set_name(n);
//             a[i].set_age(age);
//         }
//     }

//     // 2. Print name and age of all N ppl
//     cout << "\n--- All Students Information ---\n";
//     for (int i = 0; i < N; i++) {
//         cout << i + 1 << ". ";
//         a[i].print_name();
//         cout << " (Age: " << a[i].get_age() << ")\n";
//     }

//     // 3. Find and print the youngest person
//     int min_age_index = 0;
//     for (int i = 1; i < N; i++) {
//         if (a[i].get_age() < a[min_age_index].get_age()) {
//             min_age_index = i;
//         }
//     }

//     cout << "\n--- Youngest Person ---\n";
//     cout << "The youngest person is ";
//     a[min_age_index].print_name();
//     cout << " with age " << a[min_age_index].get_age() << "!\n";

//     return 0;
// }


#include <iostream>
using namespace std;

#include "student.h"
#define N 3
int main(int argc, char* argv[]) {
  student a[N];

//test
//  s1.set_name("Amy"); s1.set_age(80);
//  s2.set_name("James");
//  s2.set_age(22);
//  s1.get_age()>s2.get_age() ? s1.print_name() :s2.print_name();
//  cout <<"is older\n\n";



  // Set age and set name for the first two ppl
  int i,age;
  string n;

// 1. Ask for N names and N age using cin + 4. Change input from cin to argv

 // 4. Change input from cin to argv
    if (argc == 1 + (N * 2)) {
        for (i = 0; i < N; i++) {
            a[i].set_name(argv[(i * 2) + 1]);
            a[i].set_age(stoi(argv[(i * 2) + 2]));
        }
    } 
    // 1. Ask for N names and N age using cin 
    else {
        for(i = 0; i < N; i++){
            cout << "Student " << i + 1 << endl;
            cout << "name : ";
            cin >> n;
            a[i].set_name(n);
            
            cout << "age : ";
            cin >> age;
            a[i].set_age(age);
        }
    }
 
  //2. Print name and age of all N ppl
  // for(i=0;i<N;i++){
  //   a[i].display();
  // }
  
  
  
  //3. Print name and age of 
  //the youngest person
  //Find what the age of the youngest 
  int youngest = a[0].get_age();
    for(i = 1; i < N; i++){
        if (a[i].get_age() < youngest)
            youngest=a[i].get_age();
    }
 
  
  // Print all info for the yougest person
 cout << "\nYoungest student\n";
    for (int i = 0; i < N; i++) {
        if (a[i].get_age() == youngest) {
            a[i].display();
        }
    }

 return 0;

    
  }
  
  


