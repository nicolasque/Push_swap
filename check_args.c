/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 09:35:53 by nquecedo          #+#    #+#             */
/*   Updated: 2024/10/18 14:27:00 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//If there is a leter in the args rturns 1
int	ft_is_all_num(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (!ft_isdigit(str[i]) || i > 11)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_repeat(int argc, char **argv, char *str, int list_position)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (i == list_position)
			return (0);
		else
		{
			if (!ft_strncmp(str, argv[i], \
			(ft_strlen(str) + ft_strlen(argv[i]))))
			{
				printf("actual: %s, compare: %s\n", str, argv[i]);
				return (-1);
			}
		}
		i ++;
	}
	return (0);
}

int	ft_check_args(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (-1);
	i = 0;
	while (i < argc - 1)
	{
		if (!ft_is_all_num(argv[i]))
		{
			return (-1);
		}
		if (ft_is_repeat(argc, argv, argv[i], i))
		{
			return (-2);
		}
		i++;
	}
	return (0);
}

int	ft_is_order(t_stack *a)
{
	while (a->next)
	{
		if (a->value >= a->next->value)
			return (-1);
		a = a->next;
	}
	return (0);
}

int	ft_check_max_min_int(long nbr)
{
	if (nbr > INT_MAX || nbr < INT_MIN)
		return (1);
	return (0);
}
