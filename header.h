#include <iostream>
#include <string.h>
using namespace std;
class employee
{
    private:
    string c_name;
    float c_premium;
    public:
    int c_year_employment;
    string c_department;
    int c_salary;
    employee();
    employee(string name,string department,int year_employment,int salary);
    void print_info();
};

void interface();
void add_employee(employee *list_employee,int n);
float average_experience(employee *list_employee,int n);
void sort_employee(employee *list_employee,int n);

