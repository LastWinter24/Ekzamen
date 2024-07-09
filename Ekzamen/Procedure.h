#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <chrono>// библиотеки для текущей даты
#include <ctime>// библиотеки для текущей даты

using namespace std;

class Procedure {
private:// указывает что переменные и методы будут закрытыми, т.е не могут быть доступными на  прямую из вне класса. :)
    string procedureName;
    string date;
    string doctorName;
    double cost;

public:
   
    Procedure(string pn, string d, string dn, double c) // pn - название процедуры, d - дата процедуры, dn - имя врача, с - стоимость процедуры <= Эта арументы:)
        : procedureName(pn), date(d), doctorName(dn), cost(c) {}
    // конструктор процедур
    
    string getProcedureName() const { return procedureName; } // делаем неизменяемое состояние через const 0_o
    string getDate() const { return date; }
    string getDoctorName() const { return doctorName; }
    double getCost() const { return cost; }

    
    void setProcedureName(string pn) { procedureName = pn; }
    void setDate(string d) { date = d; }
    void setDoctorName(string dn) { doctorName = dn; } // тута тоже принимаем аргумент и присваиваем его значения аргументов к полю :)
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
/*тута хз это просто фаункция для реал даты, она везде одна и та же. Использует библиотеку chrono и ctime. С ней там всякие приколы берёт там время от 1970 года и всё такое.
в c++ без исключения _CRT_SECURE_NO_WARNINGS не работает, вот такие вот приколы. С++ ЖЕ СТРОГИЙ ЯЗЫК*/