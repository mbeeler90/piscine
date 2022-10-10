/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   head.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbeeler <mbeeler@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 06:55:02 by mbeeler           #+#    #+#             */
/*   Updated: 2021/09/03 17:47:00 by mbeeler          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEAD_H
# define HEAD_H

# include <unistd.h>
# include <fcntl.h>

# define BUF_SIZE 4096

int		str_len(char *str);
void	putstr(int fd, char *str);
void	putchar(int fd, char c);

#endif
