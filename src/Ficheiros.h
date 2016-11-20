#pragma once

#include <fstream>
#include "Piscina.h"
#include <sstream>
#include <string>

void load(Piscina & p, std::vector<std::string> ficheiros);

void save(Piscina & p, std::vector<std::string> ficheiros);