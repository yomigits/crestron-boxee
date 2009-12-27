#ifndef __S2_BOXEE_0_1_H__
#define __S2_BOXEE_0_1_H__




/*
* Constructor and Destructor
*/

/*
* DIGITAL_INPUT
*/
#define __S2_boxee_0_1_TCPIP_CONNECT_DIG_INPUT 0
#define __S2_boxee_0_1_PAUSE_DIG_INPUT 1
#define __S2_boxee_0_1_STOP_DIG_INPUT 2
#define __S2_boxee_0_1_PLAYNEXT_DIG_INPUT 3
#define __S2_boxee_0_1_PLAYPREV_DIG_INPUT 4
#define __S2_boxee_0_1_UP_DIG_INPUT 5
#define __S2_boxee_0_1_DN_DIG_INPUT 6
#define __S2_boxee_0_1_LT_DIG_INPUT 7
#define __S2_boxee_0_1_RT_DIG_INPUT 8
#define __S2_boxee_0_1_OK_DIG_INPUT 9
#define __S2_boxee_0_1_BACK_DIG_INPUT 10


/*
* ANALOG_INPUT
*/




/*
* DIGITAL_OUTPUT
*/
#define __S2_boxee_0_1_TCPIP_CONNECTED_DIG_OUTPUT 0


/*
* ANALOG_OUTPUT
*/
#define __S2_boxee_0_1_TCPIP_STATUS_ANALOG_OUTPUT 0



/*
* Direct Socket Variables
*/

#define __S2_boxee_0_1_TCPCLIENT_SOCKET 0
#define __S2_boxee_0_1_TCPCLIENT_STRING_MAX_LEN 16384
START_SOCKET_DEFINITION( S2_boxee_0_1, __TCPCLIENT )
{
   int SocketStatus;
   enum ESplusSocketType eSocketType;
   int SocketID;
   void *SocketPtr;
CREATE_SOCKET_STRING( S2_boxee_0_1, SocketRxBuf, __S2_boxee_0_1_TCPCLIENT_STRING_MAX_LEN );
};



/*
* INTEGER_PARAMETER
*/
#define __S2_boxee_0_1_BOXEEPORT_INTEGER_PARAMETER 11
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* INTEGER_PARAMETER
*/
/*
* SIGNED_INTEGER_PARAMETER
*/
/*
* LONG_INTEGER_PARAMETER
*/
/*
* SIGNED_LONG_INTEGER_PARAMETER
*/
/*
* STRING_PARAMETER
*/
#define __S2_boxee_0_1_BOXEEIPADDR$_STRING_PARAMETER 10
#define __S2_boxee_0_1_BOXEEIPADDR$_PARAM_MAX_LEN 16
CREATE_STRING_STRUCT( S2_boxee_0_1, __BOXEEIPADDR$, __S2_boxee_0_1_BOXEEIPADDR$_PARAM_MAX_LEN );


/*
* INTEGER
*/


/*
* LONG_INTEGER
*/


/*
* SIGNED_INTEGER
*/


/*
* SIGNED_LONG_INTEGER
*/


/*
* STRING
*/
#define __S2_boxee_0_1_UPCMD_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_boxee_0_1, __UPCMD, __S2_boxee_0_1_UPCMD_STRING_MAX_LEN );
#define __S2_boxee_0_1_DNCMD_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_boxee_0_1, __DNCMD, __S2_boxee_0_1_DNCMD_STRING_MAX_LEN );
#define __S2_boxee_0_1_LTCMD_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_boxee_0_1, __LTCMD, __S2_boxee_0_1_LTCMD_STRING_MAX_LEN );
#define __S2_boxee_0_1_RTCMD_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_boxee_0_1, __RTCMD, __S2_boxee_0_1_RTCMD_STRING_MAX_LEN );
#define __S2_boxee_0_1_OKCMD_STRING_MAX_LEN 2000
CREATE_STRING_STRUCT( S2_boxee_0_1, __OKCMD, __S2_boxee_0_1_OKCMD_STRING_MAX_LEN );
#define __S2_boxee_0_1_OUT$_STRING_MAX_LEN 1024
CREATE_STRING_STRUCT( S2_boxee_0_1, __OUT$, __S2_boxee_0_1_OUT$_STRING_MAX_LEN );

/*
* STRUCTURE
*/

START_GLOBAL_VAR_STRUCT( S2_boxee_0_1 )
{
   void* InstancePtr;
   struct GenericOutputString_s sGenericOutStr;
   unsigned short LastModifiedArrayIndex;

   DECLARE_STRING_STRUCT( S2_boxee_0_1, __UPCMD );
   DECLARE_STRING_STRUCT( S2_boxee_0_1, __DNCMD );
   DECLARE_STRING_STRUCT( S2_boxee_0_1, __LTCMD );
   DECLARE_STRING_STRUCT( S2_boxee_0_1, __RTCMD );
   DECLARE_STRING_STRUCT( S2_boxee_0_1, __OKCMD );
   DECLARE_STRING_STRUCT( S2_boxee_0_1, __OUT$ );
   DECLARE_SOCKET( S2_boxee_0_1, __TCPCLIENT );
   DECLARE_STRING_STRUCT( S2_boxee_0_1, __BOXEEIPADDR$ );
};

START_NVRAM_VAR_STRUCT( S2_boxee_0_1 )
{
};



#endif //__S2_BOXEE_0_1_H__

