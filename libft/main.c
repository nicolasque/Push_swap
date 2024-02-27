/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:50:44 by nquecedo          #+#    #+#             */
/*   Updated: 2024/02/04 18:27:47 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

void test_ft_split() {
    char *str = "Hello World This Is A Test";
    char delimiter = ' ';

    // Llamada a la función
    char **result = ft_split(str, delimiter);

    // Comprobaciones
    assert(strcmp(result[0], "Hello") == 0); // Cambia esto
    assert(strcmp(result[1], "World") == 0); // Cambia esto
    // Haz lo mismo para las demás comprobaciones

    printf("All tests passed for ft_split\n");
}

void test_ft_substr() {
	char *str = "Hello World This Is A Test";
	unsigned int start = 6;
	size_t len = 5;

	// Llamada a la función
	char *result = ft_substr(str, start, len);

	// Comprobaciones
	assert(strcmp(result, "World") == 0);

	printf("All tests passed for ft_substr\n");
}

void test_ft_isalnum() {
	// Llamada a la función y comprobaciones
	assert(ft_isalnum('a') == 1);
	assert(ft_isalnum('Z') == 1);
	assert(ft_isalnum('5') == 1);
	assert(ft_isalnum('!') == 0);

	printf("All tests passed for ft_isalnum\n");
}
char ft_toupper_wrapper(unsigned int i, char c) {
	return ft_toupper(c);
}

void test_ft_strmapi() {
	char *str = "hello";

	// Llamada a la función
	char *result = ft_strmapi(str, ft_toupper_wrapper);

	// Comprobaciones
	assert(strcmp(result, "HELLO") == 0);

	printf("All tests passed for ft_strmapi\n");
}

void test_ft_strtrim() {
	char *str1 = "   Hello World   ";
	char *set1 = " ";
	char *str2 = "Hello World";
	char *set2 = "Hd";
	char *str3 = "Hello World";
	char *set3 = "z";

	// Llamada a la función y comprobaciones
	assert(strcmp(ft_strtrim(str1, set1), "Hello World") == 0);
	assert(strcmp(ft_strtrim(str2, set2), "ello Worl") == 0);
	assert(strcmp(ft_strtrim(str3, set3), "Hello World") == 0);

	printf("All tests passed for ft_strtrim\n");
}

int main() {

	ft_printf("hola mundo");

	return 0;
}