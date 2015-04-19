#include <iostream>
using namespace std;

class Car {
    private: 
        float costOfWheels = 4.0;
        float costOfChassis = 10.5;
        float costOfEngine = 35;
    
    public:
        float CalculateCost() {
            return costOfWheels + costOfChassis + costOfEngine;
        }
};

class GpsCar : Car {
    private:
        float costOfGpsDevice = 9.3;
    public:
        float CalculateCost() {
            return costOfGpsDevice + Car::CalculateCost();
        }
};

class SafeCar : Car {
    private:
        float costOfSafeSensors = 15;
    public:
        float CalculateCost() {
            return costOfSafeSensors + Car::CalculateCost();
        }
};

class HiFiCar : Car {
    private:
        float costOfSpeaker = 9;
        float costOfAmpli = 15;
    public:
        float CalculateCost() {
            return costOfSpeaker + costOfAmpli + Car::CalculateCost();
        }
};

class AutoCar : Car {
    private:
        float costOfAutoProcessor = 20;
    public:
        float CalculateCost() {
            return costOfAutoProcessor + Car::CalculateCost();
        }
};

int main() {
   Car car;
   GpsCar gpsCar;
   SafeCar safeCar;
   HiFiCar hifiCar;
   AutoCar autoCar;

   cout << "Cost of default car: " << car.CalculateCost() << "\n";
   cout << "Cost of GPS car: " << gpsCar.CalculateCost() << "\n";
   cout << "Cost of safe car: " << safeCar.CalculateCost() << "\n";
   cout << "Cost of hifi car: " << hifiCar.CalculateCost() << "\n";
   cout << "Cost of auto car: " << autoCar.CalculateCost() << "\n";

   return 0;
}
