/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:32:38 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/27 09:43:11 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_list_len(t_stack *a)
{
	int	i;

	i = 0;
	while (a)
	{
		a = a->next;
		i++;
	}
	return (i);
}

t_stack	*ft_get_last_node(t_stack *a)
{
	while (a->next)
	{
		a = a->next;
	}
	return (a);
}

t_stack	*ft_get_max_node(t_stack *a)
{
	t_stack	*max_node;

	max_node = a;
	while (a)
	{
		if (max_node->value < a->value)
		{
			max_node = a;
		}
		a = a->next;
	}
	return (max_node);
}

t_stack	*ft_get_min_node(t_stack *a)
{
	t_stack	*min_node;

	min_node = a;
	while (a)
	{
		if (min_node->value > a->value)
		{
			min_node = a;
		}
		a = a->next;
	}
	return (min_node);
}

void	ft_give_index(t_stack **a)
{
	t_stack	*temp;
	t_stack	*iter;
	int		i;

	temp = *a;
	while (temp)
	{
		i = 1;
		iter = *a;
		while (iter)
		{
			if (iter->value < temp->value || \
				(iter->value == temp->value && iter < temp))
				i++;
			iter = iter->next;
		}
		temp->index = i;
		temp = temp->next;
	}
}
