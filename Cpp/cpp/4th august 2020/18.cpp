#include<iostream>
#include<ctime>
//#include<time.h>

using namespace std;
                                            //time_t time (time_t* timer);  passing 0 to time function instead of object
//time_t test_var = time(0);                  //returns system time in seconds

int main()
{
    cout << "Display the Current Date and Time :\n ---------------------------------------- \n";
    time_t tt;                              //declare variable to recieve time
    struct tm *ti;                          //standard defined structure that stores localtime

        time (&tt);                         //get system time and store in tt
        ti = localtime(&tt);               //converts system time to UTC format

        cout << "\nseconds = " << ti->tm_sec;
        cout << "\nminutes x = " << ti->tm_min;
        cout << "\nhours = " << ti->tm_hour;
        cout << "\ndays of the month = " << ti->tm_mday;
        cout << "\nmonth of the year = " << ti->tm_mon;
        cout << "\nyear = " << ti->tm_year  ;
        cout << "\nweekday = " << ti->tm_wday;
        cout << "\nday of the year = " << ti->tm_yday;
        cout << "\nDST = " << ti->tm_isdst;
        cout << "\nCurrent date = " << asctime(ti);



    return 0;
}

//seconds = 57 minutes = 33 hours = 12 day of month = 6 month of year = 7 year = 2017 weekday = 4 day of year = 186 daylight savings = 0Current Date: 6/7/2017
