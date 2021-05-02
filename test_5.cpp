//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "SP3.h"
#include "redirect_io.h"

#include <string>

using namespace std;

TEST_CASE("Ejercicio #5") {
    execute_test("test_5.in", ejercicio_5);
}