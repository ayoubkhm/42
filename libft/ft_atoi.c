/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   @filename.c@                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhamass <akhamass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:03:17 by akhamass          #+#    #+#             */
/*   Updated: 2023/11/18 15:03:17 by akhamass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int ft_atoi(char *str)
{
    int i;
    int j;
    int res;

    i = 0;
    j= 1;
    res = 0;
    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            j = -1;
        i++;
    }
    while(str[i] >= 48 && str[i] <= 57)
    {
        res = res * 10 + (str[i] - 48);
        i++;
    }
    return(res * j);
