#include <iostream>
#include <vector>
#include "header.h"
using namespace std;

int main()
{
    vector<employee> list_employee = {employee("artem", "IT", 2015, 1320000)};
    int choice;

    while (true)
    {
        interface();
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again." << endl;
            continue;
        }

        switch (choice)
        {
        case 1:
            add_employee(list_employee);
            break;

        case 2:
            for (const auto &emp : list_employee)
            {
                emp.print_info();
            }
            break;

        case 3:
            cout << "Average Experience: " << average_experience(list_employee) << endl;
            break;

        case 4:
            sort_employee(list_employee);
            cout << "Sorted by year of employment: " << endl;
            for (const auto &emp : list_employee)
            {
                emp.print_info();
            }
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }
}