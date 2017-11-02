#include<apue.h>
#include<dirent.h>

/*
use it for learn github

*/
int main(int argc, char *argv[])
{
  DIR *dir;
  struct dirent *mydirent;

  if(argc != 2)
    err_quit("Usage: ls dest_direnctory");
  if((dir = opendir(argv[1])) == NULL)
    err_quit("can't open %s",argv[1]);

  while( ( mydirent = readdir(dir)) != NULL)
    printf("%s\n",mydirent->d_name);

  exit(0);
  
    
  
}
