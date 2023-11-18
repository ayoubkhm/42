/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:07:33 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:07:33 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == NULL || f == NULL)
        return;

    unsigned int i = 0;
    while (s[i] != '\0')
    {
        f(i, &s[i]);
        i++;
    }
}
