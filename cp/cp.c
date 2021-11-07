#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc,char** argv){
char buffer[1024];
int sourcefile;
int targetfile;
size_t count;// byteri qanaky chapelu hamar

if(argc<3){
return 1;
}
sourcefile = open(argv[1],O_RDONLY);
//O_RDONLY ov miayn bacum enq ev kardum
if (sourcefile==-1){
//-1 a chi bacvel,toxenq message
printf("sourcefile is closed");
return 1;

}
targetfile= open(argv[2],O_WRONLY|O_CREAT|O_TRUNC|S_IRUSR|S_IWUSR|S_IROTH);
if(targetfile==-1){
printf("targetfile id closed");
close(sourcefile); //ete error a stacvel uremn petqa araji filey pakel

return 1;
}
while((count=read(sourcefile,buferr,sizeof(buffer)))!=0){
write (targetfile,buffer,count);
}
close(sourcefile);
close(targetfile);
return 0;

}
