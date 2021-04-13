#include <iostream>
#include <string>
using namespace std;

/*
    2021.04.11
    Shuddho Sharaf

    Contributors:
    - Ilham Daiee Muntahi (Procedure)
    - Afia Farzana Priontee (Algorithm)

*/

int main() {
    int date, month, year, monthCode, dayCode, day;

    cout << "\n";
    cout << "Daydream";
    cout << "\n \n";

    cout << "Enter date (1-31): ";
    cin >> date;
    cout << "\n";

    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "\n";

    cout << "Enter year (1600-2100): ";
    cin >> year;
    cout << "\n";

    if (month == 1 || month == 10) {
        monthCode = 0;
    } else if (month == 5) {
        monthCode = 1;
    } else if (month == 8) {
        monthCode = 2;
    } else if (month == 2 || month == 3 || month == 11) {
        monthCode = 3;
    } else if (month == 6) {
        monthCode = 4;
    } else if (month == 9 || month == 12) {
        monthCode = 5;
    } else if (month == 4 || month == 7) {
        monthCode = 6;
    }

    int deltaYear;

    if (year >= 1600 && year < 1700) {
        deltaYear = year - 1600;
    } else if (year >= 1700 && year < 1800) {
        deltaYear = year - 1700;
    } else if (year >= 1800 && year < 1900) {
        deltaYear = year - 1800;
    } else if (year >= 1900 && year < 2000) {
        deltaYear = year - 1900;
    } else if (year >= 2000 && year < 2100) {
        deltaYear = year - 2000;
    } else if (year >= 2100 && year < 2200) {
        deltaYear = year - 2100;
    }

    day = (date + monthCode + deltaYear + (deltaYear / 4)) % 7;

    string days[7] = {"Saturday \n \n",
                      "Sunday \n \n",
                      "Monday \n \n",
                      "Tuesday \n \n",
                      "Wednesday \n \n",
                      "Thursday \n \n",
                      "Friday \n \n"};

    if (year >= 2100 && year < 2200) {
        switch (day) {
            case 1:
                cout << days[0];
                break;
            case 2:
                cout << days[1];
                break;
            case 3:
                cout << days[2];
                break;
            case 4:
                cout << days[3];
                break;
            case 5:
                cout << days[4];
                break;
            case 6:
                cout << days[5];
                break;
            case 0:
                cout << days[6];
                break;
            default:
                cout << "Bad Day! \n \n";
                break;
        }
    } else if (year >= 2000 && year < 2100) {
        switch (day) {
            case 0:
                cout << days[0];
                break;
            case 1:
                cout << days[1];
                break;
            case 2:
                cout << days[2];
                break;
            case 3:
                cout << days[3];
                break;
            case 4:
                cout << days[4];
                break;
            case 5:
                cout << days[5];
                break;
            case 6:
                cout << days[6];
                break;
            default:
                cout << "Bad Day! \n \n";
                break;
        }
    } else if (year >= 1900 && year < 2000) {
        switch (day) {
            case 6:
                cout << days[0];
                break;
            case 0:
                cout << days[1];
                break;
            case 1:
                cout << days[2];
                break;
            case 2:
                cout << days[3];
                break;
            case 3:
                cout << days[4];
                break;
            case 4:
                cout << days[5];
                break;
            case 5:
                cout << days[6];
                break;
            default:
                cout << "Bad Day! \n \n";
                break;
        }
    } else if (year >= 1800 && year < 1900) {
        switch (day) {
            case 5:
                cout << days[0];
                break;
            case 6:
                cout << days[1];
                break;
            case 0:
                cout << days[2];
                break;
            case 1:
                cout << days[3];
                break;
            case 2:
                cout << days[4];
                break;
            case 3:
                cout << days[5];
                break;
            case 4:
                cout << days[6];
                break;
            default:
                cout << "Bad Day! \n \n";
                break;
        }
    } else if (year >= 1700 && year < 1800) {
        switch (day) {
            case 4:
                cout << days[0];
                break;
            case 5:
                cout << days[1];
                break;
            case 6:
                cout << days[2];
                break;
            case 0:
                cout << days[3];
                break;
            case 1:
                cout << days[4];
                break;
            case 2:
                cout << days[5];
                break;
            case 3:
                cout << days[6];
                break;
            default:
                cout << "Bad Day! \n \n";
                break;
        }
    } else if (year >= 1600 && year < 1700) {
        switch (day) {
            case 3:
                cout << days[0];
                break;
            case 4:
                cout << days[1];
                break;
            case 5:
                cout << days[2];
                break;
            case 6:
                cout << days[3];
                break;
            case 0:
                cout << days[4];
                break;
            case 1:
                cout << days[5];
                break;
            case 2:
                cout << days[6];
                break;
            default:
                cout << "Bad Day! \n \n";
                break;
        }
    }

    string exit;
    cout << "Enter anything to exit: ";
    cin >> exit;
    cout << "\n";

    return 0;
}