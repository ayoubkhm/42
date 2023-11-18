/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:08:27 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:08:27 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t s_len;

    if (!s)
        return (NULL);

    s_len = 0;
    while (s[s_len] != '\0')
        s_len++;

    if (start >= s_len)
        return (calloc(1, sizeof(char))); // Retourne une chaîne vide

    substr = (char *)malloc(sizeof(char) * (len + 1)); // +1 pour le caractère nul
    if (!substr)
        return (NULL);

    i = 0;
    while (i < len && s[start + i] != '\0')
    {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0'; // Terminer la chaîne avec un caractère nul

    return substr;
}
