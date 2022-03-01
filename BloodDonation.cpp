//
// Created by Max on 2/26/2022.
//

#include "BloodDonation.h"

BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight){
    if(length(EmployeeID) == 6){
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