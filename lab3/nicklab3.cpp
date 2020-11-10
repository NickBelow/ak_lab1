    #include <stdlib.h>
    #include <unistd.h>
    #include <stdio.h>
    #include <getopt.h>
     
    void usage(char *name) {
        printf("usage: %s\n    \t-h give help\n   \t-v version\n    \t-c <config-file>\n    \t--help same as -h\n     \t--config=config-file, same as -c\n", name);
        return;
    }
     
    int main (int argc, char *argv[]) {
        int a = 0;
        int optIdx = -1;
        const struct option long_options[] = {
        {"help",0,NULL,'h'},
        {"version",0,NULL,'v'},
        {"config", 1, 0, 'c'},
        {NULL,0,NULL,0},
        };
        while ((a = getopt_long(argc,argv,"hvc::",long_options, &option_index)) != -1){
            switch( a ){
                case 'h':
                    usage(argv[0]);
                    return(-1);

                case 'v': {
                    printf("Arg: version\n"); 
                    return(1);

                }
                case 'c':
                    printf("option 'c' selected, filename: %s\n", optarg);
                    return(1);
                 
                default:
                    usage(argv[0]);
                    return(-1);
            }
        }
         
        return(0);
    }
