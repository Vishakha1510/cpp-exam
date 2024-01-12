#include <iostream>
#include <string>

using namespace std;

class Device {
private:
    string brand;
    double powerConsumption;

public:
    Device(string deviceBrand, double consumption) : brand(deviceBrand), powerConsumption(consumption) {}

    virtual double calculateDiscount() const {
        return 0.0;  
    }

    void displayInfo() const {
        cout << "Brand: " << brand << ", Power Consumption: " << powerConsumption << " Watts" << endl;
    }
};

class Laptop : public Device {
public:
    Laptop(string brand, double consumption) : Device(brand, consumption) {}

    double calculateDiscount() const override {
        return 0.10;  
    }
};

class Smartphone : public Device {
public:
    Smartphone(string brand, double consumption) : Device(brand, consumption) {}

    double calculateDiscount() const override {
        return 0.05;  
    }
};

int main() {
    

    Device* devices[2];

    Laptop laptop("Dell", 50.0);
    Smartphone smartphone("Samsung", 10.0);

    devices[0] = &laptop;
    devices[1] = &smartphone;

    for (int i = 0; i < 2; ++i) {
        devices[i]->displayInfo();
        cout << "Discount: " << devices[i]->calculateDiscount() * 100 << "%" << endl;
    }

    return 0;
}

