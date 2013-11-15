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
File name : src/vlsi.h
Purpose   : contains basic data structures and objects for implementation of
            "Very Lousy Stack Implementation" a.k.a VLSI.


*/

#ifndef SERVC_VLSI_H
#define SERVC_VLSI_H

//port # taken from /etc/services
#define PORT_DISCARD_TCP	9	//TCP
#define PORT_DISCARD_UDP	9	//UDP
#define PORT_FTP_DATA		20	//TCP
#define PORT_FTP		21	//TCP
#define PORT_SSH_TCP		22	//TCP
#define PORT_SSH_UDP		22	//UDP
#define PORT_TELNET		23	//TCP
#define PORT_SMTP		35	//TCP
#define PORT_NAMESERVER		42	//TCP
#define PORT_WHOIS		43	//TCP
#define PORT_DNS_TCP		53	//TCP
#define PORT_DNS_UDP		53	//TCP
#define PORT_HTTP_TCP		80	//TCP
#define PORT_HTTP_UDP		80	//UDP
#define PORT_KERBEROS_TCP	88	//TCP
#define PORT_KERBEROS_UDP	88	//TCP
#define PORT_POPv2_TCP		109	//TCP
#define PORT_POPv2_UDP		109	//UDP
#define PORT_POPv3_TCP		110	//TCP
#define PORT_POPv3_UDP		110	//UDP
#define PORT_IMAPv2_TCP		143	//TCP
#define PORT_IMAPv2_UDP		143	//UDP
#define PORT_SNMP_TCP		161	//TCP
#define PORT_SNMP_UDP		161	//UDP

#ifdef TRANSPORT_VIA_TCP
#define DISCARD_PORT 		PORT_DISCARD_TCP
#define FTP_DATA_PORT 		PORT_FTP_DATA
#define FTP_PORT		PORT_FTP
#define SSH_PORT		PORT_SSH_TCP
#define TELNET_PORT		PORT_TELNET
#define SMTP_PORT		PORT_SMTP
#define NAMESERVER_PORT		PORT_NAMESERVER
#define WHOIS_PORT		PORT_WHOIS
#define DNS_PORT		PORT_DNS_TCP
#define HTTP_PORT		PORT_HTTP_TCP
#define KERBEROS_PORT		PORT_KERBEROS_TCP
#define POPv2_PORT		PORT_POPv2_TCP
#define POPv3_PORT		PORT_POPv3_TCP
#define IMAPv2_PORT		PORT_IMAPv2_TCP
#define SNMP_PORT		PORT_SNMP_TCP
#endif
#ifdef TRANSPORT_VIA_UDP
#define DISCARD_PORT		PORT_DISCARD_UDP
#define SSH_PORT		PORT_SSH_UDP
#define DNS_PORT		PORT_DNS_UDP
#define HTTP_PORT		PORT_HTTP_UDP
#define KERBEROS_PORT		PORT_KERBEROS_UDP
#define POPv2_PORT		PORT_POPv2_UDP
#define POPv3_PORT		PORT_POPv3_UDP
#define IMAPv2_PORT		PORT_IMAPv2_UDP
#define SNMP_PORT		PORT_SNMP_UDP
#endif

/* if you are angry at the fact that TCP port == UDP port, 
 * remember, this is lousy implementation.
 */

typedef enum TransportProtocols TLP; //transport layer protocols
enum TransportProtocols{
  TLP_UNINITED = 0x00, //uninitialized
  TLP_TCP = 0x06,
  TLP_UDP = 0x11
};

typedef enum NetworkProtocols NLP; //network layer protocols
enum NetworkProtocols{
  NLP_UNINITED = 0x00,
  NLP_IP = 0x0800,
  NLP_ICMP = 0x01
//  NLP_ARP
//  NLP_RARP
//  NLP_PARP //proxy-ARP
};

#endif
