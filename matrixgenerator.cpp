#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std ;

int main ()
{
  system("color 2");
const char nizkurac[25] = { ' ', '0', 'e', ' ', 'X', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' } ;
  const char niz[25] = { '0', ' ', '!', 'P', 'v', '*' ,'h', ';', 't', 'y', '1', '3', '7', '9', 'A', 'D', 'G', '2', 'r', ' ', '2', '4', '5', '6', '8'} ;
	srand ( time(NULL) ) ;  
for ( ; ; )
{
  int NasIndeks = rand() % 25 ;
  cout << niz[NasIndeks] << nizkurac[NasIndeks] ;
}
}
