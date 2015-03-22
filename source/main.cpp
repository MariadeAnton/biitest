#include <bitstream/mpeg/ts.h>


int main()
{
	uint8_t pkt[188];

	return ts_get_pid(pkt);
}
