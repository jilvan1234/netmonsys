#pragma once

//主要用于和应用通信
#define NETMONSYS_NAMESPACE L"NetMonSys"


//IP访问日志
#define LPC_MESSAGE_ID_IP_VISIT	100


#define LPC_MESSAGE_ID_DNS_VISIT 101

#define NETMON_TYPE 40000

//添加一个白名单规则
// 入参 { "Process":"path"}
//出参，无
#define IOCT_ADD_WHITE_RULE CTL_CODE( NETMON_TYPE, 0x900, METHOD_BUFFERED,FILE_ANY_ACCESS)

//清空白名单规则
#define IOCT_CLEAR_WHITE_RULE CTL_CODE( NETMON_TYPE, 0x901, METHOD_BUFFERED,FILE_ANY_ACCESS)

//添加一个IP过滤规则
//入参{ "RemoteIp":"192.168.1.1", "RemotePort":80 }
#define IOCT_ADD_IP_RULE CTL_CODE( NETMON_TYPE, 0x902, METHOD_BUFFERED,FILE_ANY_ACCESS)

//清空IP过滤规则
#define IOCT_CLEAR_IP_RULE CTL_CODE( NETMON_TYPE, 0x903, METHOD_BUFFERED,FILE_ANY_ACCESS)


//添加一个域名过滤规则
//入参{ "Domain":".*.baidu.com"}
#define IOCT_ADD_DOMAIN_RULE CTL_CODE( NETMON_TYPE, 0x904, METHOD_BUFFERED,FILE_ANY_ACCESS)

//清空域名过滤规则
#define IOCT_CLEAR_DOMAIN_RULE CTL_CODE( NETMON_TYPE, 0x905, METHOD_BUFFERED,FILE_ANY_ACCESS)