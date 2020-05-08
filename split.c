#include "types.h"
#include "fcntl.h"
#include "user.h"
#include "stat.h"
#include "fs.h"

#define SIZE	2000

int linecut = 1500;
int file;
char fileout[150];
char *fix;

int filebaru()
{
  int a; \\fd

  if (++*fix > 'z') {
	*fix = 'a';		
	++*(fix - 1);	

  }
  if ((a = open(fileout,O_CREATE|O_RDWR)) < 0) {
	printf(2,"tidak bisa buat file baru\n");
	exit();
  }
  return a;
}

int main(){
}
