#include "Car.h"  
using namespace std;
 
Car::Car() {
   
    for (int i = 0; i < 50; i++) {
        brand[i] = '\0';
        model[i] = '\0';
    }
    year = 0;
    price = 0.0;
}


Car::Car(const char* b, const char* m, int y, double p) : year(y), price(p) {
    for (int i = 0; i < 50 && b[i] != '\0'; i++) {
        brand[i] = b[i];
    }
    for (int i = 0; i < 50 && m[i] != '\0'; i++) {
        model[i] = m[i];
    }
}


Car::~Car() {
    cout << "Car object destroyed: " << brand << " " << model << endl;
}

 
const char* Car::getBrand() const {
    return brand;
}

const char* Car::getModel() const {
    return model;
}

int Car::getYear() const {
    return year;
}

double Car::getPrice() const {
    return price;
}


void Car::input() {
   cout << "Enter brand: ";
   cin.getline(brand, 50);
    cout << "Enter model: ";
   cin.getline(model, 50); 
    cout << "Enter year: ";
   cin >> year;
    cout << "Enter price: ";
    cin >> price;
   cin.ignore();  
}


void Car::display() const {
    cout << "Brand: " << brand << ", Model: " << model
        << ", Year: " << year << ", Price: " << price << endl;
}
