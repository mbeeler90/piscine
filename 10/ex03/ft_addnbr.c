/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:21:09 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 16:00:31 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int    ft_addnbr(char *number)
{
	int		i;
	int		j;
	
	j = -1;
	i = 0;
	while (number[++j] != '\0')
    	i = i * 10 + number[j] - '0';
	i--;
	return (i);
}
