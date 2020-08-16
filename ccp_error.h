#ifndef CCP_ERROR_H
#define CCP_ERROR_H

#define LIBCCP_OK 0

// Function parameter checking
#define LIBCCP_MISSING_ARG -11
#define LIBCCP_NULL_ARG -12

// Buffer size checking
#define LIBCCP_BUFSIZE_NEGATIVE -21
#define LIBCCP_BUFSIZE_TOO_SMALL -22
#define LIBCCP_MSG_TOO_LONG -23

// Se/deserializing messages
#define LIBCCP_WRITE_INVALID_HEADER_TYPE -31
#define LIBCCP_READ_INVALID_HEADER_TYPE -32
#define LIBCCP_READ_INVALID_OP -33
#define LIBCCP_READ_REG_NOT_ALLOWED -34
#define LIBCCP_READ_INVALID_RETURN_REG -35
#define LIBCCP_READ_INVALID_LEFT_REG -36
#define LIBCCP_READ_INVALID_RIGHT_REG -37

// Install message parse errors
#define LIBCCP_INSTALL_TYPE_MISMATCH -41
#define LIBCCP_INSTALL_TOO_MANY_EXPR -42
#define LIBCCP_INSTALL_TOO_MANY_INSTR -43

// Update message parse errors
#define LIBCCP_UPDATE_TYPE_MISMATCH -51
#define LIBCCP_UPDATE_TOO_MANY -52
#define LIBCCP_UPDATE_INVALID_REG_TYPE -53

// Change message parse errors
#define LIBCCP_CHANGE_TYPE_MISMATCH -61
#define LIBCCP_CHANGE_TOO_MANY -62

// Connection object
#define LIBCCP_UNKNOWN_CONNECTION -71
#define LIBCCP_CREATE_PENDING -72
#define LIBCCP_CONNECTION_NOT_INITIALIZED -73

// Datapath programs
#define LIBCCP_PROG_TABLE_FULL -81
#define LIBCCP_PROG_NOT_FOUND -82

// VM instruction execution errors
#define LIBCCP_ADD_INT_OVERFLOW -91
#define LIBCCP_DIV_BY_ZERO -92
#define LIBCCP_MUL_INT_OVERFLOW -93
#define LIBCCP_SUB_INT_UNDERFLOW -94
#define LIBCCP_PRIV_IS_NULL -95
#define LIBCCP_PROG_IS_NULL -96

// Fallback timer
#define LIBCCP_FALLBACK_TIMED_OUT -101

#endif
