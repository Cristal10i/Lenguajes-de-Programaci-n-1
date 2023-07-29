#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Función para eliminar espacios y convertir a mayúsculas
string cleanString(const string& str) {
    string cleanStr = str;
    cleanStr.erase(remove_if(cleanStr.begin(), cleanStr.end(), ::isspace), cleanStr.end());
    transform(cleanStr.begin(), cleanStr.end(), cleanStr.begin(), ::toupper);
    return cleanStr;
}

// Función para obtener las primeras 2 letras del apellido paterno
string getFirstTwoLetters(const string& lastName) {
    return lastName.substr(0, 2);
}

// Función para obtener la primera letra del apellido materno
char getFirstLetter(const string& motherLastName) {
    return motherLastName[0];
}

// Función para obtener las primeras 2 letras del nombre
string getFirstTwoLettersOfName(const string& name) {
    return name.substr(0, 2);
}

// Función para obtener la fecha de nacimiento con el formato YYMMDD
string getBirthDate(const string& birthdate) {
    string dateWithoutDash = cleanString(birthdate);
    return dateWithoutDash.substr(2, 6);
}

int main() {
    string name, lastName, motherLastName, birthdate;

    cout << "Ingrese nombre(s): ";
    getline(cin, name);

    cout << "Ingrese apellido paterno: ";
    getline(cin, lastName);

    cout << "Ingrese apellido materno: ";
    getline(cin, motherLastName);

    cout << "Ingrese fecha de nacimiento (YYYY-MM-DD): ";
    cin >> birthdate;

    // Cálculo del RFC
    name = cleanString(name);
    lastName = cleanString(lastName);
    motherLastName = cleanString(motherLastName);

    string rfc = getFirstTwoLetters(lastName) + getFirstLetter(motherLastName) + getFirstTwoLettersOfName(name) + getBirthDate(birthdate);

    cout << "RFC calculado: " << rfc << endl;

    return 0;
}
