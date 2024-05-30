/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:51:15 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/30 11:52:12 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int count_used_bits(int num)
{
    int count = 0;
    for (int i = 0; i < 32; i++)
    {
        if ((num >> i) & 1)
            count++;
    }
    return count;
}
int max_used_bits(t_stack **a)
{
    int max_bits = 0;
    t_stack *temp = *a;
    while (temp)
    {
        int bits = count_used_bits(abs(temp->value));
        if (bits > max_bits)
            max_bits = bits;
        temp = temp->next;
    }
    return max_bits;
}

void    ft_radix(t_stack **a, t_stack **b)
{
    int bit;
    int i;
    int a_len;
    int b_len;
    int max_bits = max_used_bits(a);

    i = 0;
    while (i <= max_bits)
    {
        a_len = ft_list_len(*a);
        while (a_len--)
        {
            if ((*a)->value < 0)
                bit = (abs((*a)->value) >> i) & 1;
            else
                bit = ((*a)->value >> i) & 1;
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