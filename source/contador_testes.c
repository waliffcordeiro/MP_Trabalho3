#define CATCH_CONFIG_MAIN
#include "../include/contador.h"
#include "../include/catch.hpp"
#include <stdio.h>



//A função irá contar linhas num código que não contém espaços
TEST_CASE("Código sem espaços"){
	REQUIRE(contador("../testes/teste1.c",1,1) == 10);
}

