#pragma once

#include <fstream>
#include <iostream>
#include "Piscina.h"


void welcome();

std::vector<std::string> Filenames();

template<typename T>
T getNextNumber();

int getCommand();

void Interface(Piscina & p);

void addScreen(Piscina & p);

void removeScreen(Piscina & p);

void updateScreen(Piscina & p);

void showScreen(Piscina & p);

void secondScreen(Piscina & p);