/*

A storage class defines following attributes about a variable in C:
1) Scope         2) Default initial value        3) Lifetime

Storage classes which are most oftenly used
1) Automatic Variables   2) External Variables   3) Static Variables     4) Register Variables

1) Auto -> local variables ('int x' and 'auto int x' is same)
2) External -> global variables ('int x' written outside any function)
   Extern Keyword -> using extern will not allocate space for variable
3) Static Variable -> the value of static variable doesn't change throughout its scope
4) Register Variable -> store variable in CPU register instead storing it in memory. This is done for the variable which are being used frequently

*/