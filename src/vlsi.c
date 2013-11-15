#include "vlsi.h"

//TODO : move to error_handling.h
static int error_code;
static char error_msg[100];

int 	IP_IsMaskOkay( unsigned int mask ){
//TODO : learn how to check for the continuity of the 1s in an int.
//returns postive if okay, otherwise error.
}
//TODO : decrease the length or cut the longer lines in 80 char lines
void 	IP_Set( IP * ip_out, unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int mask ){
  SANITIZE_IP_PART(a);
  SANITIZE_IP_PART(b);
  SANITIZE_IP_PART(c);
  SANITIZE_IP_PART(d);
  if( IP_IsMaskOkay( mask ) ){
    ip_out -> A = a;
    ip_out -> B = b;
    ip_out -> C = c;
    ip_out -> D = d;
  }
  else{
    error_code = -1; //invalid mask.
    sprintf( error_code, "invalid mask provided : %d\n.", mask );
  }
  error_code = 0;
}
IP * 	IP_Create_New( unsigned int a, unsigned int b, unsigned int c, unsigned int d, unsigned int mask ){
//TODO : implement via calloc for no particular reason.
  IP * nIp = (IP *) malloc( sizeof( IP ) * 1 );
  if( nIp == NULL ) return nIp;
  IP_Set(nIp, a, b, c, d, mask );
  if( error_code != 0 ) return NULL;
  return nIp;
}

