#include "test.h"
#include "libft.h"

void	ft_substr_test(void)
{
    int test = 1;
    
    const char      *src = "42 Wolfsburg";
    char            *sub;

	printf("\n\033[1;33mft_substr.c\033[0m\n");

    // Test 1
    sub = ft_substr(src, 3, 9); // basic input
    if (strncmp(sub, "Wolfsburg", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(sub);
    test++;

    // Test 2
    sub = ft_substr(src, 20, 9); // start is greater than src
    if (strncmp(sub, "", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(sub);
    test++;

    // Test 3
    sub = ft_substr("", 0, 1); // empty str
    if (strncmp(sub, "", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(sub);
    test++;

    // Test 4
    sub = ft_substr(src, 3, 20); // len is greater than &src[start]
    if (strncmp(sub, "Wolfsburg", strlen(sub)) == 0)
    	test_successful(test);
	else
		test_failed(test);
    free(sub);
}

// #include "libft.h"
// #include <stdio.h>

// int main(void)
// {
//     const char      *s = "42 Wolfsburg"; // basic input -> "Wolfsburg"
//     unsigned int    start = 3;
//     size_t          len = 9;
//     char            *sub = ft_substr(s, start, len);

//     printf("String: %s\nSubstring: %s\n", s, sub);
//     free(sub);
// }