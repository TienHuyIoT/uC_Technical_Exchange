/* GCC */

#include <stdint.h>

/*
String1:
- RAM: 10 byte
- Flash: 4 byte "Huy\0"
*/
char String1[10] = "Huy";
String1[0] = 'K'; // "Kuy"

/*
String3:
- RAM: 
  Huynh : 10 bytes is right
- Flash: 4 bytes
*/
const char String3[10] = "Huy";

/*
pString1:
- RAM: align 1/2/4/8 byte
- Flash: 4 byte
*/
char* pString1   = "Huy";
/*

*/
pString1[0] = 'K'; // "Kuy" 

/*
String2:
- Array 4 bytes RAM
- Used 4 bytes
*/
char String2[]   = "Huy";
/*
String3:
- Khuong: 4 bytes Flash
- Hiep: 4 bytes Flash
- Huynh: 4 bytes Flash/RAM
- Tuan: the same Mr.Hiep
*/
const char String4[]   = "Huy";

