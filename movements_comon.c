/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_comon.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 08:00:56 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/24 10:11:21 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"


void    ft_sx(t_stak **stak)
{
	t_stak *temp;

	if (*stak == NULL || (*stak)->next == NULL)
		return;

	temp = *stak;
	*stak = (*stak)->next;
	temp->next = (*stak)->next;
	(*stak)->next = temp;
	(*stak)->prev = NULL;
	if (temp->next != NULL)
		temp->next->prev = temp;
	temp->prev = *stak;
}


void ft_rx(t_stak **stak)
{
	t_stak  *temp;
	t_stak  *last;

	if (*stak == NULL || (*stak)->next == NULL)
		return ;
	last = ft_get_last_node(*stak);
	temp = (*stak);
	*stak = (*stak)->next;
	(*stak)->prev = NULL;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}

void ft_rrx(t_stak **stak)
{
	t_stak *last;
	t_stak *first;

	if (*stak == NULL || (*stak)->next == NULL)
		return ;

	last = ft_get_last_node(*stak);
	first = *stak;
	last->prev->next = NULL;
	last->next = first;
	last->prev = NULL;
	first->prev = last;
	*stak = last;
}


// Move from stack a to stack b
void	ft_pb(t_stak **a, t_stak **b)
{
	t_stak  *temp;

	temp = *a;
	if (!*a)
		return ;
	*a = (*a)->next;
	if (*a)
	(*a)->prev = NULL;
	if (*b)
		(*b)->prev = temp;
	temp->next = *b;
	*b = temp;
	ft_printf("pb\n");
}


void	ft_pa(t_stak **a, t_stak **b)
{
	t_stak  *temp;

	temp = *b;
	if (!*b)
		return ;
	*b = (*b)->next;
	if (*b)
	(*b)->prev = NULL;
	if (*a)
		(*a)->prev = temp;
	temp->next = *a;
	*a = temp;
	ft_printf("pa\n");
}