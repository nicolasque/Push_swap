/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 10:08:19 by nquecedo         #+#    #+#             */
/*   Updated: 2024/05/15 10:08:20 by nquecedo        ###   ########.fr       */
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

	if (argc < 2)
		return (-1);
	i = 1;
	while (i < argc)
	{
		if (!ft_is_all_num(argv[i]))
			return (-1);
		if (ft_is_repeat(argc, argv, argv[i], i))
			return (-2);
		i++;
	}
	
	return (0);
}


// t_stak  *ft_init_stack(t_stak *a, char **argv)
// {
	
// }

int main(int argc, char **argv)
{
	// t_stak  **a;
	// t_stak  **b;

	ft_printf("La respuesta es: %d",ft_check_args(argc, argv));
	return (0);

}