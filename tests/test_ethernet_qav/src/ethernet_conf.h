// Copyright (c) 2011, XMOS Ltd, All rights reserved
// This software is freely distributable under a derivative of the
// University of Illinois/NCSA Open Source License posted in
// LICENSE.txt and at <http://github.xcore.com/>

#ifndef __ethernet_conf_h__
#define __ethernet_conf_h__


#define ETHERNET_DEFAULT_IMPLEMENTATION full

#define ETHERNET_TX_HP_QUEUE 
#define ETHERNET_TRAFFIC_SHAPER
#define ETHERNET_RX_HP_QUEUE

#define MII_TX_BUFSIZE_HIGH_PRIORITY (4096)
#define MII_RX_BUFSIZE_HIGH_PRIORITY (4096)

#define MAX_ETHERNET_PACKET_SIZE (1518)

#define NUM_MII_RX_BUF 30
#define NUM_MII_TX_BUF 2

#define MAX_ETHERNET_CLIENTS   (4)




#endif
