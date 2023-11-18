/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:08:22 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:08:22 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int is_in_set(char c, const char *set)
{
    size_t i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    size_t start;
    size_t end;
    size_t len;
    char *trimmed_str;

    if (s1 == NULL || set == NULL)
        return (NULL);

    start = 0;
    while (s1[start] != '\0' && is_in_set(s1[start], set) != '\0')
        start++;

    end = 0;
    while (s1[end] != '\0')
        end++;
    while (end > start && is_in_set(s1[end - 1], set) != '\0')
        end--;

    len = end - start;
    trimmed_str = (char *)malloc(sizeof(char) * (len + 1));
    if (trimmed_str == NULL)
        return (NULL);

    size_t i = 0;
    while (i < len)
    {
        trimmed_str[i] = s1[start + i];
        i++;
    }
    trimmed_str[len] = '\0';

    return trimmed_str;
}
