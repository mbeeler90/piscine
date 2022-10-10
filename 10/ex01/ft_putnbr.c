/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 20:21:09 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/30 13:56:31 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "head.h"

void    ft_putnbr(int number)
{
    if (number < 0)
    {
        ft_putchar('-');
        number *= -1;
    }
    if (number >= 10)
    {
        ft_putnbr(number / 10);
        ft_putnbr(number % 10);
    }
    else
    {
        ft_putchar('0' + number);
    }
}
