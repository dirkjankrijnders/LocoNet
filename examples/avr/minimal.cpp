#include <LocoNet.h>
#include <avr/io.h>
#include <avr/interrupt.h>

lnMsg        *LnPacket;

int main() {
	LocoNet.init(PB2, PORTB);
	sei();
	while (1) {
	    LnPacket = LocoNet.receive();
	}
}

