#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

int parenthesis(char *str, int i);
int secops(char *str, int i);
int firestops(char *str, int i);
int		ft_atoimod(char *str, int i);
int		eval_expr(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
