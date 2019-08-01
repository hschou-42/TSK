/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TSK.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hschou <hschou@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 11:13:43 by hschou            #+#    #+#             */
/*   Updated: 2019/08/01 14:39:10 by hschou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TSK_H
# define TSK_H

void			ft_putchar(char c);
void			ft_nputchar(char c, int n);
void			ft_putstr(char *str);
void			ft_putnbr(int n);
void			ft_swap(int *a, int *b);
int				ft_atoi(char *str);

int				ft_str_is_alpha(char *str);
int				ft_str_is_lowercase(char *str);
int				ft_str_is_numeric(char *str);
int				ft_str_is_printable(char *str);
int				ft_str_is_uppercase(char *str);

int				ft_strlen(char *str);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int nb);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, unsigned int n);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			*ft_strstr(char *str, char *to_find);

char			*ft_strlowcase(char *str);
char			*ft_strupcase(char *str);
char			*ft_strcapitalize(char *str);

void			ft_putnbr_base(int n, unsigned int bs);

#endif
