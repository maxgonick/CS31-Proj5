//
// Created by Max on 2/26/2022.
//

#include "BloodDonation.h"
#include <string>
BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight){
    std::string sEmployeeID;
    sEmployeeID = (std::to_string(EmployeeID));
    if(sEmployeeID.length() == 6){
        mID = EmployeeID;
    }
    else{
        mID = -1;
    }
    if(EmployeeAge >= 21 && EmployeeAge <= 65){
        mAge = EmployeeAge;
    }
    else{
        mAge = -1;
    }
    if(EmployeeWeight >= 101.00 && EmployeeWeight <= 280.00){
        mWeight = EmployeeWeight;
    }
    else{
        mWeight = -1;
    }
}

int BloodDonation::getID() {
    return mID;
}

void BloodDonation::setID(int ID) {
    std::string sEmployeeID;
    sEmployeeID = (std::to_string(ID));
    if(sEmployeeID.length() == 6){
        mID = ID;
    }
    else{
        mID = -1;
    }
}

int BloodDonation::getAge() {
    return mAge;
}

void BloodDonation::setAge(int Age) {
    if(Age >= 21 && Age <= 65){
        mAge = Age;
    }
    else{
        mAge = -1;
    }
}

double BloodDonation::getWeight() {
    return mWeight;
}

void BloodDonation::setWeight(double Weight) {
    if(Weight >= 101.00 && Weight <= 280.00){
        mWeight = Weight;
    }
    else{
        mWeight = -1;
    }
}
