/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   division.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 06:55:57 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/31 08:01:59 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

int		division(int n1, int n2)
{
	int		number;

	if (n2 == 0)
		return (0);
	number = n1 / n2;
	return (number);
}
