#include "Icons.h"
#include <avr/pgmspace.h>

const unsigned char iconsTable[][128] PROGMEM = {

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xc0,0X3,0Xff,
	 0Xff,0X80,0X1,0Xff,0Xff,0X80,0X1,0Xff,
	 0Xff,0X80,0X1,0Xff,0Xff,0X80,0X1,0Xff,
	 0Xff,0X80,0X1,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0Xf,0Xff,
	 0Xff,0Xf0,0X1f,0Xff,0Xff,0Xf8,0X1f,0Xff,
	 0Xff,0Xfc,0X3f,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0X80,0X3,0Xff,0Xfd,0X80,0X7,0Xff,0Xc7,
	 0X80,0Xf,0Xff,0Xc7,0X80,0X1f,0Xff,0Xc7,
	 0X80,0X3f,0Xff,0Xfd,0X80,0X7f,0Xfe,0X1,
	 0X80,0Xfe,0X3e,0X39,0X81,0Xfc,0X3e,0X7d,
	 0X83,0Xfe,0X7e,0X7d,0X87,0Xff,0Xbe,0X7d,
	 0X8f,0Xef,0Xbe,0X39,0X9f,0Xcf,0Xbe,0X1,
	 0Xbf,0X87,0X3e,0X3d,0Xbf,0X0,0X3e,0X7d,
	 0Xbe,0X0,0X3e,0X7d,0Xbe,0X0,0X3c,0X7d,
	 0X98,0X0,0X1c,0X11,0X80,0X0,0X0,0X1,
	 0X80,0X0,0X0,0X1,0X80,0X0,0X0,0X1,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff,0Xff},

	{0Xff,0Xf0,0Xf,0Xff,0Xff,0X80,0X1,0Xff,0Xfe,
	 0X0,0X0,0X7f,0Xfc,0X0,0X0,0X3f,0Xf8,0X0,
	 0X0,0X1f,0Xfc,0X1,0X80,0X3f,0Xff,0X82,
	 0X41,0Xff,0Xff,0Xf4,0X2f,0Xff,0Xff,0Xfc,
	 0X3f,0Xff,0Xff,0Xfc,0X3f,0Xff,0Xff,0Xff,
	 0Xff,0Xff,0Xff,0Xf6,0X6f,0Xff,0Xff,0X87,
	 0Xe1,0Xff,0Xfc,0X3,0Xc0,0X3f,0Xe0,0X3,
	 0Xc0,0X7,0X0,0X2,0X40,0X0,0X0,0X2,0X40,
	 0X0,0X0,0X2,0X40,0X0,0X0,0X3,0Xc0,0X0,
	 0X0,0X3,0Xc0,0X0,0X80,0X2,0X40,0X1,0X80,
	 0X2,0X40,0X1,0X80,0X2,0X40,0X1,0Xc0,0X3,
	 0Xc0,0X3,0Xc0,0X3,0Xc0,0X3,0Xe0,0X3,0Xc0,
	 0X7,0Xf0,0X3,0Xc0,0Xf,0Xf8,0X2,0X40,0X1f,
	 0Xfc,0X2,0X40,0X3f,0Xfe,0X2,0X40,0X7f,
	 0Xff,0Xbf,0Xfd,0Xff,0Xff,0Xff,0Xff,0Xff}

};
