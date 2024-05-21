/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:24:28 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/21 19:09:40 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_sa(t_stak **a)
{
    t_stak *temp;

    if (*a == NULL || (*a)->next == NULL)
        return;

    temp = *a;
    *a = (*a)->next;
    temp->next = (*a)->next;
    (*a)->next = temp;
    (*a)->prev = NULL;
    if (temp->next != NULL)
        temp->next->prev = temp;
    temp->prev = *a;
    ft_printf("sa\n");
} 

void ft_ra(t_stak **a)
{
    t_stak  *temp;
    t_stak  *last;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    last = ft_get_last_node(*a);
    temp = (*a);
    *a = (*a)->next;
    (*a)->prev = NULL;
    last->next = temp;
    temp->prev = last;
    temp->next = NULL;
    ft_printf("ra\n");
}

void	ft_rra(t_stak **a)
{
	t_stak	*first;

	if (*a == NULL || (*a)->next == NULL)
		return ;
	first = *a;
	first->prev = ft_get_last_node(*a);
	first->prev->next = first;
	*a = first->next;
	(*a)->prev = NULL;
	first->next = NULL;
	ft_printf("rra\n");
}