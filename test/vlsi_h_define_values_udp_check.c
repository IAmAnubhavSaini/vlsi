/*
   Copyright 2013 Anubhav Saini

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.

-------------------------------------------------------------------------------
File name : test/vlsi_h_define_values.c
Purpose   : contains tests for basic data structures and objects for implementation of
            "Very Lousy Stack Implementation" a.k.a VLSI provided in src/vlsi.h


*/
#include<stdio.h>
#ifndef TRANSPORT_VIA_UDP
#define TRANSPORT_VIA_UDP
#include "../src/vlsi.h" /* I know, I know */



int main(){
  printf("%d\n", DISCARD_PORT );
  printf("%d\n", SSH_PORT );
  printf("%d\n", DNS_PORT );
  printf("%d\n", HTTP_PORT );
  printf("%d\n", KERBEROS_PORT );
  printf("%d\n", POPv2_PORT );
  printf("%d\n", POPv3_PORT );
  printf("%d\n", IMAPv2_PORT );
  printf("%d\n", SNMP_PORT );
#undef TRANSPORT_VIA_UDP
#endif
return 0;
}

/* expected output:
 *
 * 9
 * 22
 * 53
 * 80
 * 88
 * 109
 * 110
 * 143
 * 161
 * 
 */


