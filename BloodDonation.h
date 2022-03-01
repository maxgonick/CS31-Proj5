//
// Created by Max on 2/26/2022.
//

#ifndef PROJ5_BLOODDONATION_H
#define PROJ5_BLOODDONATION_H

int length(long input);
class BloodDonation {
private:
    int mID;
    int mAge;
    double mWeight;
public:
    BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);
    int getID();
    void setID(int ID);
    int getAge();
    void setAge(int Age);
    double getWeight();
    void setWeight(double Weight);
};


#endif //PROJ5_BLOODDONATION_H
