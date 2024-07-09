#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <chrono>// ���������� ��� ������� ����
#include <ctime>// ���������� ��� ������� ����

using namespace std;

class Procedure {
private:// ��������� ��� ���������� � ������ ����� ���������, �.� �� ����� ���� ���������� ��  ������ �� ��� ������. :)
    string procedureName;
    string date;
    string doctorName;
    double cost;

public:
   
    Procedure(string pn, string d, string dn, double c) // pn - �������� ���������, d - ���� ���������, dn - ��� �����, � - ��������� ��������� <= ��� ��������:)
        : procedureName(pn), date(d), doctorName(dn), cost(c) {}
    // ����������� ��������
    
    string getProcedureName() const { return procedureName; } // ������ ������������ ��������� ����� const 0_o
    string getDate() const { return date; }
    string getDoctorName() const { return doctorName; }
    double getCost() const { return cost; }

    
    void setProcedureName(string pn) { procedureName = pn; }
    void setDate(string d) { date = d; }
    void setDoctorName(string dn) { doctorName = dn; } // ���� ���� ��������� �������� � ����������� ��� �������� ���������� � ���� :)
    void setCost(double c) { cost = c; }
};

string getCurrentDate() {
    auto now = chrono::system_clock::now();
    time_t now_time_t = chrono::system_clock::to_time_t(now); 
    tm now_tm = *localtime(&now_time_t);

    char buffer[11];
    strftime(buffer, sizeof(buffer), "%d.%m.%Y", &now_tm);
    return string(buffer);
}
/*���� �� ��� ������ �������� ��� ���� ����, ��� ����� ���� � �� ��. ���������� ���������� chrono � ctime. � ��� ��� ������ ������� ���� ��� ����� �� 1970 ���� � �� �����.
� c++ ��� ���������� _CRT_SECURE_NO_WARNINGS �� ��������, ��� ����� ��� �������. �++ �� ������� ����*/