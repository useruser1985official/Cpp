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
    return atoi(this->manip(2, "%d").c_str());
}

int Date::month() {
    return atoi(this->manip(2, "%m").c_str());
}

int Date::year() {
    return atoi(this->manip(4, "%Y").c_str());
}

int Date::hours() {
    return atoi(this->manip(2, "%H").c_str());
}

int Date::minutes() {
    return atoi(this->manip(2, "%M").c_str());
}

int Date::seconds() {
    return atoi(this->manip(2, "%S").c_str());
}