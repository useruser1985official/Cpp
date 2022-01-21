// Implementação de Date.h

#include "Date.h"

time_t Date::atual = system_clock::to_time_t(system_clock::now());
string Date::semana[7] = {"Domingo", "Segunda-feira", "Terça-feira", "Quarta-feira", "Quinta-feira", "Sexta-feira", "Sábado"};

string Date::now() {
    return ctime(&atual);
}

string Date::manip(int quant, const char* tex) {
    string data(quant, ' ');
    strftime(&data[0], data.size() + 1, tex, localtime(&atual));

    return data;
}

string Date::week() {
    ds = stoi(this->manip(1, "%w"));

    return semana[ds];
}

int Date::day() {
    return stoi(this->manip(2, "%d"));
}

int Date::month() {
    return stoi(this->manip(2, "%m"));
}

int Date::year() {
    return stoi(this->manip(4, "%Y"));
}

int Date::hours() {
    return stoi(this->manip(2, "%H"));
}

int Date::minutes() {
    return stoi(this->manip(2, "%M"));
}

int Date::seconds() {
    return stoi(this->manip(2, "%S"));
}