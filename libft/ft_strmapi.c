/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:08:06 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:08:06 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if (s == NULL || f == NULL)
        return NULL;

    size_t len = 0;
    while (s[len] != '\0')
        len++;

    char *new_str = (char *)malloc(sizeof(char) * (len + 1));
    if (new_str == NULL)
        return NULL;

    size_t i = 0;
    while (i < len) {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[len] = '\0';


    return new_str;
}

