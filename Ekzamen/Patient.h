#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Patient {
private: // ��������� ��� ���������� � ������ ����� ���������, �.� �� ����� ���� ���������� ��  ������ �� ��� ������. :)
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
    // �����������, �������������� ������� ������ 0_o ���������� �����. ���������� ���������  ��� �������� ������� ������ 
    Patient(string fn, string mn, string ln, string addr, string c, string s, string z, string phone, string ecn, string ecp)
        : firstName(fn), middleName(mn), lastName(ln), address(addr), city(c), state(s), zip(z), phoneNumber(phone), emergencyContactName(ecn), emergencyContactPhone(ecp) {}
    /*fn � ���, mn � ��������, ln � �������, addr � �����, c � �����, s � �������, z � �������� ������, <= ��� ��������:)
    phone � ���������� �����, ecn � ��� ����������� ���� ��� ���������� �����, <= ��� ��������:)
    ecp � ������� ����������� ���� ��� ���������� �����. <= ��� ��������:)
       */ 

    /*������ - ����������(��� �������)*/ 
    string getFirstName() const { return firstName; }
    string getMiddleName() const { return middleName; }// ������ ������������ ��������� ����� const 0_o
    string getLastName() const { return lastName; }
    string getAddress() const { return address; }
    string getCity() const { return city; }
    string getState() const { return state; }
    string getZip() const { return zip; }
    string getPhoneNumber() const { return phoneNumber; }
    string getEmergencyContactName() const { return emergencyContactName; }
    string getEmergencyContactPhone() const { return emergencyContactPhone; }

    /*������-������������ (��� �������)*/
    void setFirstName(string fn) { firstName = fn; }
    void setMiddleName(string mn) { middleName = mn; }
    void setLastName(string ln) { lastName = ln; }
    void setAddress(string addr) { address = addr; }
    void setCity(string c) { city = c; }
    void setState(string s) { state = s; }  //��������� �������� � ����������� ��� �������� ���������� � ���� 
    void setZip(string z) { zip = z; }
    void setPhoneNumber(string phone) { phoneNumber = phone; }
    void setEmergencyContactName(string ecn) { emergencyContactName = ecn; }
    void setEmergencyContactPhone(string ecp) { emergencyContactPhone = ecp; }
};