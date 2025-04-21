/*Principales librerias de C++*/

#include <iostream> /* libreria de entrada/salida estandar*/
#include <string> /* libreria de cadenas de caracteres*/
#include <cstdlib> /* libreria de funciones generales*/
#include <limits> /* libreria para limites de tipos*/
#include <cmath> /* libreria de funciones matematicas*/
#include <ctime> /* libreria para funciones de tiempo*/ 
using namespace std; /*espacio de nombres estandar, para no tener que escribir siempre std::*/

int main() /*main de la app*/
{
  std::string name;
  std::cout << "What is your name? "; /* cout es lo que se ve en terminal */
  getline (std::cin, name);
  std::cout << "Hello, " << name << "!\n"; /* <<endl es salto de linea*/
  return 0; /*retorno de la funcion main*/
}