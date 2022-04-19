/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiirone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:16:13 by ppiirone          #+#    #+#             */
/*   Updated: 2021/11/10 18:16:20 by ppiirone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <strings.h>
#include <ctype.h>
#include <stdio.h>

int main()
{
		ft_putendl("\nPart 1: \n");
		// int c is for OK (0) or KNOCK OUT (1)
		// int i is counter
//*****		ft_atoi			*****************************************************
	int c = 0;
	if (ft_atoi("987987987987") != atoi("987987987987") ||
		ft_atoi("987987987987987987987987") != atoi("987987987987987987987987") ||\
		ft_atoi("6885fghfghgfdh567445674657") != atoi("6885fghfghgfdh567445674657") ||\
		ft_atoi("Hello world") != atoi("Hello world") ||\
		ft_atoi("-Hello world") != atoi("-Hello world") ||\
		ft_atoi("-3000111000") != atoi("-3000111000") ||\
		ft_atoi("adfdff445674657") != atoi("adfdff445674657") ||\
		ft_atoi("-6645676547567445614657") != atoi("-6645676547567445614657") ||\
		ft_atoi("-007") != atoi("-007") ||\
		ft_atoi("000042") != atoi("000042") |\
		ft_atoi("	-0002aa42") != atoi("	-0002aa42") ||\
		ft_atoi("	0002aa42") != atoi("	0002aa42") ||\
		ft_atoi("     -42") != atoi("     -42") ||\
		ft_atoi("-0002aa42") != atoi("-0002aa42") ||\
		ft_atoi("   -   0002aa42") != atoi("   -   0002aa42") ||\
		ft_atoi("000-42") != atoi("000-42") ||\
		ft_atoi("\f12345") != atoi("\f12345") ||\
		ft_atoi("  \n34567") != atoi("  \n34567") ||\
		ft_atoi("  \v  -876") != atoi("  \v  -876") ||\
		ft_atoi("-\r456") != atoi("-\r456") ||\
		ft_atoi("--1") != atoi("--1") ||\
		ft_atoi("+-12") != atoi("+-12") ||\
		ft_atoi("++12") != atoi("++12") ||\
		ft_atoi("-+12") != atoi("-+12") ||\
		ft_atoi("     12") != atoi("     12") ||\
		ft_atoi("\v\t\f -12") != atoi("\v\t\f -12") ||\
		ft_atoi("-     12") != atoi("-     12") ||\
		ft_atoi("!-12") != atoi("!-12") ||\
		ft_atoi("!12") != atoi("!12") ||\
		ft_atoi("   +  12+12") != atoi("   +  12+12") ||\
		ft_atoi("0") != atoi("0") ||\
		ft_atoi("-2147483648") != atoi("-2147483648") ||\
		ft_atoi("2147483647") != atoi("2147483647") ||\
		ft_atoi("-12-12") != atoi("-12-12") ||\
		ft_atoi("") != atoi("") ||\
		ft_atoi(" ") != atoi(" ") ||\
		ft_atoi("a1") != atoi("a1") ||\
		ft_atoi("9223372036854775809") != atoi("9223372036854775809") ||\
		ft_atoi("12a12") != atoi("12a12"))
			c = 1;	
	if (c == 0)
		ft_putendl("ft_atoi    OK!");
	else
		ft_putendl("ft_atoi    KNOCK OUT!");
//*****		ft_bzero		****************************************************
	char b1[] = "Error!!!";
	char b2[] = "";
	char bb1[] = "Error!!!";
	char bb2[] = "";
	
		ft_bzero(b1, sizeof(char) * 3);
		bzero(bb1, sizeof(char) * 3);
		ft_bzero(b2, sizeof(char) * 0);
		bzero(bb2, sizeof(char) * 0);
	if (ft_strcmp(b1, bb1) == 0 && ft_strcmp(b2, bb2) == 0)
		ft_putendl("ft_bzero   OK!");
	else
		ft_putendl("ft_bzero   KNOCK OUT!");
//*****		ft_isalpha		****************************************************
	int asc = 0;
	c = 0;
	while (asc <= 200)
	{
		if (ft_isalpha(asc) != isalpha(asc))
			c = 1;
	asc++;
	}
	if (c == 0)
		ft_putendl("ft_isalpha OK!");
	else
		ft_putendl("ft_isalpha KNOCK OUT!");
//*****		ft_isdigit		****************************************************
	asc = 0;
	c = 0;
	while (asc <= 200)
	{
		if (ft_isdigit(asc) != isdigit(asc))
			c = 1;
	asc++;
	}
	if (c == 0)
		ft_putendl("ft_isdigit OK!");
	else
		ft_putendl("ft_isdigit KNOCK OUT!");
//*****		ft_isalnum		****************************************************
	asc = 0;
	c = 0;
	while (asc <= 200)
	{
		if (ft_isalnum(asc) != isalnum(asc))
			c = 1;
	asc++;
	}
	if (c == 0)
		ft_putendl("ft_isalnum OK!");
	else
		ft_putendl("ft_isalnum KNOCK OUT!");
//*****		ft_isascii		****************************************************
	asc = 0;
	c = 0;
	while (asc <= 200)
	{
		if (ft_isascii(asc) != isascii(asc))
			c = 1;
	asc++;
	}
	if (c == 0)
		ft_putendl("ft_isascii OK!");
	else
		ft_putendl("ft_isascii KNOCK OUT!");
//*****		ft_isprint		****************************************************
	asc = 0;
	c = 0;
	while (asc <= 200)
	{
		if (ft_isprint(asc) != isprint(asc))
			c = 1;
	asc++;
	}
	if (c == 0)
		ft_putendl("ft_isprint OK!");
	else
		ft_putendl("ft_isprint KNOCK OUT!");
//*****		ft_memchr		****************************************************
	int d1[] = {1, 2}; // 0 0 0 1 0 0 0 2
	int d2[] = {3, 4}; // 0 0 0 3 0 0 0 4
	if (ft_memchr(d1, 3, sizeof(int) * 2) != NULL)
		c = 1;
	if (ft_memchr(d2, 3, sizeof(int) * 2) == NULL)
		c = 1;
	char d5[] = "Hoplaa";
	char *d6;
	char *dd6;
	d6 = ft_memchr(d5, 'p', sizeof(char) * 5);
	dd6 = memchr(d5, 'p', sizeof(char) * 5);
	if (d6 != dd6)
		c = 1;
	if (c == 0)
		ft_putendl("ft_memchr  OK!");
	else
		ft_putendl("ft_memchr  KNOCK OUT!");
//*****		ft_memcmp		****************************************************
	c = 0;
	char *e1 = "abcdefghiklmnopqrstuwvxyz";
	char *e2 = "abck ";
	char *e3 = "abcdefghiklmnopqrstuwvxyz";
	char *e4 = "";
	char *e8 = "abcdefghiklmnopqrstuwvxyzXXX";
	int e5 = ft_memcmp(e1, e2, 4 * sizeof(char));
	int ee5 = memcmp(e1, e2, 4 * sizeof(char));
	int e6 = ft_memcmp(e1, e3, 28 * sizeof(char));
	int ee6 = memcmp(e1, e3, 28 * sizeof(char));
	int e7 = ft_memcmp(e1, e4, 5 * sizeof(char));
	int ee7 = memcmp(e1, e4, 5* sizeof(char));
	int e9 = ft_memcmp(e1, e8, 35 * sizeof(char));
	int ee9 = memcmp(e1, e8, 35* sizeof(char));
	if (e5 != ee5 || e6 != ee6 || e7 != ee7 || e9 != ee9)
		c = 1;
	if (c == 0)
		ft_putendl("ft_memcmp  OK!");
	else
		ft_putendl("ft_memcmp  KNOCK OUT!");
//*****		ft_memcpy		****************************************************
	c = 0;
	char f1[] = "abcdefghiklmnopqrstuwvxyz";
	char f2[] = "Copy this to mcpy X ";
	char ff1[] = "abcdefghiklmnopqrstuwvxyz";
	char ff2[] = "Copy this to mcpy X ";
	char *f3 = ft_memcpy(f1, f2, sizeof(char) * 21);
	char *ff3 = memcpy(ff1, ff2, sizeof(char) * 21);

	if (ft_strcmp(f3, ff3) != 0 || ft_strcmp(f2, ff2) != 0 || ft_strcmp(f1, ff1) != 0)
		c = 1;
	char f4[] = "Copy this to mcpy X VVVVVVVVVVVVVVVVVVVVVVVVV";
	char ff4[] = "Copy this to mcpy X VVVVVVVVVVVVVVVVVVVVVVVVV";
	char *f5 = ft_memcpy(f1, f4, sizeof(char) * 25);
	char *ff5 = memcpy(ff1, ff4, sizeof(char) * 25);
	if (ft_strcmp(f5, ff5) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_memcpy  OK!");
	else
		ft_putendl("ft_memcpy  KNOCK OUT!");
//*****		ft_memccpy		****************************************************
	c = 0;
	char g1[] = "abcdefghiklmnopqrstuwvxyz";
	char g2[] = "Hello HIVE ";
	char g3[] = "Turku";
	char gg1[] = "abcdefghiklmnopqrstuwvxyz";
	char gg2[] = "Hello HIVE ";
	char gg3[] = "Turku";
	char *g4 = ft_memccpy(g1, g2, 'H', sizeof(char) * 15);
	char *gg4 = memccpy(gg1, gg2, 'H', sizeof(char) * 15);
	char *g5 = ft_memccpy(g2, g3, 'u', sizeof(char) * 10);
	char *gg5 = memccpy(gg2, gg3, 'u', sizeof(char) * 10);
	if (ft_strcmp(g4, gg4) != 0 || ft_strcmp(g5, gg5) != 0)//Adress check
		c = 1;
	if (ft_strcmp(g1, gg1) != 0 || ft_strcmp(g2, gg2) != 0 ||//Check strings
		ft_strcmp(g3, gg3) != 0)
		c = 1;
	if (ft_memccpy(g1, g2, 'X', sizeof(char) * 15) != NULL)//Return NULL check
		c = 1;
	if (c == 0)
		ft_putendl("ft_memccpy OK!");
	else
		ft_putendl("ft_memccpy KNOCK OUT!");
//*****		ft_memmove		****************************************************
	c = 0;
	char h1[] = "Hello HIVE ";
	char h2[] = "abcdefghiklmnopqrstuwvxyz";
	char h3[] = "Turku";
	char hh1[] = "Hello HIVE ";
	char hh2[] = "abcdefghiklmnopqrstuwvxyz";
	char hh3[] = "Turku";
	char *h4 = ft_memmove(h1, h2, sizeof(char) * 10);//Do not error overflows
	char *hh4 = memmove(hh1, hh2, sizeof(char) * 10);//max destination buffer
	char *h5 = ft_memmove(h2, h3, sizeof(char) * 10);
	char *hh5 = memmove(hh2, hh3, sizeof(char) * 10);
	if (ft_strcmp(h4, hh4) != 0 || ft_strcmp(h5, hh5) != 0)//Adress check
		c = 1;
	if (ft_strcmp(h1, hh1) != 0 || ft_strcmp(h2, hh2) != 0 ||//Check strings
		ft_strcmp(h3, hh3) != 0)
		c = 1;
	if (ft_memccpy(h1, h2, 'X', sizeof(char) * 15) != NULL)//Return NULL check
		c = 1;
	if (c == 0)
		ft_putendl("ft_memmove OK!");
	else
		ft_putendl("ft_memmove KNOCK OUT!");
//*****		ft_memset		****************************************************
	c = 0;
	char i1[] = "Hello world and universe!";
	ft_memset(i1 + 6, 'X', sizeof(char) * 5);
	char ii1[] = "Hello world and universe!";
	memset(ii1 + 6, 'X', sizeof(char) * 5);
	if (strcmp(i1, ii1) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_memset  OK!");
	else
		ft_putendl("ft_memset  KNOCK OUT!");
//*****		ft_strlen		****************************************************
	c = 0;
	char strlen1[] = "Hello";
	char strlen2[] = "";
	char *strlen3 = strlen1;
	char *strlen4 = strlen2;
	if (ft_strlen(strlen3) != strlen(strlen3) ||\
		ft_strlen(strlen4) != strlen(strlen4))
		c = 1;
	if (c == 0)
		ft_putendl("ft_strlen  OK!");
	else
		ft_putendl("ft_strlen  KNOCK OUT!");
//*****		ft_strcat		****************************************************
	c = 0;
	char m1[50] = "Hello ";
	char mm1[50] = "Hello ";
	const char *m2 = "world! What about too long string?";
	const char *mm2 = "world! What about too long string?";
	char *m3 = m1;
	char *mm3 = mm1;
	m3 = ft_strcat(m1,m2);
	mm3 = ft_strcat(mm1, mm2);
	if (ft_strcmp(m1, mm1) != 0)
		c = 1;
	if (ft_strcmp(m3, mm3) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strcat  OK!");//You may pass w/o
	else							//null-terminator end of the string.
		ft_putendl("ft_strcat  KNOCK OUT!");
//*****		ft_strncat		****************************************************
	c =  0;
	char m4[25] = "Good ";
	const char *m5 = "bye world! I'm leaving now!";
	char mm4[25] = "Good ";
	const char *mm5 = "bye world! I'm leaving now!";
	char *m6 = m4;
	char *mm6 = mm4;
	m6 = ft_strncat(m4, m5, 10);
	mm6 = strncat(mm4, mm5, 10);
	if (ft_strcmp(m4, mm4) != 0 || ft_strcmp(m6, mm6) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strncat OK!");
	else
		ft_putendl("ft_strncat KNOCK OUT!");
//*****		ft_strlcat		****************************************************
	c = 0;
	char strl[10] = "Good ";
	char *strl2 = "morning Helsinki!";
	size_t destsize = 10;
	char *strl1 = strl;
	size_t st = ft_strlcat(strl1, strl2, destsize);
	(void)st;
	char strlb[10] = "Good ";
	char *strl2b = "morning Helsinki!";
	size_t destsizeb = 10;
	char *strl1b = strlb;
	size_t stb = strlcat(strl1b, strl2b, destsizeb);
	(void)stb;
	if (ft_strcmp(strl1, strl1b) != 0 || st != stb)//check dest and return
		c = 1;
	//part 2
	//char ft_dest[7] = "Hello";
	//ft_dest[8] = 'a';
	//char real_dest[7] = "Hello";
	//real_dest[8] = 'a';
	//size_t ret_ft = ft_strlcat(ft_dest, "lorem", 6);
	//size_t ret_real = strlcat(real_dest, "lorem", 6);
	//ft_putendl(ft_dest);
	//ft_putendl(real_dest);
	//printf("FT: %zu \n", ret_ft);
	//printf("Real: %zu \n", ret_real);
	//end of part 2
	if (c == 0)
		ft_putendl("ft_strlcat OK!");
	else
		ft_putendl("ft_strlcat KNOCK OUT!");
//*****		ft_strcpy		****************************************************
	c = 0;
	char cpy1[] = "Hello world!";
	char cpy2[] = "abcde";
	char cpy3[] = "Hola";
	char cpy4[] = "HIVE";
	char cpy1b[] = "Hello world!";
	char cpy2b[] = "abcde";
	char cpy3b[] = "Hola";
	char cpy4b[] = "HIVE";
	ft_strcpy(cpy1, cpy2);
	strcpy(cpy1b, cpy2b);
	ft_strcpy(cpy3, cpy4);
	strcpy(cpy3b, cpy4b);
	if (ft_strcmp(cpy1, cpy1b) != 0 || ft_strcmp(cpy3, cpy3b))
		c = 1;
	if (c == 0)
		ft_putendl("ft_strcpy  OK!");
	else
		ft_putendl("ft_strcpy  KNOCK OUT!");
//*****		ft_strncpy		****************************************************
	c = 0;
	char ncpy1[] = "Hello world and universe!";
	char ncpy2[] = "abcde";
	char ncpy3[] = "Hello  world";
	char ncpy4[] = "HIVERS all around the world!";
	char ncpy1b[] = "Hello world and universe!";
	char ncpy2b[] = "abcde";
	char ncpy3b[] = "Hello  world";
	char ncpy4b[] = "HIVERS all around the world!";

	ft_strncpy(ncpy1, ncpy2, sizeof(char) * 10 );
	strncpy(ncpy1b, ncpy2b, sizeof(char) * 10 );
	ft_strncpy(ncpy3, ncpy4, sizeof(char) * 6 );
	strncpy(ncpy3b, ncpy4b, sizeof(char) * 6 );
	if (ft_strcmp(ncpy1, ncpy1b) != 0 || ft_strcmp(ncpy3, ncpy3b) != 0)
		c = 1;
	//part 2
	char *ncpy7 = "Apple";
	char *ncpy5 = malloc(sizeof(char) * 10);
	char *ncpy5b = malloc(sizeof(char) * 10);
	char *ncpy6 = ft_strncpy(ncpy5, ncpy7, 10);
	char *ncpy6b = strncpy(ncpy5b, ncpy7, 10);
	if (ft_memcmp(ncpy5, ncpy5b, 10) != 0 ||\
		ft_memcmp(ncpy6, ncpy6b, 10) != 0 )
		c = 1;
	if (c == 0)
		ft_putendl("ft_strncpy OK!");
	else
		ft_putendl("ft_strncpy KNOCK OUT!");
//*****		ft_strchr		****************************************************
	c = 0;
	char strchr1[] = "Hello world!";
	char *strchr11 = strchr1;
	char *chr1p = ft_strchr(strchr11, '\0');
	char strchr2[] = "Hello world!";
	char *strchr22 = strchr2;
	char *chr2p = strchr(strchr22, '\0');
	//rintf("Returned pointer chr1p (ft): %c \n", *chr1p);
	//printf("Returned pointrer chr2p (real): %c \n\n", *chr2p);
	if (ft_strcmp(chr1p, chr2p) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strchr  OK!");
	else
		ft_putendl("ft_strchr  KNOCK OUT!");
//*****		ft_strrchr		****************************************************
	c = 0;
	char strrchr1[] = "Hello world! Where is the wine?";
	char *chrr1p = ft_strrchr(strrchr1, 'w');
	char strrchr2[] = "Hello world! Where is the wine?";
	char *chrr2p = strrchr(strrchr2, 'w');
	if (strcmp(chrr1p, chrr2p) != 0 )
		c = 1;
	if (c == 0)
		ft_putendl("ft_strrchr OK!");
	else
		ft_putendl("ft_strrchr KNOCK OUT!");
//*****		ft_strstr		****************************************************
	c = 0;
	char haystack[] = "Apples are go-go good for your health.";
	char needle[] = "good";
	char noodle[] = "h.bad";
	char empty[] = "";
	char last[] = "health.";
	char *strstr1 = ft_strstr(haystack, needle);
	char *strstr1b = strstr(haystack, needle);
	char *strstr4 = ft_strstr(haystack, last);
	char *strstr4b = strstr(haystack, last);
	//Found the needle (middle and last)
	char *strstr2 = ft_strstr(haystack, noodle);
	char *strstr2b = strstr(haystack, noodle);
	//Can't find the needle (noodle)
	char *strstr3 = ft_strstr(haystack, empty);
	char *strstr3b = strstr(haystack, empty);
	//When substring is empty, return haystack.
	if (strcmp(strstr1, strstr1b) != 0 || strcmp(strstr3, strstr3b) != 0
		|| strstr2 != strstr2b || strcmp(strstr4, strstr4b))
		c = 1;
	if (c == 0)
		ft_putendl("ft_strstr  OK!");
	else
		ft_putendl("ft_strstr  KNOCKED OUT!");
//*****		ft_strnstr		****************************************************
	c = 0;
	char nhaystack[] = "Apples are good for your health.";
	char nneedle[] = "good";
	char nempty[] = "";
	//--->char nlast[] = "health.";
	char *strnstr1 = ft_strnstr(nhaystack, nneedle, sizeof(char) * 25);
	char *strnstr1b = strnstr(nhaystack, nneedle, sizeof(char) * 25);
	//--->char *strnstr4 = ft_strnstr(nhaystack, nlast, sizeof(char) * 32);
	//--->char *strnstr4b = strnstr(nhaystack, nlast, sizeof(char) * 32);
	//Found the needle (middle and last)
	char *strnstr2 = ft_strnstr(nhaystack, nneedle, sizeof(char) * 12);
	char *strnstr2b = strnstr(nhaystack, nneedle, sizeof(char) * 12);
	//Can't find when the size of search is enough for start of needle,
	//but not enough for whole string. 
	char *strnstr3 = ft_strnstr(nhaystack, nempty, sizeof(char) * 25);
	char *strnstr3b = strnstr(nhaystack, nempty, sizeof(char) * 25);
	//When substring is empty, return haystack.
	if (strcmp(strnstr1, strnstr1b) != 0 || strcmp(strnstr3, strnstr3b) != 0
		|| strnstr2 != strnstr2b)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strnstr OK!");
	else
		ft_putendl("ft_strnstr KNOCK OUT!");
	
//*****		ft_strcmp		****************************************************
	c = 0;
	if (ft_strcmp("Hello world \t", "Hello world \t") != strcmp("Hello world \t", "Hello world \t") ||\
		ft_strcmp("\200", "\0") <= 0 ||\
		//This is 128, but real returns 1.
		ft_strcmp("", "\0") != strcmp("", "\0") ||\
		ft_strcmp("test\0 test", "test") != strcmp("test\0 test", "test"))
		c = 1;
	if (c == 0)
		ft_putendl("ft_strcmp  OK!");
	else
		ft_putendl("ft_strcmp  KNOCK OUT!");
//*****		ft_strncmp		****************************************************
	c = 0;
	if (ft_strncmp("Hello", "Hello", 5) != strncmp("Hello", "Hello", 5) ||\
		ft_strncmp("\200", "\0", 1) <= 0 ||\
		//This is 128, but real returns 1.
		ft_strncmp("", "\0", 1) != strncmp("", "\0", 1) ||\
		ft_strncmp("abcd", "abcde", 4) != strncmp("abcd", "abcde", 4) ||\
		ft_strncmp("abcde", "abcd", 5) <= 0 ||\
		//This is 101, but real returns 1.
		ft_strncmp("abcd", "abcde", 5) >= 0)
		//This is -101, but real returns -1.
		c = 1;
	if (c == 0)
		ft_putendl("ft_strncmp OK!");
	else
		ft_putendl("ft_strncmp KNOCK OUT!");
	//printf("FT: %i\n", ft_strncmp("abcde", "abcd", 5));
	//printf("REAL: %i\n", strncmp("abcde", "abcd", 5));
//*****		ft_strdup		****************************************************
	c = 0;
	char *ft_dup = ft_strdup("Hello 42rs all over the world!");
	char *dup = strdup("Hello 42rs all over the world!");
	if (ft_strcmp(ft_dup, dup) != 0 || ft_strlen(ft_dup) != ft_strlen(dup))
		c = 1;
	ft_dup = ft_strdup("");
	dup = strdup("");
	if (ft_strcmp(ft_dup, dup) != 0 || ft_strlen(ft_dup) != ft_strlen(dup))
		c = 1;
	if (c == 0)
		ft_putendl("ft_strdup  OK!");
	else
		ft_putendl("ft_strdup q KNOCK OUT!");
//*****		ft_tolower		****************************************************
	c = 0;
	int toto = 0;
	while (toto <= 200)
	{
		if (ft_tolower(toto) != tolower(toto))
			c = 1;
			toto++;
	}
		if (c == 0)
		ft_putendl("ft_tolower OK!");
	else
		ft_putendl("ft_tolower KNOCK OUT!");
//*****		ft_toupper		****************************************************
	c = 0;
	toto = 0;
	while (toto <= 200)
	{
		if (ft_toupper(toto) != toupper(toto))
			c = 1;
			toto++;
	}
		if (c == 0)
		ft_putendl("ft_toupper OK!");
	else
		ft_putendl("ft_toupper KNOCK OUT!");
	ft_putendl("\nPart 2: \n");
//*****		ft_putchar		****************************************************
	ft_putstr("ft_putchar  ");
	ft_putchar('O');
	ft_putchar('K');
	ft_putchar('!');
	ft_putchar('\n');
//*****		ft_putstr		****************************************************
	ft_putstr("ft_putstr   OK!\n");
//*****		ft_putendl		****************************************************
	ft_putendl("ft_putendl  OK!");
//*****		ft_putchar_fd	****************************************************
	c = 0;
	
//*****		ft_memalloc		****************************************************
	c = 0;
	int *j = ft_memalloc(sizeof(int) * 100);
	char *j2 = ft_memalloc(sizeof(char) * 100);
	if (j[0] != 0 || j[1] != 0 || j[99] != 0)
		c = 1;
	if (j2[0] != 0 || j2[1] != 0 || j2[99] != 0)
		c = 1;
	free(j2);
	if ((j2 = ft_memalloc(-1)) != NULL)
		c = 1;
	if (c == 0)
		ft_putendl("ft_memalloc OK!");
	else
		ft_putendl("ft_memalloc KNOCK OUT!");
//*****		ft_memdel		****************************************************
	c = 0;
	char *j3 = malloc(sizeof(char) * 100);
	int	*j4 = malloc(sizeof(int) * 25);
	void *j5 = malloc(100);
	void *j6 = NULL;
	ft_memdel((void**)&j3);
	ft_memdel((void**)&j4);
	ft_memdel(&j5);
	ft_memdel(&j6);
	if (j3 != NULL || j4 != NULL || j5 != NULL || j6 != NULL)
		c = 1;
	if (c == 0)
		ft_putendl("ft_memdel   OK!");
	else
		ft_putendl("ft_memdel   KNOCK OUT!");
//*****		ft_strnew		****************************************************
	c = 0;
	char *k1 = ft_strnew(100);
	if (k1[0] != 0 || k1[1] != 0 || k1[99] != 0 || k1[100 ] != '\0')
		c = 1;
	free(k1);
	//k1 = ft_strnew(-1); //ei toimi
	//printf("k1: %s \n", k1);
	//if (k1 != NULL)
	//	c = 1;
	if (c == 0)
		ft_putendl("ft_strnew   OK!");
	else
		ft_putendl("ft_strnew   KNOCK OUT!");
//*****		ft_strdel		****************************************************
	c = 0;
	char *k3 = malloc(sizeof(char) * 100);
	char *k4 = malloc(sizeof(char) * 25);
	char *k5 = NULL;
	ft_strdel((char**)&k3);
	ft_strdel((char**)&k4);
	ft_strdel(&k5);
	if (k3 != NULL || k4 != NULL || k5 != NULL)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strdel   OK!");
	else
		ft_putendl("ft_strdel   KNOCK OUT!");
//*****		ft_strclr		****************************************************
	c = 0;
	char l[] = "Hello world!";
	ft_strclr(l);
	size_t i = 0;
	while (i < ft_strlen(l))
	{
		if (l[i] != '\0')
			c = 1;
		i++;
	}
	//part 2: Seg faults
	//char *n1 = malloc(sizeof(char) * 10);
    //char n2[10] = {'\0'};
	//i = 0;
	//while (i < 10)
	//	{
	//		n1[i] = 'A';
 	//		i++;
	//	}
	//ft_strclr(n1);
	//if (memcmp(n1, n2, 10) != 0)
	//	c = 1;
	//free(n1);
	//n1 = NULL;
	//ft_strclr(n1);
	if (c == 0)
		ft_putendl("ft_strclr   OK!");
	else
		ft_putendl("ft_strclr   KNOCK OUT!");
//*****		ft_striter		****************************************************
	c = 0;
	void	ft_striter_tester(char *s);//Modifying char to X
	char l3[] = "Hello world!";
	char l4[] = "XXXXXXXXXXXX";
	ft_striter(l3, ft_striter_tester);
	if (ft_strcmp(l3, l4) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_striter  OK!");
	else
		ft_putendl("ft_striter  KNOCK OUT!");
//*****		ft_striteri		****************************************************
	c = 0;
	void	ft_striteri_tester(unsigned int, char *s);
	char l5[] = "Hello world!";
	char l6[] = "XXXXXXXXXXXX";
	ft_striteri(l5, ft_striteri_tester);
	if (ft_strcmp(l5, l6) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_striteri OK!");
	else
		ft_putendl("ft_striteri KNOCK OUT!");
//*****		ft_strmap		****************************************************
	c = 0;
	char ft_strmap_tester(char c);
	char l7[] = "Hello world!";
	char l8[] = "XXXXXXXXXXXX";
	char *l9 = ft_strmap(l7, ft_strmap_tester);
	if (ft_strcmp(l9, l8) != 0)
		c = 1;
	if (ft_strcmp(l7, l8) == 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strmap   OK!");
	else
		ft_putendl("ft_strmap   KNOCK OUT!");
//*****		ft_strmapi		****************************************************
	c = 0;
	char	ft_strmapi_tester(unsigned int i, char c);
	char n7[] = "Hello world!";
	char n8[] = "XXXXXXXXXXXX";
	char *n9 = ft_strmapi(n7, ft_strmapi_tester);
	if (ft_strcmp(n9, n8) != 0)
		c = 1;
	if (ft_strcmp(n7, n8) == 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strmapi  OK!");
	else
		ft_putendl("ft_strmapi  KNOCK OUT!");
//*****		ft_strequ		****************************************************
	c = 0;
	char o1[] = "Hello world";
	char o2[] = "Hello world!";//not equal
	char o3[] = "Hello world";//equal
	char o4[] = "";
	int o5 = ft_strequ(o1, o2);
	int o6 = ft_strequ(o1, o3);
	int o7 = ft_strequ(o1, o4);
	if (o5 != 0 || o6 != 1 || o7 != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strequ   OK!");
	else
		ft_putendl("ft_strequ   KNOCK OUT!");
//*****		ft_strnequ		****************************************************
	c = 0;
	int o8 = ft_strnequ(o1, o2, 11);//1
	int o9 = ft_strnequ(o1, o2, 12);//0
	int o10 = ft_strnequ(o1, o3, 14);//1
	int o11 = ft_strnequ(o1, o4, 5);//0
	if (o8 != 1 || o9 != 0 || o10 != 1 || o11 != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strnequ  OK!");
	else
		ft_putendl("ft_strnequ  KNOCK OUT!");
//*****		ft_strsub		****************************************************
	c = 0;
	char sub[] = "Hello world and universe!";
	char *sub1 = ft_strsub(sub, 0, 5);//Hello
	char *sub2 = ft_strsub(sub, 16, 9);//universe!
	if (ft_strcmp(sub1, "Hello") != 0 || ft_strcmp(sub2, "universe!") != 0)
		c = 1;
	//part 2
	char *sub3 = ft_strsub(sub, 5, 0);
	if (ft_strcmp(sub3, "") != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strsub   OK!");
	else
		ft_putendl("ft_strsub   KNOCK OUT!");
//*****		ft_strjoin		****************************************************
	c = 0;
	char *join1 = ft_strjoin("Hello ", "world!");
	char *join2 = ft_strjoin("Mickey", "");
	char *join3 = ft_strjoin("", "Mouse");
	char *join4 = ft_strjoin("", "");
	if (ft_strcmp(join1, "Hello world!") != 0)
		c = 1;
	if (ft_strcmp(join2, "Mickey") != 0)
		c = 1;
	if (ft_strcmp(join3, "Mouse") != 0)
		c = 1;
	if (ft_strcmp(join4, "") != 0)
		c = 1;
	//Part 2: One of the input is NULL
	//char *nulljoin;
	//char *join44 = ft_strjoin("Panthera uncia", nulljoin);
	//if (ft_strcmp(join44, "Panthera uncia") != 0)
	//	c = 1;
	//char *join55 = ft_strjoin(nulljoin, "Panthera uncia");
	//if (ft_strcmp(join55, "Panthera uncia") != 0)
	//	c = 1;
	if (c == 0)
		ft_putendl("ft_strjoin  OK!");
	else
		ft_putendl("ft_strjoin  KNOCK OUT!");
//*****		ft_strtrim		****************************************************
	c = 0;
	char trim1[] = "   Hello hello   ";
	char trim1b[] = "Hello hello";
	char trim2[] = "	Hello	world	\t\n";
	char trim2b[] = "Hello	world";
	char trim3[] = "Hive"; //return "Hive"
	char *trim1a = ft_strtrim(trim1);
	char *trim2a = ft_strtrim(trim2);
	char *trim3a = ft_strtrim(trim3);
	//ft_putendl(trim1a);
	//ft_putendl(trim2a);
	//ft_putendl(trim3a);
	if (ft_strcmp(trim1a, trim1b) != 0 || ft_strcmp(trim2a, trim2b) != 0\
		|| ft_strcmp(trim3, trim3a) != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strtrim  OK!");
	else
		ft_putendl("ft_strtrim  KNOCK OUT!");
//*****		ft_strsplit		****************************************************
	c = 0;
	char to_split[] = "***Hello***world*and**the whole**universe!***";
	char check1[] = "Hello";
	char check2[] = "world";
	char check3[] = "and";
	char check4[] = "the whole";
	char check5[] = "universe!";
	char **split_return = ft_strsplit(to_split, '*');
	if (ft_strcmp(check1, split_return[0]) != 0 ||\
		ft_strcmp(check2, split_return[1]) != 0 ||\
		ft_strcmp(check3, split_return[2]) != 0 ||\
		ft_strcmp(check4, split_return[3]) != 0 ||\
		ft_strcmp(check5, split_return[4]) != 0)
		c = 1;
	if (split_return[5] != NULL)
		c = 1;
	//char **split_return2 = ft_strsplit("", ' ');
	//if (split_return2 != NULL)
	//	c = 1;
	char **split_return3 = ft_strsplit("***Hive***", '*');
	if (ft_strcmp(split_return3[0], "Hive") != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_strsplit OK!");
	else
		ft_putendl("ft_strsplit  KNOCK OUT!");
//*****		ft_itoa			****************************************************
	c = 0;
	char *itoa1 = ft_itoa(-2147483648);
	char *itoa2 = ft_itoa(0);
	char *itoa3 = ft_itoa(-1);
	char *itoa4 = ft_itoa(1);
	if (ft_strcmp(itoa1, "-2147483648") != 0 ||\
		ft_strcmp(itoa2, "0") != 0 ||\
		ft_strcmp(itoa3, "-1") != 0 ||\
		ft_strcmp(itoa4, "1") != 0)
		c = 1;
	//printf("itoa1: %c \n", itoa1[11]);
	//printf("AAA: %c\n", itoa1[12);
	if (itoa1[11] != '\0' || itoa2[1] != '\0')
		c = 1;
	if (c == 0)
		ft_putendl("ft_itoa     OK!");
	else
		ft_putendl("ft_itoa      KNOCK OUT!");
//*****		ft_putnbr			****************************************************
	ft_putstr("ft_putnbr   (-2147483648): ");
	ft_putnbr(-2147483648);
	ft_putendl("\n\nBonus part: \n");
//*****		ft_lstnew		****************************************************
	c = 0;
	int content[] = {1, 2, 3, 4, 5};
	t_list *new = ft_lstnew(content, sizeof(int) * 5);
	int ii = 0;
	content[0] = 0;
	while (ii < 5)
	{
		if (((int*)new->content)[ii] != ii + 1)
			c = 1;
		ii++;
	}
	if (new->next != NULL || new->content_size != sizeof(content))
		c = 1;
	free(new);
	free(new->content);
	new = ft_lstnew(NULL, 99);
	if (new->content != NULL || new->next != NULL || new->content_size != 0)
		c = 1;
	free(new);
	new = ft_lstnew("", 1);
	if (memcmp(new->content, "", 1) != 0 || new->next != NULL ||\
		new->content_size != 1)
		c = 1;
	free(new->content);
	free(new);
	new = ft_lstnew("not this", 0);
	if (new->content != NULL || new->next != NULL || new->content_size != 0)
		c = 1;
	free(new);
	if (c == 0)
		ft_putendl("ft_lstnew    OK!");
	else
		ft_putendl("ft_lstnew    KNOCK OUT!");
//*****		ft_lstdelone	****************************************************
	c = 0;
	void	ft_del_tester(void *content, size_t size);
	int		content_delone[] = {1, 2, 3, 4, 5};
	t_list	*new_delone = ft_lstnew(content_delone, sizeof(int) * 5);
	t_list	*next_delone = ft_lstnew("42", sizeof(char) * 3);
	new_delone->next = next_delone;
	ft_lstdelone(&new_delone, ft_del_tester);
	if (new_delone != NULL)
	{
		c = 1;
		//ft_putendl("ERROR ft_lstdelone: new_delone != NULL");
	}
	if (next_delone == NULL)
	{
		c = 1;
		//ft_putendl("ERROR ft_lstdelone: next_delone == NULL");
	}
	ft_lstdelone(&next_delone, ft_del_tester);
	if (next_delone != NULL)
	{
		c = 1;
		//ft_putendl("ERROR ft_lstdelone: next_delone != NULL");
	}
	if (c == 0)
		ft_putendl("ft_lstdelone OK!");
	else
		ft_putendl("ft_lstdelone KNOCK OUT!");
//*****		ft_lstdel		****************************************************
	c = 0;
	t_list *bee = ft_lstnew("panthera tigris", sizeof(char) * 16);
	t_list *cee = ft_lstnew("panthera uncia", sizeof(char) * 15);
	t_list *dee = ft_lstnew("panthera leo", sizeof(char) * 13);
	t_list *eee = ft_lstnew("panthera onca", sizeof(char) * 14);
	t_list *fee = ft_lstnew("panthera pardus", sizeof(char) * 16);
	bee->next = cee;
	cee->next = dee;
	dee->next = eee;
	eee->next = fee;
	ft_lstdel(&bee, ft_del_tester);
	if (bee != NULL)
		c = 1;
	if (c == 0)
		ft_putendl("ft_lstdel    OK!");
	else
		ft_putendl("ft_lstdel    KNOCK OUT!");
//*****		ft_lstadd		****************************************************
	c = 0;
	t_list *lista = ft_lstnew("Panthera Uncia", sizeof(char) * 15);
	ft_lstadd(&lista, ft_lstnew("Panthera Onca", sizeof(char) * 14));
	ft_lstadd(&lista, ft_lstnew("Panthera Pardus", sizeof(char) * 16));
	if (ft_strcmp(lista->content, "Panthera Pardus") != 0)
		c = 1;
	if (ft_strcmp(lista->next->content, "Panthera Onca") != 0)
		c = 1;
	if (ft_strcmp(lista->next->next->content, "Panthera Uncia") != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_lstadd    OK!");
	else
		ft_putendl("ft_lstadd    KNOCK OUT!");
//*****		ft_lstiter		****************************************************
	c = 0;
	void	ft_lstiter_tester(t_list *elem);
	ft_lstiter(lista, ft_lstiter_tester);
	if (ft_strcmp(lista->content, "Bonus sector!") != 0)
		c = 1;
	if (ft_strcmp(lista->next->content, "Bonus sector!") != 0)
		c = 1;
	if (ft_strcmp(lista->next->next->content, "Bonus sector!") != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_lstiter   OK!");
	else
		ft_putendl("ft_lstiter   KNOCK OUT!");
//*****		ft_lstmap		****************************************************
	c = 0;
	t_list 	*ft_lstmap_tester(t_list *elem);
	t_list	*listb;
	listb = ft_lstmap(lista, ft_lstmap_tester);
	if (ft_strcmp(listb->content, "Test passed!") != 0)
		c = 1;
	if (ft_strcmp(listb->next->content, "Test passed!") != 0)
		c = 1;
	if (ft_strcmp(listb->next->next->content, "Test passed!") != 0)
		c = 1;
	if (c == 0)
		ft_putendl("ft_lstmap    OK!");
	else
		ft_putendl("ft_lstmap    KNOCK OUT!");
//*****		Defend ft_strcmp and ft_strncmp		********************************

	//char bug1[] = "AABB";
	//char bug2[] = "AABG";
	//ft_putstr("\n");
	//ft_putendl("Inputs are strings: ");
	//printf("\nft_strcmp: %i\nstrcmp: %i\n", ft_strcmp("AABB", "AABG"), strcmp("AABB", "AABG"));
	//printf("ft_str'n'cmp: %i\nstrcmp: %i\n\n", ft_strncmp("AABB", "AABG", 4), strncmp("AABB", "AABG", 4));
	//ft_putendl("Input are char arrays: ");
	//printf("\nft_strcmp: %i\nstrcmp: %i\n", ft_strcmp(bug1, bug2), strcmp(bug1, bug2));
	//printf("ft_str'n'cmp: %i\nstrcmp: %i\n", ft_strncmp(bug1, bug2, 4), strncmp(bug1, bug2, 4));



//*****		Double tests		************************************************



//char *word = "Hello four and what ever";
//word++;
//word++;
//printf("Ft_countwords(5): %i\n", ft_countwords("  one two tree four five   "));
//printf("Ft_wordlen(3): %zu\n", ft_wordlen(word));



//*****		End of tests		************************************************
 
	ft_putstr("\n");
	return (0);
}


void	ft_striter_tester(char *s)
	{
			*s = 'X';
	}
void	ft_striteri_tester(unsigned int i, char *s)
	{
		i = 0;
		*s = 'X';
	}
char 	ft_strmap_tester(char c)
	{
		(void)c;
		return ('X');
	}
char	ft_strmapi_tester(unsigned int i, char c)
	{
		(void)i;
		(void)c;
		return ('X');
	}
void	ft_del_tester(void *content, size_t size)
	{
		if (size != 0)
			free(content);
	}
void	ft_lstiter_tester(t_list *elem)
	{
		elem->content = "Bonus sector!";
	}
t_list 	*ft_lstmap_tester(t_list *elem)
	{
		t_list *new = ft_lstnew(elem->content, elem->content_size);
		if (new != NULL)
			new->content = "Test passed!";
		return (new);
	}

