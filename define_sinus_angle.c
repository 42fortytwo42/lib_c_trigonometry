/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define_sinus_angle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-mign <tle-mign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/13 18:58:24 by tle-mign          #+#    #+#             */
/*   Updated: 2014/01/13 19:00:20 by tle-mign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libtrigonometry.h"

float	ft_define_sinus_angle(float opposite_side, float hypotenuse)
{
	float sinus_angle;

	if (opposite_side == 0 || hypotenuse == 0)
		return (0);
	sinus_angle = opposite_side / hypotenuse;
	return (sinus_angle);
}
