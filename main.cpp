#include <iostream>
#include <string.h>
#include "header.h"
#include "read.h"
using namespace std;

int main(){
    int n;
    cout<<"number_employees: ";
    cin>>n;
    string name,department;
    int year_employment,salary,choice=0;
    employee *list_employee = new employee[n];

    while (choice!=3)
    {
        interface();
        int choice;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            add_employee(list_employee,n);
            break;
        case 2:
            for(int i=0;i<n;i++){
                list_employee[i].print_info();
            }
            break;
        case 3:
            cout<<"Average Experience: "<<average_experience(list_employee,n)<<endl;
            break;
        case 4:
            sort_employee(list_employee,n);
            cout<<"Sorted by year of employment: "<<endl;
            for(int i=0;i<n;i++){
                list_employee[i].print_info();
            }
            break;
        case 5:
            delete[] list_employee;
            return 0;
        
        default:
            cout<<"e("<<endl;
            break;
        }
    }
    delete[] list_employee;
}

