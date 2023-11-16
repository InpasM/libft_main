/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msapin <msapin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:36:17 by msapin            #+#    #+#             */
/*   Updated: 2023/11/16 13:14:45 by msapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

char	ft_test_strmapi(unsigned int n, char c)
{
	(void)n;
	(void)c;
	return(c);
}

void	ft_test_striteri(unsigned int n, char *c)
{
	(void)n;

	*c = 'a';
	printf("%c|", *c);
}

int main()
{

	// //////////////////////////////////////////////////////////// TESTS ft_striteri
	// char	str_toupper[] = "avant ft_toupper";
	
	// printf("str_toupper avant :\n%s\n", str_toupper);
	// ft_striteri(str_toupper, ft_test_striteri);
	// printf("\nPuis apres :\n%s\n\n", str_toupper);


	// // //////////////////////////////////////////////////////////// TESTS ft_strmapi
	// char	*s = "avant ft_toupper";
	// char	*s_after;
	
	// s_after = ft_strmapi(s, ft_test_strmapi);
	// printf("s avant :\n%s\nPuis apres :\n%s", s, s_after);


	// //////////////////////////////////////////////////////////// TESTS ft_itoa
	// printf("|%s|\n", ft_itoa(0));
	// printf("|%s|\n", ft_itoa(9));
	// printf("|%s|\n", ft_itoa(-9));
	// printf("|%s|\n", ft_itoa(10));
	// printf("|%s|\n", ft_itoa(-10));
	// printf("|%s|\n", ft_itoa(8124));
	// printf("|%s|\n", ft_itoa(-9874));
	// printf("|%s|\n", ft_itoa(543000));
	// printf("|%s|\n", ft_itoa(-2147483648LL));
	// printf("|%s|\n", ft_itoa(2147483647));


	// //////////////////////////////////////////////////////////// TESTS ft_split
	// //char	*s1 = "lorem ipsum dolor sit amet";
	// char	*s1 = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse";
	// char	c = ' ';
	// char	**tab;
	// size_t	i = 0;
	// tab = ft_split(s1, c);
	// while (tab[i])
	// {
	// 	printf("%s\n", tab[i]);
	// 	i++;
	// }


	// //////////////////////////////////////////////////////////////TESTS ft_strtrim
	// //char	*s1 = "lorem ipsum dolor sit amet";
	// char	*s1 = "lorem ipsum dolor sit amet";
	// //char	*s1 = "          ";
	// char	*set = " lote";
	// printf("ft_strtrim:\n%s", ft_strtrim(s1, set));


	// //////////////////////////////////////////////////////////// TESTS ft_strjoin
	// char	*s1 = "Debut de phrase ";
	// char	*s2 = "et fin de phrase";
	// printf("%s", ft_strjoin(s1, s2));


	// //////////////////////////////////////////////////////////////TESTS ft_substr
	// char	str[] = "lorem ipsum dolor sit amet";
	// char	*strsub;
	// int		arg;

	// char *bullshit;
	// if (!(strsub = ft_substr(str, 400, 20)))
	// 	printf("NULL");
	// else
	// {
	// 	bullshit = (char *)&strsub[30];
	// 	bullshit = "FULL BULLSHIT";
	// 	if (strsub)
	// 		printf("%s", strsub);
	// 	else
	// 		printf("rip");
	// }
	// if (str == strsub)
	// 	printf("\nA new string was not returned");
	// (void)bullshit;


	// //////////////////////////////////////////////////////////// TESTS ft_putnbr_fd
	// ft_putnbr_fd(-2147483648LL, 2);

	// //////////////////////////////////////////////////////////// TESTS ft_putstr_fd
	// ft_putendl_fd("Test de phrase avec retour a la ligne", 0);
	
	// //////////////////////////////////////////////////////////// TESTS ft_putstr_fd
	// ft_putstr_fd("Test de phrase", 0);

	// //////////////////////////////////////////////////////////// TESTS ft_putchar_fd
	// ft_putchar_fd('c', 0);


	// //////////////////////////////////////////////////////////// TESTS ft_strdup et strdup
	// char	*strdup_str = "Phrase a copier";
	// printf("ft_strdup :\n%s", ft_strdup(strdup_str));


	// //////////////////////////////////////////////////////////// TESTS ft_calloc et calloc
	// int calloc_count = 30;
	// int calloc_size = 1;
	// printf("calloc :\n%d\n\n", (int)calloc(calloc_count, calloc_size));
	// printf("ft_calloc :\n%d", (int)ft_calloc(calloc_count, calloc_size));


	// //////////////////////////////////////////////////////////// TESTS ft_atoi et atoi
	// char    atoi_str[60] = "     \n\t\v\f\r    -01234567890.7151a";
	// printf("String avant atoi : %s\n", atoi_str);
	// printf("String apres atoi : %d\n", atoi(atoi_str));

	// printf("String avant ft_atoi : %s\n", atoi_str);
	// printf("String apres ft_atoi : %d\n", ft_atoi(atoi_str));


	// //////////////////////////////////////////////////////////// TESTS ft_strnstr et strnstr
	// char    *strnstr_haystack = "Phrase dans laquelle chercher";
	// char    *strnstr_needle = "laqu";
	// size_t strnstr_len = 20;
	// printf("%s\n", strnstr(strnstr_haystack, strnstr_needle, strnstr_len));
	// printf("%s\n", ft_strnstr(strnstr_haystack, strnstr_needle, strnstr_len));


	// //////////////////////////////////////////////////////////// TESTS ft_memcmp et memcmp
	// char    *memcmp_s1 = "abcdefg";
	// char    *memcmp_s2 = "aBCDEFG";
	// size_t  memcmp_n = 10;

	// printf("memcmp :\n%s vs %s = %d\n", memcmp_s1, memcmp_s2, memcmp(memcmp_s1, memcmp_s2, memcmp_n));
	// printf("ft_memcmp :\n%s vs %s = %d\n", memcmp_s1, memcmp_s2, ft_memcmp(memcmp_s1, memcmp_s2, memcmp_n));


	// //////////////////////////////////////////////////////////// TESTS ft_memchr et memchr
	// //char    s[] = "Phr\0ase dans laquelle chercher";
	// char    tab[7] = {-49, 49, 1, -1, 0, -2, 2};
	// int c = -5;
	// int n = 7;
	// printf("memchr :\n%s\n", (char *)memchr(tab, -1, 7));
	// printf("ft_memchr :\n%s\n", (char *)ft_memchr(tab, -1, 7));


	// //////////////////////////////////////////////////////////// TESTS ft_strncmp et strncmp
	// char    *strncmp_s1 = "ab\ncdefg";
	// char    *strncmp_s2 = "abcdefgh";
	// char    *strncmp_s1 = "test\200";
	// char    *strncmp_s2 = "test\0";

	// size_t  n = 6;

	// printf("strncmp :\n%s vs %s = %d\n", strncmp_s1, strncmp_s2, strncmp(strncmp_s1, strncmp_s2, n));
	// printf("ft_strncmp :\n%s vs %s = %d\n", strncmp_s1, strncmp_s2, ft_strncmp(strncmp_s1, strncmp_s2, n));
	

	// //////////////////////////////////////////////////////////// TESTS ft_strlcat et strlcat
	// char    dst[100] = "Debut de ";
	// //char    src[] = "phrase fin de phrase";
	
	// //char    dst[11] = "a";
	// char    src[] = "lorem";

	// size_t dstsize = 15;
	// printf("Avant strlcat\ndst = %s, src = %s, dstsize = %zu\n", dst, src, dstsize);
	// size_t return_value = strlcat(dst, src, dstsize);
	// printf("Apres strlcat\ndst = %s, src = %s, dstsize = %zu, return value = %lu\n\n", dst, src, dstsize, return_value);

	// char    ft_dst[11] = "a";
	// printf("Avant ft_strlcat\ndst = %s, src = %s, dstsize = %zu\n", ft_dst, src, dstsize);
	// size_t return_value = ft_strlcat(ft_dst, src, dstsize);
	// printf("Apres ft_strlcat\ndst = %s, src = %s, dstsize = %zu, return value = %lu\n", ft_dst, src, dstsize, return_value);

	// char	dest[11] = "a";
	// printf("%zu", ft_strlcat(dest, "lorem", 15));
	// write(1, "\n", 1);
	// write(1, dest, 15);


	// //////////////////////////////////////////////////////////// TESTS ft_strlcpy et strlcpy
	// char    dst[100] = "Destination";
	// char    src[] = "Remplacement";
	// size_t dstsize = 10;
	// printf("Avant strlcpy\ndst = %s, src = %s, dstsize = %zu\n", dst, src, dstsize);
	// strlcpy(dst, src, dstsize);
	// printf("Apres strlcpy\ndst = %s, src = %s, dstsize = %zu, return value = %lu\n\n", dst, src, dstsize, strlcpy(dst, src, dstsize));

	// char    ft_dst[100] = "Destination";
	// printf("Avant ft_strlcpy\ndst = %s, src = %s, dstsize = %zu\n", ft_dst, src, dstsize);
	// ft_strlcpy(ft_dst, src, dstsize);
	// printf("Apres ft_strlcpy\ndst = %s, src = %s, dstsize = %zu, return value = %lu\n", ft_dst, src, dstsize, ft_strlcpy(ft_dst, src, dstsize));
	

	// //////////////////////////////////////////////////////////// TESTS ft_memcpy et memcpy et ft_memmove et memmove
	// char    mem_src[100] = "lorem ipsum dolor sit amet";
	// char    ft_mem_src[100] = "lorem ipsum dolor sit amet";
	// char    dst_ft_cpy[10];
	// char    dst_cpy[10];
	// char    *dst_move = mem_src + 1;
	// char    *ft_dst_move = ft_mem_src + 1;

	// size_t n = 10;
	// printf("String de base avant changements : %s\n\n", "123456789");
	// printf("Return value ft_memcpy : %s\n", ft_memcpy(dst_ft_cpy, mem_src, n));
	// printf("Dst apres ft_memcpy : %s\n\n", dst_ft_cpy);

	// //printf("Dst avant memcpy : %s\n", dst_cpy);
	// printf("Return value memcpy : %s\n", memcpy(dst_cpy, mem_src, n));
	// printf("Dst apres memcpy : %s\n\n", dst_cpy);
	
	// printf("Dst avant memmove : %s\n", dst_move);
	// printf("Return value memmove : %s\n", memmove(dst_move, "con\0sec\0\0te\0tur", n));
	// printf("Dst apres memmove : %s\n\n", dst_move);

	// //printf("Dst avant ft_memmove : %s\n", ft_dst_move);
	// printf("\nReturn value ft_memmove : %s\n", ft_memmove(ft_dst_move, "con\0sec\0\0te\0tur", 10));
	// //printf("Dst apres ft_memmove : %s\n\n", ft_dst_move);


	// //////////////////////////////////////////////////////////// TESTS ft_memmove
	// char	src[] = "lorem ipsum dolor sit amet";
	// char	ft_src[] = "lorem ipsum dolor sit amet";
	// char	*dest;
	// char	*ft_dest;
	// int		arg;
	// dest = src + 1;
	// ft_dest = ft_src + 1;
	// printf("memmove:\n");
	// if (dest != memmove(dest, src, 8))
	// 	write(1, "dest's adress was not returned\n", 31);
	// write(1, dest, 22);

	// printf("\n\nft_memmove:\n");
	// if (ft_dest != ft_memmove(ft_dest, ft_src, 8))
	// 	write(1, "dest's adress was not returned\n", 31);
	// //printf("\n");
	// write(1, ft_dest, 22);
	
	// printf("memmove:\n");
	// if (dest != memmove(dest, "con\0sec\0\0te\0tur", 10))
	// 	write(1, "dest's adress was not returned\n", 31);
	// write(1, dest, 22);

	// printf("\n\nft_memmove:\n");
	// if (ft_dest != ft_memmove(ft_dest, "con\0sec\0\0te\0tur", 10))
	// 	write(1, "dest's adress was not returned\n", 31);
	// write(1, ft_dest, 22);


	// //////////////////////////////////////////////////////////// TESTS ft_bzero et bzero
	// char    s[10] = "123456789";
	// char    ft_s[10] = "123456789";
	// size_t len = 2;
	// unsigned long int i = 0;
	// printf("La string de base avant bzero : %s\n", s);
	// bzero(s, len);
	// printf("Puis apres bzero : ");
	// while (i < sizeof(s))
	// {
	//     printf("%c", s[i]);
	//     i++;
	// }

	// i = 0;
	// printf("\n\nLa string de base avant ft_bzero : %s\n", ft_s);
	// ft_bzero(ft_s, len);
	// printf("Puis apres ft_bzero : ");
	// while (i < sizeof(ft_s))
	// {
	//     printf("%c", ft_s[i]);
	//     i++;
	// }


	// //////////////////////////////////////////////////////////// TESTS ft_memset et memset
	// char    s[100] = "Phrase dans laquelle ajouter";
	// char    ft_s[100] = "Phrase dans laquelle ajouter";
	// int c = 'e';
	// size_t len = 20;
	// printf("%s\n", memset(s, c, len));
	// printf("%s\n", ft_memset(ft_s, c, len));


	// //////////////////////////////////////////////////////////// TESTS ft_strrchr et strrchr
	// char    s[] = "bonjour phrase dans laquelle chercher";
	// int c = 'b';
	// printf("%s\n", strrchr(s, c));
	// printf("%s\n", ft_strrchr(s, c));


	// //////////////////////////////////////////////////////////// TESTS ft_strchr et strchr
	// //char    s[] = "Phrase dans laquelle chercher";
	// char    s[] = "bonjour";
	// int c = '\0';
	// printf("%s\n", strchr(s, c));
	// printf("%s\n", ft_strchr(s, c));


	// //////////////////////////////////////////////////////////// TESTS ft_tolower et tolower
	// char    text[] = "abHDEJsjbdejqDUEJdeg";
	// int i = 0;
	// printf("Texte avant tolower : %s\nTexte apres tolower : ", text);
	// while (text[i] != '\0')
	// {
	//     printf("%c", tolower(text[i]));
	//     i++;
	// }
	// char    ft_text[] = "abHDEJsjbdejqDUEJdeg";
	// i = 0;
	// printf("\nTexte avant ft_tolower : %s\nTexte apres ft_tolower : ", text);
	// while (text[i] != '\0')
	// {
	//     printf("%c", ft_tolower(text[i]));
	//     i++;
	// }


	// //////////////////////////////////////////////////////////// TESTS ft_toupper et toupper
	// char    text[] = "abHDEJsjbdejqDUEJdeg";
	// int i = 0;
	// printf("Texte avant toupper : %s\nTexte apres toupper : ", text);
	// while (text[i] != '\0')
	// {
	//     printf("%c", toupper(text[i]));
	//     i++;
	// }
	// char    ft_text[] = "abHDEJsjbdejqDUEJdeg";
	// i = 0;
	// printf("\nTexte avant ft_toupper : %s\nTexte apres ft_toupper : ", text);
	// while (text[i] != '\0')
	// {
	//     printf("%c", ft_toupper(text[i]));
	//     i++;
	// }


	// //////////////////////////////////////////////////////////// TESTS ft_strlen et strlen
	// char    s[] = "abcdefghijklmnopqrstuvwxyz";
	// printf("Tests ft_strlen :\n%s contient %zu characters\n\n", s, ft_strlen(s));
	// printf("Tests strlen :\n%s contient %zu characters", s, strlen(s));


	// //////////////////////////////////////////////////////////// TESTS ft_isprint et isprint
	// int i = 0;
	// int count_non = 0;
	// char    characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=.,/;:'\"[{}]æøå\b`~\0";
	
	// printf("Tests ft_isprint :\n");
	// while (characters[i] != '\0') 
	// {
	//     if (ft_isprint(characters[i]) == '\0')
	//     {
	//         printf("%c, ", characters[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Ne sont pas des characters imprimable. Il y en a %d au total\n", count_non);
	// printf("\nTests isprint :\n");
	// i = 0;
	// count_non = 0;
	// while (characters[i] != '\0')
	// {
	//     if (isprint(characters[i]) == '\0')
	//     {
	//         printf("%c, ", characters[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Ne sont pas des characters imprimable. Il y en a %d au total\n", count_non);


	// //////////////////////////////////////////////////////////// TESTS ft_isascii et isascii
	// int i = 0;
	// int count_non = 0;
	// char    characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=.,/;:'\"[{}]æøå\b`~\0";
	
	// printf("Tests ft_isascii :\n");
	// while (characters[i] != '\0') 
	// {
	//     if (ft_isascii(characters[i]) == '\0')
	//     {
	//         printf("%c, ", characters[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Ne sont pas des characters ascii. Il y en a %d au total\n", count_non);
	// printf("\nTests isascii :\n");
	// i = 0;
	// count_non = 0;
	// while (characters[i] != '\0')
	// {
	//     if (isascii(characters[i]) == '\0')
	//     {
	//         printf("%c, ", characters[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Ne sont pas des characters ascii. Il y en a %d au total\n", count_non);


	// //////////////////////////////////////////////////////////// TESTS ft_isalnum et isalnum
	// int i = 0;
	// int count_non = 0;
	// char    characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=.,/;:'\"[{}]";
	

	// //////////////////////////////////////////////////////////// loop ft_isalnum
	// printf("Tests ft_isalnum :\n");
	// while (characters[i] != '\0') 
	// {
	//     if (ft_isalnum(characters[i]) == '\0')
	//     {
	//         printf("%c, ", characters[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Ne sont pas des characters alphanumerique. Il y en a %d au total\n", count_non);
	//  // loop isalnum
	// printf("\nTests isalnum :\n");
	// i = 0;
	// count_non = 0;
	// while (characters[i] != '\0')
	// {
	//     if (isalnum(characters[i]) == '\0')
	//     {
	//         printf("%c, ", characters[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Ne sont pas des characters alphanumerique. Il y en a %d au total\n", count_non);


	// //////////////////////////////////////////////////////////// TESTS ft_isdigit et isdigit
	// int i = 0;
	// int count_non = 0;
	// char    numbers[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=.,/;:'\"[{}]";
	// //char    alphabet[] = "";
	
	// // loop ft_isdigit
	// printf("Tests ft_isdigit :\n");
	// while (numbers[i] != '\0') 
	// {
	//     if (ft_isdigit(numbers[i]) == '\0')
	//     {
	//         printf("%c n'est pas un chiffre\n", numbers[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Il y a %d characters non digitaux\n", count_non);
	//  // loop isdigit
	// printf("\nTests isdigit :\n");
	// i = 0;
	// count_non = 0;
	// while (numbers[i] != '\0')
	// {
	//     if (isdigit(numbers[i]) == '\0')
	//     {
	//         printf("%c n'est pas un chiffre\n", numbers[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Il y a %d characters non digitaux\n", count_non);


	// //////////////////////////////////////////////////////////// TESTS ft_isalpha et isalpha
	// int i = 0;
	// int count_non = 0;
	// char    alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_-+=.,/;:'\"[{}]0123456789";
	// //char    alphabet[] = "";
	
	// //////////////////////////////////////////////////////////// loop ft_isalpha
	// printf("Tests ft_isalpha :\n");
	// while (alphabet[i] != '\0') 
	// {
	//     if (ft_isalpha(alphabet[i]) == '\0')
	//     {
	//         printf("%c n'est pas une lettre\n", alphabet[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Il y a %d characters non alphabetique\n", count_non);
	//  //////////////////////////////////////////////////////////// loop isalpha
	// printf("\nTests isalpha :\n");
	// i = 0;
	// count_non = 0;
	// while (alphabet[i] != '\0')
	// {
	//     if (isalpha(alphabet[i]) == '\0')
	//     {
	//         printf("%c n'est pas une lettre\n", alphabet[i]);
	//         count_non++;
	//     }
	//     i++;
	// }
	// printf("Il y a %d characters non alphabetique\n", count_non);
	
	return 0;
}