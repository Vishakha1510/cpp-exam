#include <iostream>
#include <string>

using namespace std;

class Device {
private:
    string brand;
    double powerConsumption;

public:
    void setBrand(string deviceBrand) {
        brand = deviceBrand;
    }

    void setPowerConsumption(double consumption) {
        powerConsumption = consumption;
    }

    string getBrand() const {
        return brand;
    }

    double getPowerConsumption() const {
        return powerConsumption;
    }
};

class Laptop : public Device {
public:
    void displayInfo() const {
        cout << "Laptop - Brand: " << getBrand() << "\nPower Consumption: " << getPowerConsumption() << "Watts" << endl;
    }
};

class Smartphone : public Device {
public:
    void displayInfo() const {
        cout << "Smartphone - Brand: " << getBrand() << "\nPower Consumption: " << getPowerConsumption() << "Watts" << endl;
    }
};

int main() {
    Laptop myLaptop;
    Smartphone mySmartphone;

    myLaptop.setBrand("Dell");
    myLaptop.setPowerConsumption(45.5);

    mySmartphone.setBrand("Samsung");
    mySmartphone.setPowerConsumption(15.3);

    myLaptop.displayInfo();
    mySmartphone.displayInfo();

    return 0;
}

