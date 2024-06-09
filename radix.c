/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:51:15 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/09 17:22:31 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_radix(t_stack **a, t_stack **b)
{
    int bit;
    int i;
    int a_len;
    int b_len;

    i = 0;
    while (i <= 31 && ft_is_order(*a))
    {
        a_len = ft_list_len(*a);
        while (a_len--)
        {
            bit = ((*a)->index >> i) & 1;
            if (bit)
                ft_ra(a);
            else
                ft_pb(a, b);
        }
        b_len = ft_list_len(*b);
        while (b_len--)
        {
            ft_pa(a, b);
        }
        i++;
    }
}

