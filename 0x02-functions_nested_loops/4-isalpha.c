#include "main.h"

/**
*_isalpha-check for lower case letter
 * @c : character tp check
 * Return:0 and 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
