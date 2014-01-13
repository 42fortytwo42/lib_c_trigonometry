/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_cosinus_angle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:56:30 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 18:58:18 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_define_cosinus_angle(float adjacent_side, float hypotenuse)
{
	float	cosinus_angle;

	if (adjacent_side == 0 || hypotenuse == 0)
		return (0);
	cosinus_angle = adjacent_side / hypotenuse;
	return (cosinus_angle);
}
