#include <string>

using namespace std;

class Date {
    
    public:

        Date(int m, int d, int y) {
            month = m;
            day = d;
            year = y;
            if (m > 12) {
                month = 1;
            }
            if (d > 31) {
                day = 1;
            }
            if (y > 2022){
                year = 2022;
            } 
        }

        int getMonth() const {
            return month;
        }

        void setMonth(int mes) {
            month = mes;
        }

        int getDay() const {
            return day;
        }

        void setDay(int dia) {
            day = dia;
        }

        int getYear() const {
            return year;
        }

        void setYear(int anho) {
            year = anho;
        }

        string displayDate() {
            return to_string(getMonth()) + " / " + to_string(getDay()) + " / " + to_string(getYear());
        }

    private:
        int month;
        int day;
        int year;
};