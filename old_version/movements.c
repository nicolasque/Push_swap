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

void    ft_sa(t_stack **a)
{
    t_stack	*temp;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    temp = (*a)->next;
    (*a)->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = *a;
    temp->next = *a;
    temp->prev = NULL;
    (*a)->prev = temp;
    *a = temp;
    ft_printf("sa\n");
}

void   ft_sb(t_stack **b)
{
    t_stack	*temp;

    if (*b == NULL || (*b)->next == NULL)
        return ;
    temp = (*b)->next;
    (*b)->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = *b;
    temp->next = *b;
    temp->prev = NULL;
    (*b)->prev = temp;
    *b = temp;
    ft_printf("sb\n");
}

void    ft_ss(t_stack **a, t_stack **b)
{
    ft_sa(a);
    ft_sb(b);
    ft_printf("ss\n");
}

void    ft_pa(t_stack **a, t_stack **b)
{
    t_stack	*temp;

    if (*b == NULL)
        return ;
    temp = *b;
    *b = (*b)->next;
    if (*b != NULL)
        (*b)->prev = NULL;
    temp->next = *a;
    temp->prev = NULL;
    if (*a != NULL)
        (*a)->prev = temp;
    *a = temp;
    ft_printf("pa\n");
}

void   ft_pb(t_stack **a, t_stack **b)
{
    t_stack	*temp;

    if (*a == NULL)
        return ;
    temp = *a;
    *a = (*a)->next;
    if (*a != NULL)
        (*a)->prev = NULL;
    temp->next = *b;
    temp->prev = NULL;
    if (*b != NULL)
        (*b)->prev = temp;
    *b = temp;
    ft_printf("pb\n");
}   

void    ft_ra(t_stack **a)
{
    t_stack	*temp;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    temp = *a;
    *a = (*a)->next;
    temp->next = NULL;
    temp->prev = NULL;
    (*a)->prev = NULL;
    while ((*a)->next != NULL)
        *a = (*a)->next;
    (*a)->next = temp;
    temp->prev = *a;
    *a = temp;
    ft_printf("ra\n");
}

void    ft_rb(t_stack **b)
{
    t_stack	*temp;

    if (*b == NULL || (*b)->next == NULL)
        return ;
    temp = *b;
    *b = (*b)->next;
    temp->next = NULL;
    temp->prev = NULL;
    (*b)->prev = NULL;
    while ((*b)->next != NULL)
        *b = (*b)->next;
    (*b)->next = temp;
    temp->prev = *b;
    *b = temp;
    ft_printf("rb\n");
}

void    ft_rr(t_stack **a, t_stack **b)
{
    ft_ra(a);
    ft_rb(b);
    ft_printf("rr\n");
}

void    ft_rra(t_stack **a)
{
    t_stack	*temp;

    if (*a == NULL || (*a)->next == NULL)
        return ;
    while ((*a)->next != NULL)
        *a = (*a)->next;
    temp = *a;
    *a = (*a)->prev;
    temp->prev = NULL;
    temp->next = NULL;
    (*a)->next = NULL;
    while ((*a)->prev != NULL)
        *a = (*a)->prev;
    (*a)->prev = temp;
    temp->next = *a;
    *a = temp;
    ft_printf("rra\n");
}

void    ft_rrb(t_stack **b)
{
    t_stack	*temp;

    if (*b == NULL || (*b)->next == NULL)
        return ;
    while ((*b)->next != NULL)
        *b = (*b)->next;
    temp = *b;
    *b = (*b)->prev;
    temp->prev = NULL;
    temp->next = NULL;
    (*b)->next = NULL;
    while ((*b)->prev != NULL)
        *b = (*b)->prev;
    (*b)->prev = temp;
    temp->next = *b;
    *b = temp;
    ft_printf("rrb\n");
}

void    ft_rrr(t_stack **a, t_stack **b)
{
    ft_rra(a);
    ft_rrb(b);
    ft_printf("rrr\n");
}

