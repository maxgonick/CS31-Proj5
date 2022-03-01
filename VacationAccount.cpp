//
// Created by Max on 2/28/2022.
//

#include "VacationAccount.h"
#include <string>
VacationAccount::VacationAccount(int EmployeeID) {
    std::string s1EmployeeID;
    s1EmployeeID = (std::to_string(EmployeeID));
    if(s1EmployeeID.length() == 6){
        mID = EmployeeID;
    }
    else{
        mID = -1;
    }
    mBalance = 0;
}

double VacationAccount::getBalance() {
    return mBalance;
}

int VacationAccount::getID() {
    return mID;
}

bool VacationAccount::addVacationToAccount(BloodDonation donation) {
    if(donation.getID() == mID && donation.getID() != -1){
        if(donation.getAge() != 1 && donation.getWeight() != -1){
            mBalance += 4;
            return true;
        }
        else return false;
    }
    else return false;
}