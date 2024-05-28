//
// Created by tudor on 17/05/2024.
//

#ifndef LAB8_9_CONSOLA_H
#define LAB8_9_CONSOLA_H


#include "AgentieService.h"
#include "Oferta.h"
#include <vector>


class Consola {
    AgentieService &service;

    void adaugaUI();

    static void afisareUI(const vector<Oferta> &oferte);

    void modificaUI();

    void stergereUI();

    void filtrareDestinatieUI();

    void filtrarePretUI();

    void sortare();

    void raportUI();

    void cosAdaugaUI();

    void cosAdaugaRandomUI();

    void cosStergeUI();

    void cosExportUI();

    void MeniuCos();

public:
    explicit Consola(AgentieService &service) : service{service} {}

    Consola(const Consola &ot) = delete;

    void run();
};
#endif //LAB8_9_CONSOLA_H
