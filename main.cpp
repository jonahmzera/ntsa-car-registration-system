#include <iostream>
using namespace std;

// Base class
class Vehicle {
protected:
    string clientName;
    string regNo;
    int cc;

public:
    // Constructor
    Vehicle() {
        clientName = "";
        regNo = "";
        cc = 0;
    }

    // Function to get basic details
    void getDetails() {
        cout << "Enter Client Name: ";
        cin >> clientName;

        cout << "Enter Registration Number: ";
        cin >> regNo;

        cout << "Enter Engine Capacity (CC): ";
        cin >> cc;
    }

    // Function to display basic details
    void displayDetails() {
        cout << "Client Name: " << clientName << endl;
        cout << "Registration Number: " << regNo << endl;
        cout << "Engine Capacity (CC): " << cc << endl;
    }
};

// Derived class Car
class Car : public Vehicle {
private:
    int passengers;

public:
    Car() {
        passengers = 0;
    }

    void getCarDetails() {
        getDetails();
        cout << "Enter Number of Passengers: ";
        cin >> passengers;
    }

    int computeCharges() {
        return passengers * 1000;
    }

    void displayCarDetails() {
        displayDetails();
        cout << "Passengers: " << passengers << endl;
        cout << "NTSA Charges: " << computeCharges() << " KES" << endl;
    }
};

int main() {
    int numberOfCars;

    cout << "==== NTSA CAR REGISTRATION SYSTEM ====\n";
    cout << "How many cars do you want to register? ";
    cin >> numberOfCars;

    // Create an array of car objects
    Car cars[20];

    // Input details for each car
    for (int i = 0; i < numberOfCars; i++) {
        cout << "\n--- Enter Details for Car " << (i + 1) << " ---\n";
        cars[i].getCarDetails();
    }

    // Display all car details
    cout << "\n==== REGISTERED CAR DETAILS ====\n";
    for (int i = 0; i < numberOfCars; i++) {
        cout << "\n--- Car " << (i + 1) << " Details ---\n";
        cars[i].displayCarDetails();
        cout << "-----------------------------\n";
    }

    return 0;
}
