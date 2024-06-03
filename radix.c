/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:51:15 by nquecedo          #+#    #+#             */
/*   Updated: 2024/06/03 11:26:26 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int    ft_check_order_negatives(t_stack *a)
{
    
     t_stack *temp = a;
    int last_negative = 0;

    // Encuentra el último número negativo en la lista
    while (temp)
    {
        if (temp->value < 0)
            last_negative = temp->value;
        temp = temp->next;
    }

    temp = a;
    while (temp)
    {
        // Si el número es negativo y es mayor que el último número negativo,
        // entonces los números negativos no están ordenados
        if (temp->value < 0 && temp->value > last_negative)
            return (0);
        if (temp->value < 0)
            last_negative = temp->value;
        temp = temp->next;
    }

    // Si llegamos hasta aquí, entonces los números negativos están ordenados
    return (1);
}

// void    ft_radix(t_stack **a, t_stack **b)
// {
//     int bit;
//     int i;
//     int a_len;
//     int b_len;

//     i = -1;
//     while (++i < 32 && ft_is_order(*a))
//     {
//         a_len = ft_list_len(*a);
//         while (a_len--)
//         {
//             bit = ((*a)->value >> i) & 1;
//             if (bit)
//                 ft_ra(a);
//             else
//                 ft_pb(a, b);
//         }
//         b_len = ft_list_len(*b);
//         while (b_len--)
//         {
//             bit = ((*b)->value >> i) & 1;
//             if (bit)
//                 ft_pa(a, b);
//             else
//                 ft_rb(b);
//         }
//         b_len = ft_list_len(*b);
//         while (b_len--)
//         {
//             ft_pa(a, b);   
//         }
//         if (ft_check_order_negatives(*a) && !(*b))
//             break ;
//     }
//     while (ft_get_last_node(*a)->value != ft_get_max_node(*a)->value)
//         ft_rra(a);
// }

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

