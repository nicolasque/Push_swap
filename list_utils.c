/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 10:32:38 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/29 10:34:43 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_list_len(t_stack *a)
{
    int i;

    i = 0;
    while (a)
    {
        a = a->next;
        i++;
    }
    return (i);
}

t_stack  *ft_get_last_node(t_stack *a)
{
    while (a->next)
    {
        a = a->next;
    }
    return (a);
}

t_stack *ft_get_max_node(t_stack *a)
{
    t_stack *max_node;

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

t_stack *ft_get_min_node(t_stack *a)
{
    t_stack *min_node;

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

