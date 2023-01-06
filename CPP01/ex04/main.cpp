/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayalman <ayalman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 00:12:48 by ayalman           #+#    #+#             */
/*   Updated: 2023/01/07 00:39:01 by ayalman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void check(std::string str, char **av)
{
    std::string fst = std::string(av[2]);
    std::string snd = std::string(av[3]);
    int pos;
    std::ofstream outfile;

    outfile.open((std::string)av[1] + ".replace");
    for (int i = 0; i < (int)str.length(); i++)
    {
        pos = str.find(fst, i);
        if (pos != -1 && pos == i)
        {
            outfile << snd;
            i += fst.size() - 1;
        }
        else
            outfile << str[i];
    }
    outfile.close();
}

int main(int ac, char **av)
{
    std::ifstream   infile;
    std::string     str;
    char            single;

    if (ac != 4)
    {
        std::cerr << "Please only give a <filename> and two strings" <<std::endl;
        return (-1);
    }
    infile.open(av[1]);
    if (infile.fail())
    {
        std::cerr << av[1] << "no such file or directory" << std::endl;
		return (-1);
    }
    while(!infile.eof() && infile >> std::noskipws >> single)
        str += single;
    infile.close();
    check(str, av);
    return (0);
}