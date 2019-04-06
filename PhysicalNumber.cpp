#include "PhysicalNumber.h"
#include <iostream>
using namespace ariel;

/** constructor **/
    PhysicalNumber::PhysicalNumber (double value,Unit unit){
        this->value = value;
        this->unit = unit;
    }   

/** unary  methods - change sign - (-a) **/
    const PhysicalNumber PhysicalNumber::operator+() const{
        return PhysicalNumber(0,KM);
    }
    const PhysicalNumber PhysicalNumber::operator-() const{
        return PhysicalNumber(0,CM);
    }
/** binary operator methods - adding to this**/
    const PhysicalNumber PhysicalNumber::operator-(const PhysicalNumber& n )const{
        return PhysicalNumber(0,CM);
    }
    const PhysicalNumber PhysicalNumber::operator+(const PhysicalNumber& n )const{
        return PhysicalNumber(0,CM);
    }
    PhysicalNumber& PhysicalNumber::operator+=(const PhysicalNumber& n ){
        return *this;
    }
    PhysicalNumber& PhysicalNumber::operator-=(const PhysicalNumber& n ){
        return *this;
    }
    PhysicalNumber& PhysicalNumber::operator=(const PhysicalNumber& n){
        return *this;
    }
/** prefix operator increment / decrement -(a++)**/
    PhysicalNumber& PhysicalNumber::operator++(){
        return *this;
    }
    PhysicalNumber& PhysicalNumber::operator--(){
        return *this;
    } 
/** postfix operator increment / decrement -(++a) **/
    const PhysicalNumber PhysicalNumber::operator++(int dummy_flag_for_postfix_increment){
        return PhysicalNumber(0,CM); 
    }
    const PhysicalNumber PhysicalNumber::operator--(int dummy_flag_for_postfix_decrement){
        return PhysicalNumber(0,CM); 
    }
 /**  friend bigger/smaller operators - (a < b)...**/
    const bool ariel::operator<(const PhysicalNumber& a,const PhysicalNumber& b ){
        return true;
    }
    const bool ariel::operator>(const PhysicalNumber& a,const PhysicalNumber& b ){
        return true;
    }
    const bool ariel::operator<=(const PhysicalNumber& a,const PhysicalNumber& b ){
        return true;
    }
    const bool ariel::operator>=(const PhysicalNumber& a,const PhysicalNumber& b ){
        return true;
    }
    const bool ariel::operator==(const PhysicalNumber& a,const PhysicalNumber& b ){
        return true;
    }
    const bool ariel::operator!=(const PhysicalNumber& a,const PhysicalNumber& b ){
        return true;
    }


/** output / input stream **/
    ostream& ariel::operator<<(ostream& os , const PhysicalNumber& n){
        return os;
    }
    istream& ariel::operator>>(istream& is , const PhysicalNumber& n){
        return is;
    }


    



