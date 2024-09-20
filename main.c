/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:24:16 by nquecedo          #+#    #+#             */
/*   Updated: 2024/09/20 17:46:04 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_init_stack(int argc, char **argv, t_stack *a)
{
	int	i;

	if (!a)
		return (-1);
	i = 0;
	a->prev = NULL;
	while (i < argc - 1)
	{
		a->value = atol(argv[i]);
		a->index = i - 1;
		if (i < argc - 2)
		{
			a->next = (t_stack *)malloc(1 * sizeof(t_stack));
			if (!a->next || ft_check_max_min_int(a->value))
				return (ft_free_stack(a), -1);
			a->next->prev = a;
			a = a->next;
		}
		else
			a->next = NULL;
		i++;
	}
	return (0);
}

void	ft_print_stack(t_stack *a)
{
	if (a == NULL)
		return ;
	while (a)
	{
		printf("valor: %li, inice: %i\n", a->value, a->index);
		a = a->next;
	}
}

int	ft_argv_len(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	i++;
	return (i);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		free_argv;

	free_argv = 0;
	argv++;
	if (argc == 2 && ft_strchr(argv[0], ' '))
	{
		argv = ft_split(argv[0], ' ');
		argc = ft_argv_len(argv);
		free_argv++;
	}
	if (ft_check_args(argc, argv))
	{
		if (free_argv)
			ft_free_split(argv);
		return (ft_printf("Error\n"), -1);
	}
	a = (t_stack *)malloc(1 * sizeof(t_stack));
	b = NULL;
	if (ft_init_stack(argc, argv, a) || !ft_is_order(a))
		return (ft_free_stack(a), 0);
	ft_give_index(&a);
	if (!ft_ez_short(&a, &b))
		ft_radix(&a, &b);
	// ft_printf("=======\n");
	// ft_print_stack(a);
	if (free_argv)
		ft_free_split(argv);
	return (ft_free_stack(a), ft_free_stack(b), 0);
}
