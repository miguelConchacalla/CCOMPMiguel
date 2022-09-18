#include <string>

using namespace std;

class MotorVehicle {
    public:
        MotorVehicle(string make, string fuelType, int yearOfManufact, string color, int engineCapacity){
            marca = make;
            tipoGasol = fuelType;
            anho = yearOfManufact;
            color2 = color;
            capac = engineCapacity; 
        }

        string getMake() const {
            return marca;
        }

        void setMake(string modelo) {
            marca = modelo;
        }

        string getFuelType() const {
            return tipoGasol;
        }

        void setFuelType(string gasol) {
            tipoGasol = gasol;
        }

        int getYearOfManufact() const {
            return anho;
        }

        void setYearOfManufact(int anho2) {
            anho = anho2;
        }

        string getColor() const {
            return color2;
        }

        void setColor(string color3) {
            color2 = color3;
        }

        int getEngineCapacity() const {
            return capac;
        }

        void setEngineCapacity(int capac2) {
            capac = capac2;
        }

        string displayCarDetail() {
            return "Make: " + getMake() + "\nFuel type: " + getFuelType() + "\nYear of manufact: " + to_string(getYearOfManufact()) + "\nColor: " + getColor() + "\nEngine capacity: " + to_string(getEngineCapacity());
        }

    private:
        string marca;
        string tipoGasol;
        int anho;
        string color2;
        int capac; 

};