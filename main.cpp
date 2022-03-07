
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
    VacationAccount account (889543);
    assert( std::to_string(doner1.getID()) == "752401");
    assert(std::to_string(doner2.getAge()) == "55");
    assert(std::to_string(doner3.getWeight()) == "187.550000");
    BloodDonation donor1( 752401, 45, 99.56);
    BloodDonation donor2( 889543, 55, 109.50);
    BloodDonation donor3( 89643244, 65, 187.55);
    BloodDonation donor4( 855565, 17, 127.00);
    assert(std::to_string(donor1.getID( )) == "752401");
    assert(std::to_string(donor2.getID( )) == "889543");
    assert(std::to_string(donor3.getID()) == "-1");
    assert(std::to_string(donor4.getID( )) == "855565");
    assert(std::to_string(donor2.getAge( )) == "55");
    assert(std::to_string(donor4.getAge( )) == "-1");
    assert(std::to_string(donor3.getWeight( )) == "187.550000");
    assert(std::to_string(donor1.getWeight( )) == "-1.000000");
    assert( std::to_string(account.getBalance( ) ) == "0.000000" );
    assert( std::to_string(account.getID( ) ) == "889543" );
    assert( account.addVacationToAccount( donor2 ) == true );
    assert( account.addVacationToAccount( donor1 ) == false );
    assert( std::to_string( account.getBalance( ) ) == "4.000000" );
    cout << "all tests passed!";
}

