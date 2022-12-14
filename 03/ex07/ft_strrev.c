/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 13:25:27 by mbeeler           #+#    #+#             */
/*   Updated: 2021/08/20 19:45:46 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	swap;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	k = i;
	while (i - 1 >= 0.5 * k)
	{
		swap = str[i - 1];
		str[i - 1] = str[j];
		str[j] = swap;
		i--;
		j++;
	}
	return (str);
}
