
#include "BloodDonation.h"
#include "VacationAccount.h"
#include <string>
#include <cassert>
#include <iostream>
using namespace std;

int main(){

    BloodDonation doner1( 752401, 45, 99.56);
    BloodDonation doner2(889543, 55, 109.50);
    BloodDonation doner3 (89643244, 65, 187.55);
    BloodDonation doner4 (855565, 17, 127.00);
    VacationAccount account (889543);
    assert( std::to_string(doner1.getID()) == "752401");
    assert(std::to_string(doner2.getAge()) == "55");
//    assert(std::to_string(doner3.getWeight()) == "187.55");
    assert(std::to_string(account.getBalance()) == "0.000000");
    assert(std::to_string(account.getID()) == "889543");
    assert(account.addVacationToAccount(doner2) == true);
    assert(account.addVacationToAccount(doner1) == false);
    assert(std::to_string(account.getBalance()) == "4.000000");
    cout << "i love josh and cael and jason lols! \n";

}

