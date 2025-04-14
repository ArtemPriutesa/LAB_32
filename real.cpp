#include "header.h"
void interface(){
    cout<<"Employee Management System"<<endl;
    cout<<"1. Add Employee"<<endl;
    cout<<"2. View Employee"<<endl;
    cout<<"3. Average Experience"<<endl;
    cout<<"4. Sort Employee by Year of Employment"<<endl;
    cout<<"5. Exit"<<endl;
}
void add_employee(employee *list_employee,int n){
    string name,department;
    int year_employment,salary;
    cout<<"Name: ";
    cin>>name;
    cout<<"Department: ";
    cin>>department;
    cout<<"Year of Employment: ";
    cin>>year_employment;
    cout<<"Salary: ";
    cin>>salary;
    list_employee[n]=employee(name,department,year_employment,salary);
}
float average_experience(employee *list_employee,int n){
    int total_experience=0;
    for(int i=0;i<n;i++){
        total_experience+=2025-list_employee[i].c_year_employment;
    }
    return total_experience/n;
}
void sort_employee(employee *list_employee,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(list_employee[i].c_year_employment>list_employee[j].c_year_employment){
                employee temp=list_employee[i];
                list_employee[i]=list_employee[j];
                list_employee[j]=temp;
            }
        }
    }
}

employee::employee(){
    c_name="";
    c_department="";
    c_year_employment=0;
    c_salary=0;
    c_premium=0;
}
employee::employee(string name,string department,int year_employment,int salary){
    c_name=name;
    c_department=department;
    c_year_employment=year_employment;
    c_salary=salary;
    if((2025-c_year_employment)<10){
        c_premium=0.1*c_salary;
    }else if((2025-c_year_employment)>=10 && (2025-c_year_employment)<20){
        c_premium=0.25*c_salary;
    }else if((2025-c_year_employment)>=20){
        c_premium=0.4*c_salary;
    }
}

void employee::print_info(){
    cout<<"Name: "<<c_name<<endl;
    cout<<"Department: "<<c_department<<endl;
    cout<<"Year of Employment: "<<c_year_employment<<endl;
    cout<<"Salary: "<<c_salary<<endl;
    cout<<"Premium: "<<c_premium<<endl;
}
