#include<iostream>
using namespace std;

string getDayofWeek(int daynum) {

    string dayName;

    switch(daynum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Day Number";
    }

    return dayName;
}

int main() {
    int dayNum;
    cout<<"Enter the Day number: ";
    cin>> dayNum;
    cout<<getDayofWeek(dayNum);
    return 0;
}