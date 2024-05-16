/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:51:26 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/15 11:19:57 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t ft_listlen(t_stak *a)
{
	size_t i;
	t_stak *temp;

	temp = a;
	i = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	ft_is_allnum(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]) && str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}

int ft_is_shoted(t_stak *a)
{
	t_stak	*temp;

	temp = a;
	while (temp->next != NULL)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int ft_is_repeat(t_stak *a)
{
	t_stak	*temp;
	t_stak	*temp2;

	temp = a;
	while (temp->next != NULL)
	{
		temp2 = temp->next;
		while (temp2 != NULL)
		{
			if (temp->value == temp2->value)
				return (1);
			temp2 = temp2->next;
		}
		temp = temp->next;
	}
	return (0);
}

void	ft_print_list(t_stak *a)
{
	t_stak	*temp;

	temp = a;
	while (temp != NULL)
	{
		ft_printf("%i\n", temp->value);
		temp = temp->next;
	}
}