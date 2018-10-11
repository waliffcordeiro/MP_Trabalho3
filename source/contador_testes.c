#define CATCH_CONFIG_MAIN
#include "../include/contador.h"
#include "../include/catch.hpp"
#include <stdio.h>



//A função irá contar linhas num código que não contém espaços
TEST_CASE("Código sem espaços"){
	REQUIRE(contador("../testes/teste1.c",1,1) == 10);
}

//a função irá contar linhas num código que contém apenas comentários do tipo "//"
TEST_CASE("Código sem espaços e com comentários"){
	REQUIRE(contador("../testes/teste3.c",1,1) == 10);
}

//A função irá contar linhas num código que contém espaços em branco
TEST_CASE("Código com espaços"){	
	REQUIRE(contador("../testes/teste2.c",1,1) == 8);
}

//a função irá contar linhas num código que contém espaços em brancos e comentário do tipo "//"
TEST_CASE("Código com espaços e comentários"){

	REQUIRE(contador("../testes/teste4.c",1,1) == 8);
}