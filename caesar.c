//caeser encrypth and decrypt offset
const int offset = 3;

/**
* func: caeser encrypt algorithm, f(n) = (n+offset)%x;
* parameter: src:original text, des:cipher text
* return: void
*/
void caesar_encrypt(char* src, char* des)
{
	char* pSrc = src, *pDes = des;
	while (*pSrc != '\0')
	{
		if (*pSrc >= '0' && *pSrc <= '9')
			*(pDes) = ((*pSrc) - '0' + offset) % 10 + '0';

		if (*pSrc >= 'a' && *pSrc <= 'z')
			*pDes = ((*pSrc) - 'a' + offset) % 26 + 'a';
		
		if (*pSrc >= 'A' && *pSrc <= 'Z')
			(char)(*pDes) = ((*pSrc) - 'A' + offset) % 26 + 'A';
		pSrc++, pDes++;
	}
}

/**
* func: caeser encrypt algorithm
* parameter: src:cipher text, des:original text
* return: void
*/
void caesar_decrypt(char* src, char* des) 
{
	char* pSrc = src, *pDes = des;
	while (*pSrc != '\0')
	{
		if (*pSrc >= '0' && *pSrc <= '9')
		{
			if ((*pSrc) < ('0' + offset))
				*pDes = ((*pSrc) - '0' - offset + 10) % 10 + '0';
			else
				*pDes = ((*pSrc) - '0' - offset) % 10 + '0';
		}
		
		if (*pSrc >= 'a' && *pSrc <= 'z')
		{
			if (*pSrc < 'a' + offset)
				*pDes = ((*pSrc) - 'a' - offset + 26) % 26 + 'a';
			else
				*pDes = ((*pSrc) - 'a' - offset) % 26 + 'a';
		}

		
		if (*pSrc >= 'A' && *pSrc <= 'Z')
		{
			if (*pSrc < 'A' + offset)
				*pDes = ((*pSrc) - 'A' - offset + 26) % 26 + 'A';
			else
				*pDes = ((*pSrc) - 'A' - offset) % 26 + 'A';
		}

		pSrc++, pDes++;
	}
}
