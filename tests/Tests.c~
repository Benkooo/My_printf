/*
** EPITECH PROJECT, 2017
** Printf*
** File description:
** Main test
*/

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/my.h"

static void do_basics(int ac, char **av, unsigned int nb)
{
	printf("-------- Les bases --------\n\n");
	my_printf("my_int ac = (%d)\n", ac);
	printf("   int ac = (%d)\n", ac);
	my_printf("my_int ac = (%i)\n", ac);
	printf("   int ac = (%i)\n", ac);
	my_printf("my_av[1] = (%s)\n", av[1]);
	printf("   av[1] = (%s)\n", av[1]);
	my_printf("my_char av[1][0] = (%c)\n", av[1][0]);
	printf("   char av[1][0] = (%c)\n", av[1][0]);
	my_printf("my_print % = (%%)\n");
	printf("   print % = (%%)\n");
	my_printf("my_octacl = (%o)\n", nb);
	printf("   octacl = (%o)\n", nb);
	my_printf("my_unsi = (%u)\n", 3000000000);
	printf("   unsi = (%u)\n", 3000000000);
	my_printf("my_hexa = (%x)\n", nb);
	printf("   haxa = (%x)\n", nb);
	my_printf("my_hexa_caps = (%X)\n", nb);
	printf("   haxa_caps = (%X)\n", nb);
	my_printf("my_pointer = (%p)\n", av[1]);
	printf("   pointer = (%p)\n", av[1]);
}

static void do_second_basics(int ac, char **av, unsigned int nb)
{
	my_printf("my_binary = (%b)\n\n", nb);
	printf("-------- whith the '#'--------\n\n");
	my_printf("my_int ac = (%#d)\n", ac);
	printf("   int ac = (%#d)\n", ac);
	my_printf("my_int ac = (%#i)\n", ac);
	printf("   int ac = (%#i)\n", ac);
	my_printf("my_av[1] = (%#s)\n", av[1]);
	printf("   av[1] = (%#s)\n", av[1]);
	my_printf("my_char av[1][0] = (%#c)\n", av[1][0]);
	printf("   char av[1][0] = (%#c)\n", av[1][0]);
	my_printf("my_print % = (%#%)\n");
	printf("   print % = (%#%)\n");
	my_printf("my_ocr = (%#o)\n", nb);
	printf("   ocr = (%#o)\n", nb);
	my_printf("my_unsi = (%#u)\n", 3000000000);
	printf("   unsi = (%#u)\n", 3000000000);
	my_printf("my_hexa = (%#x)\n", nb);
	printf("   haxa = (%#x)\n", nb);
	my_printf("my_hexa_caps = (%#X)\n", nb);
	printf("   haxa_caps = (%#X)\n", nb);
	my_printf("my_pointer = (%#p)\n", av[1]);
}

static void do_with_spaces(int ac, char **av, unsigned int nb)
{
	printf("------------ Espace entre %% et flag -----------\n");
	my_printf("my_int ac = (%          d)\n", ac);
	printf("   int ac = (%             d)\n", ac);
	my_printf("my_int ac = (%          i)\n", ac);
	printf("   int ac = (%             i)\n", ac);
	my_printf("my_av[1] = (%           s)\n", av[1]);
	printf("   av[1] = (%              s)\n", av[1]);
	my_printf("my_char av[1][0] = (%   c)\n", av[1][0]);
	printf("   char av[1][0] = (%      c)\n", av[1][0]);
	my_printf("my_print % = (%         %)\n");
	printf("   print % = (%            %)\n");
	my_printf("my_ocr = (%             o)\n", nb);
	printf("   ocr = (%                o)\n", nb);
	my_printf("my_unsi = (%            u)\n", 3000000000);
	printf("   unsi = (%               u)\n", 3000000000);
	my_printf("my_hexa = (%            x)\n", nb);
	printf("   haxa = (%               x)\n", nb);
	my_printf("my_hexa_caps = (%       X)\n", nb);
	printf("   haxa_caps = (%          X)\n", nb);
	my_printf("my_pointer = (%         p)\n", av[1]);
	printf("   pointer = (%            p)\n", av[1]);
}

static void do_second_with_spaces(int ac, char **av, unsigned int nb)
{
	my_printf("my_binary = (%          b)\n\n", nb);
	printf("------------ Espace entre %% et # et flag -----------\n");
	my_printf("my_int ac = (%    #      d)\n", ac);
	printf("   int ac = (%       #      d)\n", ac);
	my_printf("my_int ac = (%    #      i)\n", ac);
	printf("   int ac = (%       #      i)\n", ac);
	my_printf("my_av[1] = (%     #      s)\n", av[1]);
	printf("   av[1] = (%        #      s)\n", av[1]);
	my_printf("my_char av[1][0] = (% #  c)\n", av[1][0]);
	printf("   char av[1][0] = (%    #  c)\n", av[1][0]);
	my_printf("my_print % = (%       #  %)\n");
	printf("   print % = (%          #  %)\n");
	my_printf("my_ocr = (%           #  o)\n", nb);
	printf("   ocr = (%              #  o)\n", nb);
	my_printf("my_unsi = (%          #  u)\n", 3000000000);
	printf("   unsi = (%             #  u)\n", 3000000000);
	my_printf("my_hexa = (%          #  x)\n", nb);
	printf("   haxa = (%             #  x)\n", nb);
	my_printf("my_hexa_caps = (%     #  X)\n", nb);
	printf("   haxa_caps = (%        #  X)\n", nb);
	my_printf("my_pointer = (%       #  p)\n", av[1]);
}

int main(int ac, char **av)
{
	unsigned int nb = 1234;
	long bn = 9223372036854775807;

	do_basics(ac, av, nb);
	do_second_basics(ac, av, nb);
	do_with_spaces(ac, av, nb);
	do_second_with_spaces(ac, av, nb);
	printf("   pointer = (%          #  p)\n", av[1]);
	my_printf("my_binary = (%        #  b)\n\n", nb);
	printf("   pointer = (%#p)\n", av[1]);
	my_printf("my_binary = (%b)\n\n", nb);
	printf("----------- Sans %% ----------------\n");
	my_printf("(Coucouc les copains)\n");
	printf("(Coucouc les copains)\n\n");
	printf("----------- juste %%c,d,etc ----------------\n");
	my_printf("%d", ac);
	return (0);
}
