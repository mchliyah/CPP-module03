/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchliyah <mchliyah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 00:42:43 by mchliyah          #+#    #+#             */
/*   Updated: 2022/10/05 00:58:21 by mchliyah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "default constructor called !" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
    Name = name;
    Hit = 10;
    Energy_points = 10;
    Attack_damage = 0;
    std::cout<< "copy constructor called !" << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<< "destructor called !" << std::endl;
}
