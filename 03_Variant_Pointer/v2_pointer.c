char String1[10] = "Huy";
String1[0] = 'K'; // "Kuy"
String1++; // compiler error

const char ten = 1;

/*1*/ char * pString1   = "Huy";

/*2*/ char * const pString11 = String1;
pString11 = String1; // compiler error
pString11[0] = 'J';  // runtime crash

/*3*/ const char* pString1   = "Huy";

pString1 = String1;

pString1[0] = 'K'; // compiler error

funA(String1);

void funA(const char* str)
{
    (char*)str[0];
}