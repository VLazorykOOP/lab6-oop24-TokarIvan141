#include <iostream>
#include "Task1/Derived3NV.h"
#include "Task1/Derived3V.h"
#include "Task2/Sphere.h"
#include "Task2/Parallelepiped.h"
#include "Task2/Tetrahedron.h"
#include "Task3/WaterBody.h"
#include "Task3/Bay.h"
#include "Task3/Gulf.h"
#include "Task3/Sea.h"

using namespace std;

void task1()
{
    cout << "\n=========Task 1=========\n";
    Derived3NV objNV;
    cout << "Size of Derived3NV: " << sizeof(objNV) << endl;
    objNV.print();
    cout << endl;

    Derived3V objV;
    cout << "Size of Derived3V: " << sizeof(objV) << endl;
    objV.print();
}

void task2()
{
    cout << "\n=========Task 2=========\n";

    Parallelepiped p(3, 4, 5);
    Tetrahedron t(6);
    Sphere s(7);

    cout << "Surface area of Parallelepiped: " << p.surfaceArea() << endl;
    cout << "Surface area of Tetrahedron: " << t.surfaceArea() << endl;
    cout << "Surface area of Sphere: " << s.surfaceArea() << endl;

}

void task3()
{
    cout << "\n=========Task 3=========\n";

    WaterBody* w1 = new Bay("San Francisco Bay");
    WaterBody* w2 = new Gulf("Persian Gulf");
    WaterBody* w3 = new Sea("Black Sea");

    w1->describe();
    cout << endl;

    w2->describe();
    cout << endl;

    w3->describe();
    cout << endl;

    delete w1;
    delete w2;
    delete w3;
}


int main()
{
    srand(time(nullptr));

    int choice;
    do
    {
        cout << "\n============ Main Menu ============" << endl;
        cout << "1 - Task 1" << endl;
        cout << "2 - Task 2" << endl;
        cout << "3 - Task 3" << endl;
        cout << "0 - Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1: task1(); break;
            case 2: task2(); break;
            case 3: task3(); break;
            case 0: cout << "Exiting program...\n"; break;
            default: cout << "Invalid choice! Try again\n";
        }
    } while (choice != 0);

    return 0;
}
