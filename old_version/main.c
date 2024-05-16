/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:04:14 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/16 08:04:17 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

int	ft_init_stakt(t_stak **a ,char **argv)
{
	int	i;
	t_stak	*temp;
	t_stak	*last;

	i = 0;
	last = NULL;
	while (argv[i])
	{
		temp = malloc(1 * sizeof(t_stak));
		if (temp == NULL || !ft_is_allnum(argv[i]))
			return (ft_printf("Error\n"), -1);
		temp->value = ft_atol(argv[i]);
		temp->next = NULL;
		temp->prev = last;
		if (last != NULL)
			last->next = temp;
		else
			*a = temp; 
		last = temp;
		i++;
	}
	if (i == 1)
		return (-1); // Return -1 if is only onenumber on the list
	return 0; // Return 0 on success
}

int ft_check_list(t_stak *a)
{
	if (ft_is_shoted(a))	
		return(ft_printf("Esta ordebado") , -1);
	if (ft_is_repeat(a))
		return (ft_printf("Hay repetidos\n") , -1);

	ft_printf("No esta ordenado\n");
	return (0);
}

t_stak	*ft_get_smaller_node(t_stak *a)
{
	t_stak	*temp;
	t_stak	*smaller;

	temp = a;
	smaller = a;
	while (temp)
	{
		if (temp->value < smaller->value)
			smaller = temp;
		temp = temp->next;
	}
	return (smaller);
}


int	main(int argc, char **argv)
{
	t_stak	*a;
	t_stak	*smaller;

	if (argc < 2)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	a = (t_stak *)malloc(sizeof(t_stak) * 1);
	if (ft_init_stakt(&a, argv) == -1 || ft_check_list(a) == -1)
		return(ft_free_list(a),ft_printf("\nPrograma para \n") , -1);
	smaller = ft_get_smaller_node(a);
	if (ft_listlen(a) <= 5)
		ft_ez_case(a);
	ft_print_list(smaller);
	ft_free_list(a);
	return (0);
}