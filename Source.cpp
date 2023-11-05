#include <iostream>
using namespace std;

int main()
{
    cout << "===============================\n";
    cout << "==== Calculate your age app====\n";
    cout << "===============================\n";

    cout << "Enter Your Age in YEARS\n";
    int age;
    cin >> age;
    int age_in_months = age * 12;
    int age_in_weeks = age * 52;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;
    int age_in_minutes = age_in_hours * 60;
    int age_in_seconds = age_in_minutes * 60;
    cout << "Your age in Months is " << age_in_months << " Months\n";
    cout << "Your age in Weeks is " << age_in_weeks << " Weeks\n";
    cout << "Your age in Days is " << age_in_hours << " Hours\n";
    cout << "Your age in Minutes is " << age_in_minutes << " Minutes\n";
    cout << "Your age in Seconds is " << age_in_seconds << " Seconds\n";
    return 0;
}