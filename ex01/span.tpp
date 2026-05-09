/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aandreo <aandreo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 17:36:00 by aandreo           #+#    #+#             */
/*   Updated: 2026/05/08 17:36:20 by aandreo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

template<typename Iterator>
void addMany(Iterator begin, Iterator end)
{
	while (begin != end)
	{
		addNumber(*begin);
		++begin;
	}
}
