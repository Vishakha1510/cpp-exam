#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string model;
    int year;
    int speed;

public:
    void setModel(string carModel) {
        model = carModel;
    }

    void setYear(int carYear) {
        year = carYear;
    }

    void setSpeed(int carSpeed) {
        speed = carSpeed;
    }

    string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    int getSpeed() const {
        return speed;
    }
};

int main() {
    Car Car;

    Car.setModel("maruti");
    Car.setYear(2018);
    Car.setSpeed(40);

    string carModel = Car.getModel();
    int carYear = Car.getYear();
    int carSpeed = Car.getSpeed();

    cout << "Car Model: " << carModel << endl;
    cout << "Year: " << carYear << endl;
    cout << "Speed: " << carSpeed;

    return 0;
}
