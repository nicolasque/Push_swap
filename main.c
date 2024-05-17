/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 20:07:40 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/17 18:06:27 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

//If there is a leter in the args rturns 1
int ft_is_all_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int ft_is_repeat(int argc, char** argv, char *str, int list_position)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (i == list_position)
			return (0);
		else
		{
			if (!ft_strncmp(str, argv[i], 11))
				return (-1);
		}
		i ++;
	}
	return (0);
}


int	ft_check_args(int argc, char **argv)
{
	int i;

	if (!a)
		return (-1);
	i = 1;
	a->prev = NULL;
	while (i < argc)
	{
		a->value = atol(argv[i]);
		a->li_pos = i - 1;
		a->next = (t_stak *)malloc(1 * sizeof(t_stak));
		if (!a->next)
			return (ft_free_stack(a) ,-1);
		a->next->prev = a;
		a = a->next;
		i++;
	}
	a->next = NULL;
	return (0);
}

void	ft_print_stack(t_stak *a)
{
	while (a->next)
	{
		printf("El valor es: %i, y la posicion es: %i\n", a->value, a->li_pos);
		a = a->next;
	}
}

void	ft_print_revese(t_stak *a)
{
	while (a->prev)
	{
		printf("El valor es: %i, y la posicion es: %i\n", a->value, a->li_pos);
		a = a->prev;
	}
}

int main(int argc, char **argv)
{
	t_stak  *a;
	// t_stak  **b;

	if (ft_check_args(argc, argv))
		return (ft_printf("Error\n"), -1);
	a = (t_stak *)malloc(1 * sizeof(t_stak));
	if (ft_init_stack(argc, argv, a))
		return (-1);
	if (!ft_is_order(a))
		return (ft_free_stack(a), 0); //If the stak is ordered you do nothing (TODO: FREE THE MEMORY)

	ft_print_stack(a);
	// ft_printf("aaaaa\n");
	// ft_print_stack(a);
	ft_printf("Largo de la lista: %i \n", ft_list_len(a));

	return (0);

}