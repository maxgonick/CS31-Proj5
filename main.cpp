
#include "BloodDonation.h"
#include "VacationAccount.h"
#include <iostream>
using namespace std;
int length(long input);
int main(){
    BloodDonation doner1( 752401, 45, 99.56);
    BloodDonation doner2( 889543, 55, 109.50);
    BloodDonation doner3( 89643244, 65, 187.55);
    BloodDonation doner4( 855565, 17, 127.00);

}
int length(long input){
    int digitlength = 1;
    if(input < 0) {
        return -1;
    }
        while((input /= 10) >= 1){
            digitlength++;
        }

    return digitlength;
}