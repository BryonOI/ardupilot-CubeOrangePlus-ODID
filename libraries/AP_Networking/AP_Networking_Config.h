#include <AP_HAL/AP_HAL_Boards.h>

#ifndef AP_NETWORKING_ENABLED
#define AP_NETWORKING_ENABLED 0
#endif

#if CONFIG_HAL_BOARD == HAL_BOARD_CHIBIOS
    #define AP_NETWORKING_DHCP_AVAILABLE    LWIP_DHCP
#else
    #define AP_NETWORKING_DHCP_AVAILABLE    1 // for non-ChibiOS, assume it's available
#endif


// ---------------------------
// Below are default params
// ---------------------------

#ifndef AP_NETWORKING_DEFAULT_OPTIONS
    #define AP_NETWORKING_DEFAULT_OPTIONS 0
#endif

// Default DHCP
#ifndef AP_NETWORKING_DEFAULT_DHCP_ENABLE
#define AP_NETWORKING_DEFAULT_DHCP_ENABLE 0
#endif

// Default Static IP Address: 192.168.13.13
#ifndef AP_NETWORKING_DEFAULT_STATIC_IP_ADDR0
    #define AP_NETWORKING_DEFAULT_STATIC_IP_ADDR0   192
#endif
#ifndef AP_NETWORKING_DEFAULT_STATIC_IP_ADDR1
    #define AP_NETWORKING_DEFAULT_STATIC_IP_ADDR1   168
#endif
#ifndef AP_NETWORKING_DEFAULT_STATIC_IP_ADDR2
    #define AP_NETWORKING_DEFAULT_STATIC_IP_ADDR2   13
#endif
#ifndef AP_NETWORKING_DEFAULT_STATIC_IP_ADDR3
    #define AP_NETWORKING_DEFAULT_STATIC_IP_ADDR3   14
#endif

// Default Netmask: 24
// Note, the netmask is the number of consecutive bits
#ifndef AP_NETWORKING_DEFAULT_NETMASK
    #define AP_NETWORKING_DEFAULT_NETMASK       24 // 255.255.255.0
    // #define AP_NETWORKING_DEFAULT_NETMASK    16 // 255.255.0.0
#endif


// Default Static IP Address: 192.168.13.1
#ifndef AP_NETWORKING_DEFAULT_STATIC_GW_ADDR0
    #define AP_NETWORKING_DEFAULT_STATIC_GW_ADDR0   192
#endif
#ifndef AP_NETWORKING_DEFAULT_STATIC_GW_ADDR1
    #define AP_NETWORKING_DEFAULT_STATIC_GW_ADDR1   168
#endif
#ifndef AP_NETWORKING_DEFAULT_STATIC_GW_ADDR2
    #define AP_NETWORKING_DEFAULT_STATIC_GW_ADDR2   13
#endif
#ifndef AP_NETWORKING_DEFAULT_STATIC_GW_ADDR3
    #define AP_NETWORKING_DEFAULT_STATIC_GW_ADDR3   1
#endif


// Default MAC Address: 2C:AF:51:03:CF:46
// Note, lower 3 bytes (ADDR3,4,5) will be replaced with the platform UUID 
#ifndef AP_NETWORKING_DEFAULT_MAC_ADDR0
    #define AP_NETWORKING_DEFAULT_MAC_ADDR0     0xC2 //LWIP_ETHADDR_0
#endif
#ifndef AP_NETWORKING_DEFAULT_MAC_ADDR1
    #define AP_NETWORKING_DEFAULT_MAC_ADDR1     0xAF //LWIP_ETHADDR_1
#endif
#ifndef AP_NETWORKING_DEFAULT_MAC_ADDR2
    #define AP_NETWORKING_DEFAULT_MAC_ADDR2     0x51 //LWIP_ETHADDR_2
#endif
#ifndef AP_NETWORKING_DEFAULT_MAC_ADDR3
    #define AP_NETWORKING_DEFAULT_MAC_ADDR3     0x03 //LWIP_ETHADDR_3
#endif
#ifndef AP_NETWORKING_DEFAULT_MAC_ADDR4
    #define AP_NETWORKING_DEFAULT_MAC_ADDR4     0xCF //LWIP_ETHADDR_4
#endif
#ifndef AP_NETWORKING_DEFAULT_MAC_ADDR5
    #define AP_NETWORKING_DEFAULT_MAC_ADDR5     0x46 //LWIP_ETHADDR_5
#endif
