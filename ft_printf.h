/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:23:09 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 13:29:01 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_putptr_fd(void *p, int fd);
int     ft_putstr_fd(char *s, int fd);
int 	ft_putnbr_fd(int n, int fd);
int		ft_puthexl_fd(unsigned long n, int fd);
int		ft_puthexu_fd(unsigned long n, int fd);
int		ft_putchar_fd(char c, int fd);
int		ft_printf(const char *format, ...);

#endif