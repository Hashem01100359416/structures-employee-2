#include <iostream>
#include <algorithm>
using namespace std;




struct full_name
{
    string first, middle, last;
    void read()
    {
        cout << "enter your full name : ";
        cin >> first >> middle >> last;
    }
    void print_full_name()
    {
        cout << first << " " << middle << " " << last << endl;;
    }
};




struct employee
{
    full_name name_full;
    int age;
    double salary;
    char Gender;
    string name;
    void read_emp()
    {
        cout << "Enter data of employee : \n";
        //cout << "Enter Name of employee : ";
        name_full.read();
        cout << "Enter Age of employee : ";
        cin >> age;
        cout << "Enter Salary of employee : ";
        cin >> salary;
        cout << "Enter Gender of employee : ";
        cin >> Gender;
        cout << endl;
    }
    void print_emp()
    {
        cout << "Name of employee : ";
        name_full.print_full_name();
        cout << "Enter Age of employee : " <<age << endl;
        cout << "Enter Salary of employee : " << salary << endl;
        cout << "Enter Gender of employee : " << Gender << endl << endl;
    }

    int get_age()
    {
        return age;
    }
    void set_age(int new_age)
    {
        age = new_age;
    }
};

                                                    //const int size = 100;
employee employee_arr[100];
int add = 0;

void print_all_emp()
{
    for (int i = 0; i < add; i++)
    {
        employee_arr[i].print_emp();
    }
    cout << "\n\n=====================================";
    cout << "\n=====================================\n\n";
}

bool compare_n(employee& e1, employee& e2)
{
    return e1.name < e2.name;
}
bool compare_s(employee& e1, employee& e2)
{
    return e1.salary > e2.salary;
}
bool compare_n_s(employee& e1, employee& e2)
{
    if(e1.name != e2.name)
        return e1.name < e2.name;
    return e1.salary < e2.salary;
}
int main()
{
   
   employee_arr[add++].read_emp();
   employee_arr[add++].read_emp();
   employee_arr[add++].read_emp();
   sort(employee_arr, employee_arr + add, compare_n);
   print_all_emp();
   
   sort(employee_arr, employee_arr + add, compare_s);
   print_all_emp();

   sort(employee_arr, employee_arr + add, compare_n_s);
   print_all_emp();
   
    return 0;
}