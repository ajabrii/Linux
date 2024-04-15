/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajabri <ajabri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 11:10:34 by ajabri            #+#    #+#             */
/*   Updated: 2024/03/05 20:49:57 by ajabri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen(char *str);
void	ft_error(char *err);
long	ft_atoi(char *str);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);
char	*ft_strdup(char *s1);
void	*ft_memmove(void *dst, void *src, size_t n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_isdigit(int c);

#endif
