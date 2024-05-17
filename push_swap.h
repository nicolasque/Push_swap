/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nquecedo <nquecedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 19:51:03 by nquecedo          #+#    #+#             */
/*   Updated: 2024/05/17 10:01:42 by nquecedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
# include <stdio.h>

typedef struct t_stak
{
	int		value;
	int		li_pos;

	struct t_stak	*prev;
	struct t_stak	*next;
}	t_stak;


//check_args.c
int	ft_check_args(int argc, char **argv);
int ft_is_all_num(char *str);
int ft_is_repeat(int argc, char** argv, char *str, int list_position);
int ft_is_order(t_stak *a);





#endif //PUSH_SWAP_H