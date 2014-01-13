/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_tan_by_angle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 19:01:26 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:04:03 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_define_tan_by_angle(float cosinus_angle, float sinus_angle)
{
	float	tan_angle;

	if (cosinus_angle == 0 || sinus_angle == 0)
		return (0);
	tan_angle = sinus_angle / cosinus_angle;
	return (tan_angle);
}
