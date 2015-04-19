#include <iostream>
using namespace std;

class Car {
    public:
        Car() {};
        virtual float CalculateCost() {};
};

class DefaultCar : public Car {
    private: 
        float costOfWheels = 4.0;
        float costOfChassis = 10.5;
        float costOfEngine = 35;
    public:
        float CalculateCost() {
            return costOfWheels + costOfChassis + costOfEngine;
        }
};

class Decorator : public Car {
    protected:
        Car* car;
    public:
        Decorator(Car* paramCar) {
            car = paramCar;
        }
	virtual float CalculateCost() {};
};

class GPSDecorator: public Decorator {
    private:
        float costOfGpsDevice = 9.3;
    public:
        GPSDecorator(Car* paramCar) : Decorator(paramCar){}
        float CalculateCost() {
            return car->CalculateCost() + costOfGpsDevice;
        }
};

class SafeDecorator: public Decorator {
    private:
        float costOfSafeSensors = 15;
    public:
        SafeDecorator(Car* paramCar) : Decorator(paramCar){}
        float CalculateCost() {
            return car->CalculateCost() + costOfSafeSensors;
        }
};

class HifiDecorator: public Decorator {
    private:
        float costOfSpeaker = 9;
        float costOfAmpli = 15;
    public:
        HifiDecorator(Car* paramCar) : Decorator(paramCar){}
        float CalculateCost() {
            return car->CalculateCost() + costOfSpeaker + costOfAmpli;
        }
};

class AutoDecorator: public Decorator {
    private:
        float costOfAutoProcessor = 20;
    public:
        AutoDecorator(Car* paramCar) : Decorator(paramCar){}
        float CalculateCost() {
            return car->CalculateCost() + costOfAutoProcessor;
        }
};

int main() {
   Car* defaultCar = new DefaultCar();
   Car* safeCar = new SafeDecorator(defaultCar);
   Car* GPSAndSafeCar = new SafeDecorator(new GPSDecorator(defaultCar));
   Car* HifiAndGPSAndSafeCar = new HifiDecorator(new SafeDecorator(new GPSDecorator(defaultCar)));
   Car* AutoAndHifiAndGPSAndSafeCar = new AutoDecorator(new HifiDecorator(new SafeDecorator(new GPSDecorator(defaultCar))));

   cout << "Cost of Default car: " << defaultCar->CalculateCost() << "\n";
   cout << "Cost of Safe car: " << safeCar->CalculateCost() << "\n";
   cout << "Cost of GPS and Safe car: " << GPSAndSafeCar->CalculateCost() << "\n";
   cout << "Cost of GPS and Safe and HiFi car: " << HifiAndGPSAndSafeCar->CalculateCost() << "\n";
   cout << "Cost of Auto and GPS and Safe and HiFi car: " << AutoAndHifiAndGPSAndSafeCar->CalculateCost() << "\n";

   return 0;
}
