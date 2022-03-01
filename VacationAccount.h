//
// Created by Max on 2/28/2022.
//

#ifndef PROJ5_VACATIONACCOUNT_H
#define PROJ5_VACATIONACCOUNT_H
#include "BloodDonation.h"
class VacationAccount {
private:
    int mID;
    double mBalance;
public:
    VacationAccount(int EmployeeID);
    double getBalance();
    int getID();
    bool addVacationToAccount(BloodDonation donation);
};
#endif //PROJ5_VACATIONACCOUNT_H
