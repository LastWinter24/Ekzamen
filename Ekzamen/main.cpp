#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <ctime>
#include "Patient.h"
#include "Procedure.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RU");

    Patient patient("Иван", "Иванович", "Иванов", "ул. Ленина, д. 1", "Москва", "Московская область", "123456", "89001234567", "Мария Иванова", "89007654321");
    // экземплярчик класса Пациента 

    string currentDate = getCurrentDate(); // получение текущей даты))
    
    vector<Procedure> procedures = { // std::vector это у меня в языке List<>
        Procedure("Процедура 1", currentDate, "Доктор Ирвин", 250.00),
        Procedure("Процедура 2", currentDate, "Доктор Джемисон", 500.00),// экземпляры класса :)
        Procedure("Процедура 3", currentDate, "Доктор Смит", 200.00)
    };
    
    cout << "Пациент: " << patient.getFirstName() << " " << patient.getMiddleName() << " " << patient.getLastName() << endl;
    cout << "Адрес: " << patient.getAddress() << ", " << patient.getCity() << ", " << patient.getState() << ", " << patient.getZip() << endl;
    cout << "Телефон: " << patient.getPhoneNumber() << endl;
    cout << "Экстренный контакт: " << patient.getEmergencyContactName() << " - " << patient.getEmergencyContactPhone() << endl;
    // инфа о пациентах

    double totalCost = 0.0;
    for (const Procedure& procedure : procedures) {
        cout << "Название процедуры: " << procedure.getProcedureName() << endl;
        cout << "Дата процедуры: " << procedure.getDate() << endl;
        cout << "Имя врача: " << procedure.getDoctorName() << endl;
        cout << "Стоимость процедуры: " << procedure.getCost() << endl;
        totalCost += procedure.getCost();
    }
    // инфа о процедурках)

    cout << "Общая стоимость всех процедур: " << totalCost << endl;
	
	return 0;
}



