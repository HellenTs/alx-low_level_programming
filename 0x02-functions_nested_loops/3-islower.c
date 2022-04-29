#include "main.h"

/**
* _islower - checkes wheather its lowercase or not
* @c: accepts chars and int to eval
* Return: 1 or 2
*/
int _islower(int c)
{
return ((c >= 'a' && c <= 'z') ? 1 : 0);
}
