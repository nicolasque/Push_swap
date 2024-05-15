/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 19:04:14 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/15 10:03:01 by codespace        ###   ########.fr       */
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
	return 0; // Return 0 on success
}

int	main(int argc, char **argv)
{
	t_stak	*a;

	if (argc < 2)
		return (0);
	if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv++;
	a = (t_stak *)malloc(sizeof(t_stak) * 1);
	if (ft_init_stakt(&a, argv) == -1)
		return(ft_free_list(a), -1);

	ft_printf("Cuantos nodos hay en la lista: %i", ft_listlen(a));
	ft_free_list(a);
}
