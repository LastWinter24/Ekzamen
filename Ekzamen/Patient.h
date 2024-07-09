#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Patient {
private: // указывает что переменные и методы будут закрытыми, т.е не могут быть доступными на  пр€мую из вне класса. :)
    string firstName;
    string middleName;
    string lastName;
    string address;
    string city;
    string state;
    string zip;
    string phoneNumber;
    string emergencyContactName;
    string emergencyContactPhone;

public:
    //  онструктор, инициализируем объекты класса 0_o ѕрикольна€ шутка. вызываетс€ автоматом  при создании объекта класса 
    Patient(string fn, string mn, string ln, string addr, string c, string s, string z, string phone, string ecn, string ecp)
        : firstName(fn), middleName(mn), lastName(ln), address(addr), city(c), state(s), zip(z), phoneNumber(phone), emergencyContactName(ecn), emergencyContactPhone(ecp) {}
    /*fn Ч им€, mn Ч отчество, ln Ч фамили€, addr Ч адрес, c Ч город, s Ч область, z Ч почтовый индекс, <= Ёта арументы:)
    phone Ч телефонный номер, ecn Ч им€ контактного лица дл€ экстренной св€зи, <= Ёта арументы:)
    ecp Ч телефон контактного лица дл€ экстренной св€зи. <= Ёта арументы:)
       */ 

    /*ћетоды - получатели(или геттеры)*/ 
    string getFirstName() const { return firstName; }
    string getMiddleName() const { return middleName; }// делаем неизмен€емое состо€ние через const 0_o
    string getLastName() const { return lastName; }
    string getAddress() const { return address; }
    string getCity() const { return city; }
    string getState() const { return state; }
    string getZip() const { return zip; }
    string getPhoneNumber() const { return phoneNumber; }
    string getEmergencyContactName() const { return emergencyContactName; }
    string getEmergencyContactPhone() const { return emergencyContactPhone; }

    /*ћетоды-модификаторы (или сеттеры)*/
    void setFirstName(string fn) { firstName = fn; }
    void setMiddleName(string mn) { middleName = mn; }
    void setLastName(string ln) { lastName = ln; }
    void setAddress(string addr) { address = addr; }
    void setCity(string c) { city = c; }
    void setState(string s) { state = s; }  //принимаем аргумент и присваиваем его значени€ аргументов к полю 
    void setZip(string z) { zip = z; }
    void setPhoneNumber(string phone) { phoneNumber = phone; }
    void setEmergencyContactName(string ecn) { emergencyContactName = ecn; }
    void setEmergencyContactPhone(string ecp) { emergencyContactPhone = ecp; }
};