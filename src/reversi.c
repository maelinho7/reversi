#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <stdbool.h>

int main(int argc, char* argv[]){
	int optc = 0;
	bool verbose = false;
	size_t board_size;
	static struct option long_opts[] = {
            {"size",     required_argument, 0,  0 },
            {"black-ai",  required_argument,       0,  0 },
            {"white-ai",  required_argument, 0,  0 },
            {"contest",  no_argument, 0,  0 },
            {"verbose", no_argument,       0,  0 },
            {"version",  no_argument, 0, 'v'},
            {"help",    no_argument, 0,  0 },
            {0,         0,                 0,  0 }
        };
	
	while((optc = getopt_long (argc, argv, "sbwcvVh", long_opts, NULL)) != -1)
		switch(optc){
			case 'h':
				printf("Usage: resersi ([-s SIZE|-b N|-w N|-v|-V|-h] | -c) FILE\n"
					   "Play a reversi game with human or program players.\n"
					   "  -s, --size SIZE	board size (min=1, max=5 (default=4))\n"
					   "  -b, --black-ai N	set tactic of black player\n"
					   "  -w, --white-ai N	set tactic of white player\n"
					   "  -c, --contest 	enable 'contest' mode\n"
					   "  -v, --verbose 	verbose output\n"
					   "  -V, --version		display version and exit\n"
					   "  -h, --help		display this help and exit\n");
				exit (EXIT_SUCCESS);
			case 'V':
				printf("reversi 1.0.0 \n"
					   "This software allows to play reversi game.\n");
				exit (EXIT_SUCCESS);
			case 'v':
				verbose = true;
				exit (EXIT_SUCCESS);
			case 's':
				printf('%d', optarg);	
				//board_size =
				exit (EXIT_SUCCESS);
			default:
				exit (EXIT_FAILURE);
		}
}
