/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cserdean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/03 17:53:36 by cserdean          #+#    #+#             */
/*   Updated: 2017/01/03 18:35:57 by cserdean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, char *s2)
{
	char *ret;

	ret = s1;
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s2++;
		s1++;
	}
	*s1 = '\0';
	return (ret);
}
