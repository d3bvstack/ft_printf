/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarba-v <dbarba-v@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:23:09 by dbarba-v          #+#    #+#             */
/*   Updated: 2025/02/11 13:29:01 by dbarba-v         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINF_H
# define FTPRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_parse(const char *format, va_list argument);
int		ft_printf(const char *format, ...);
int		ft_putptr_fd(char *p, int fd);
void	ft_putnbr_fd(int n, int fd);
int		ft_puthexl_fd(int n, int fd);
int		ft_puthexl_fd(int n, int fd);
int		ft_putchar_fd(char c, int fd);

#endif