// From PSn00bSDK libpsnoob/include/ioctl.h
// License: Mozilla Public License Version 2.0
// git@github.com:Lameguy64:PSn00bSDK commit 1aa0e17

#ifndef _IOCTL_H
#define _IOCTL_H

#ifndef NULL
#define NULL	0
#endif

#ifndef EOF
#define EOF		-1
#endif

// General
#define FIONBLOCK	(('f'<<8)|1)
#define FIOCSCAN	(('f'<<8)|2)

// disk
#define DIO_FORMAT	(('d'<<8)|1)

#endif
