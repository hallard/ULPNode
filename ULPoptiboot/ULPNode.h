/*------------------------------------------------------------------------ */
#if defined(__AVR_ATmega168__) || defined(__AVR_ATmega328P__) || defined(__AVR_ATmega88) || defined(__AVR_ATmega8__) || defined(__AVR_ATmega88__)
/*------------------------------------------------------------------------ */


#ifdef PWR_BOOST
#if PWR_BOOST == B0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB0
#elif PWR_BOOST == B1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB1
#elif PWR_BOOST == B2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB2
#elif PWR_BOOST == B3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB3
#elif PWR_BOOST == B4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB4
#elif PWR_BOOST == B5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB5
#elif PWR_BOOST == B6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB6
#elif PWR_BOOST == B7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRB
#define PWR_BOOST_PORT    PORTB
#define PWR_BOOST_PIN     PINB
#define PWR_BOOST	    PINB7

#elif PWR_BOOST == C0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC0
#elif PWR_BOOST == C1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC1
#elif PWR_BOOST == C2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC2
#elif PWR_BOOST == C3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC3
#elif PWR_BOOST == C4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC4
#elif PWR_BOOST == C5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC5
#elif PWR_BOOST == C6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC6
#elif PWR_BOOST == C7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRC
#define PWR_BOOST_PORT    PORTC
#define PWR_BOOST_PIN     PINC
#define PWR_BOOST	    PINC7

#elif PWR_BOOST == D0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND0
#elif PWR_BOOST == D1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND1
#elif PWR_BOOST == D2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND2
#elif PWR_BOOST == D3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND3
#elif PWR_BOOST == D4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND4
#elif PWR_BOOST == D5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND5
#elif PWR_BOOST == D6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND6
#elif PWR_BOOST == D7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRD
#define PWR_BOOST_PORT    PORTD
#define PWR_BOOST_PIN     PIND
#define PWR_BOOST	    PIND7

#elif PWR_BOOST == E0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE0
#elif PWR_BOOST == E1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE1
#elif PWR_BOOST == E2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE2
#elif PWR_BOOST == E3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE3
#elif PWR_BOOST == E4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE4
#elif PWR_BOOST == E5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE5
#elif PWR_BOOST == E6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE6
#elif PWR_BOOST == E7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRE
#define PWR_BOOST_PORT    PORTE
#define PWR_BOOST_PIN     PINE
#define PWR_BOOST	    PINE7

#elif PWR_BOOST == F0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF0
#elif PWR_BOOST == F1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF1
#elif PWR_BOOST == F2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF2
#elif PWR_BOOST == F3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF3
#elif PWR_BOOST == F4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF4
#elif PWR_BOOST == F5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF5
#elif PWR_BOOST == F6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF6
#elif PWR_BOOST == F7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRF
#define PWR_BOOST_PORT    PORTF
#define PWR_BOOST_PIN     PINF
#define PWR_BOOST	    PINF7

#elif PWR_BOOST == G0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING0
#elif PWR_BOOST == G1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING1
#elif PWR_BOOST == G2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING2
#elif PWR_BOOST == G3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING3
#elif PWR_BOOST == G4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING4
#elif PWR_BOOST == G5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING5
#elif PWR_BOOST == G6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING6
#elif PWR_BOOST == G7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRG
#define PWR_BOOST_PORT    PORTG
#define PWR_BOOST_PIN     PING
#define PWR_BOOST	    PING7

#elif PWR_BOOST == H0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH0
#elif PWR_BOOST == H1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH1
#elif PWR_BOOST == H2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH2
#elif PWR_BOOST == H3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH3
#elif PWR_BOOST == H4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH4
#elif PWR_BOOST == H5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH5
#elif PWR_BOOST == H6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH6
#elif PWR_BOOST == H7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRH
#define PWR_BOOST_PORT    PORTH
#define PWR_BOOST_PIN     PINH
#define PWR_BOOST	    PINH7

#elif PWR_BOOST == J0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ0
#elif PWR_BOOST == J1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ1
#elif PWR_BOOST == J2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ2
#elif PWR_BOOST == J3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ3
#elif PWR_BOOST == J4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ4
#elif PWR_BOOST == J5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ5
#elif PWR_BOOST == J6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ6
#elif PWR_BOOST == J7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRJ
#define PWR_BOOST_PORT    PORTJ
#define PWR_BOOST_PIN     PINJ
#define PWR_BOOST	    PINJ7

#elif PWR_BOOST == K0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK0
#elif PWR_BOOST == K1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK1
#elif PWR_BOOST == K2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK2
#elif PWR_BOOST == K3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK3
#elif PWR_BOOST == K4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK4
#elif PWR_BOOST == K5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK5
#elif PWR_BOOST == K6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK6
#elif PWR_BOOST == K7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRK
#define PWR_BOOST_PORT    PORTK
#define PWR_BOOST_PIN     PINK
#define PWR_BOOST	    PINK7

#elif PWR_BOOST == L0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL0
#elif PWR_BOOST == L1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL1
#elif PWR_BOOST == L2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL2
#elif PWR_BOOST == L3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL3
#elif PWR_BOOST == L4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL4
#elif PWR_BOOST == L5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL5
#elif PWR_BOOST == L6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL6
#elif PWR_BOOST == L7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRL
#define PWR_BOOST_PORT    PORTL
#define PWR_BOOST_PIN     PINL
#define PWR_BOOST	    PINL7

#elif PWR_BOOST == A0
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA0
#elif PWR_BOOST == A1
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA1
#elif PWR_BOOST == A2
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA2
#elif PWR_BOOST == A3
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA3
#elif PWR_BOOST == A4
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA4
#elif PWR_BOOST == A5
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA5
#elif PWR_BOOST == A6
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA6
#elif PWR_BOOST == A7
#undef PWR_BOOST
#define PWR_BOOST_DDR     DDRA
#define PWR_BOOST_PORT    PORTA
#define PWR_BOOST_PIN     PINA
#define PWR_BOOST	    PINA7
#else
#error ------------------------------------------------
#error Unrecognized PWR_BOOST name. Should be like "B5"
#error ------------------------------------------------
#endif
#endif 


/*
 * ------------------------------------------------------------------------
 * A bunch of macros to enable the PWR_SENSOR to be specifed as "B5" for bit 5 
 * of port B, and similar.
 */

#ifdef PWR_SENSOR
#if PWR_SENSOR == B0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB0
#elif PWR_SENSOR == B1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB1
#elif PWR_SENSOR == B2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB2
#elif PWR_SENSOR == B3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB3
#elif PWR_SENSOR == B4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB4
#elif PWR_SENSOR == B5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB5
#elif PWR_SENSOR == B6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB6
#elif PWR_SENSOR == B7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRB
#define PWR_SENSOR_PORT    PORTB
#define PWR_SENSOR_PIN     PINB
#define PWR_SENSOR	    PINB7

#elif PWR_SENSOR == C0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC0
#elif PWR_SENSOR == C1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC1
#elif PWR_SENSOR == C2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC2
#elif PWR_SENSOR == C3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC3
#elif PWR_SENSOR == C4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC4
#elif PWR_SENSOR == C5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC5
#elif PWR_SENSOR == C6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC6
#elif PWR_SENSOR == C7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRC
#define PWR_SENSOR_PORT    PORTC
#define PWR_SENSOR_PIN     PINC
#define PWR_SENSOR	    PINC7

#elif PWR_SENSOR == D0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND0
#elif PWR_SENSOR == D1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND1
#elif PWR_SENSOR == D2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND2
#elif PWR_SENSOR == D3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND3
#elif PWR_SENSOR == D4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND4
#elif PWR_SENSOR == D5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND5
#elif PWR_SENSOR == D6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND6
#elif PWR_SENSOR == D7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRD
#define PWR_SENSOR_PORT    PORTD
#define PWR_SENSOR_PIN     PIND
#define PWR_SENSOR	    PIND7

#elif PWR_SENSOR == E0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE0
#elif PWR_SENSOR == E1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE1
#elif PWR_SENSOR == E2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE2
#elif PWR_SENSOR == E3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE3
#elif PWR_SENSOR == E4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE4
#elif PWR_SENSOR == E5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE5
#elif PWR_SENSOR == E6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE6
#elif PWR_SENSOR == E7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRE
#define PWR_SENSOR_PORT    PORTE
#define PWR_SENSOR_PIN     PINE
#define PWR_SENSOR	    PINE7

#elif PWR_SENSOR == F0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF0
#elif PWR_SENSOR == F1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF1
#elif PWR_SENSOR == F2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF2
#elif PWR_SENSOR == F3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF3
#elif PWR_SENSOR == F4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF4
#elif PWR_SENSOR == F5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF5
#elif PWR_SENSOR == F6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF6
#elif PWR_SENSOR == F7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRF
#define PWR_SENSOR_PORT    PORTF
#define PWR_SENSOR_PIN     PINF
#define PWR_SENSOR	    PINF7

#elif PWR_SENSOR == G0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING0
#elif PWR_SENSOR == G1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING1
#elif PWR_SENSOR == G2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING2
#elif PWR_SENSOR == G3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING3
#elif PWR_SENSOR == G4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING4
#elif PWR_SENSOR == G5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING5
#elif PWR_SENSOR == G6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING6
#elif PWR_SENSOR == G7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRG
#define PWR_SENSOR_PORT    PORTG
#define PWR_SENSOR_PIN     PING
#define PWR_SENSOR	    PING7

#elif PWR_SENSOR == H0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH0
#elif PWR_SENSOR == H1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH1
#elif PWR_SENSOR == H2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH2
#elif PWR_SENSOR == H3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH3
#elif PWR_SENSOR == H4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH4
#elif PWR_SENSOR == H5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH5
#elif PWR_SENSOR == H6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH6
#elif PWR_SENSOR == H7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRH
#define PWR_SENSOR_PORT    PORTH
#define PWR_SENSOR_PIN     PINH
#define PWR_SENSOR	    PINH7

#elif PWR_SENSOR == J0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ0
#elif PWR_SENSOR == J1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ1
#elif PWR_SENSOR == J2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ2
#elif PWR_SENSOR == J3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ3
#elif PWR_SENSOR == J4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ4
#elif PWR_SENSOR == J5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ5
#elif PWR_SENSOR == J6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ6
#elif PWR_SENSOR == J7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRJ
#define PWR_SENSOR_PORT    PORTJ
#define PWR_SENSOR_PIN     PINJ
#define PWR_SENSOR	    PINJ7

#elif PWR_SENSOR == K0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK0
#elif PWR_SENSOR == K1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK1
#elif PWR_SENSOR == K2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK2
#elif PWR_SENSOR == K3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK3
#elif PWR_SENSOR == K4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK4
#elif PWR_SENSOR == K5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK5
#elif PWR_SENSOR == K6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK6
#elif PWR_SENSOR == K7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRK
#define PWR_SENSOR_PORT    PORTK
#define PWR_SENSOR_PIN     PINK
#define PWR_SENSOR	    PINK7

#elif PWR_SENSOR == L0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL0
#elif PWR_SENSOR == L1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL1
#elif PWR_SENSOR == L2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL2
#elif PWR_SENSOR == L3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL3
#elif PWR_SENSOR == L4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL4
#elif PWR_SENSOR == L5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL5
#elif PWR_SENSOR == L6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL6
#elif PWR_SENSOR == L7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRL
#define PWR_SENSOR_PORT    PORTL
#define PWR_SENSOR_PIN     PINL
#define PWR_SENSOR	    PINL7

#elif PWR_SENSOR == A0
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA0
#elif PWR_SENSOR == A1
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA1
#elif PWR_SENSOR == A2
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA2
#elif PWR_SENSOR == A3
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA3
#elif PWR_SENSOR == A4
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA4
#elif PWR_SENSOR == A5
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA5
#elif PWR_SENSOR == A6
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA6
#elif PWR_SENSOR == A7
#undef PWR_SENSOR
#define PWR_SENSOR_DDR     DDRA
#define PWR_SENSOR_PORT    PORTA
#define PWR_SENSOR_PIN     PINA
#define PWR_SENSOR	    PINA7
#else
#error -------------------------------------------------
#error Unrecognized PWR_SENSOR name. Should be like "B5"
#error -------------------------------------------------
#endif
#endif


/*
 * ------------------------------------------------------------------------
 * A bunch of macros to enable the PWR_RF to be specifed as "B5" for bit 5 
 * of port B, and similar.
 */

#ifdef PWR_RF
#if PWR_RF == B0
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB0
#elif PWR_RF == B1
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB1
#elif PWR_RF == B2
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB2
#elif PWR_RF == B3
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB3
#elif PWR_RF == B4
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB4
#elif PWR_RF == B5
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB5
#elif PWR_RF == B6
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB6
#elif PWR_RF == B7
#undef PWR_RF
#define PWR_RF_DDR     DDRB
#define PWR_RF_PORT    PORTB
#define PWR_RF_PIN     PINB
#define PWR_RF	    PINB7

#elif PWR_RF == C0
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC0
#elif PWR_RF == C1
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC1
#elif PWR_RF == C2
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC2
#elif PWR_RF == C3
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC3
#elif PWR_RF == C4
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC4
#elif PWR_RF == C5
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC5
#elif PWR_RF == C6
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC6
#elif PWR_RF == C7
#undef PWR_RF
#define PWR_RF_DDR     DDRC
#define PWR_RF_PORT    PORTC
#define PWR_RF_PIN     PINC
#define PWR_RF	    PINC7

#elif PWR_RF == D0
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND0
#elif PWR_RF == D1
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND1
#elif PWR_RF == D2
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND2
#elif PWR_RF == D3
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND3
#elif PWR_RF == D4
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND4
#elif PWR_RF == D5
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND5
#elif PWR_RF == D6
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND6
#elif PWR_RF == D7
#undef PWR_RF
#define PWR_RF_DDR     DDRD
#define PWR_RF_PORT    PORTD
#define PWR_RF_PIN     PIND
#define PWR_RF	    PIND7

#elif PWR_RF == E0
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE0
#elif PWR_RF == E1
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE1
#elif PWR_RF == E2
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE2
#elif PWR_RF == E3
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE3
#elif PWR_RF == E4
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE4
#elif PWR_RF == E5
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE5
#elif PWR_RF == E6
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE6
#elif PWR_RF == E7
#undef PWR_RF
#define PWR_RF_DDR     DDRE
#define PWR_RF_PORT    PORTE
#define PWR_RF_PIN     PINE
#define PWR_RF	    PINE7

#elif PWR_RF == F0
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF0
#elif PWR_RF == F1
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF1
#elif PWR_RF == F2
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF2
#elif PWR_RF == F3
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF3
#elif PWR_RF == F4
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF4
#elif PWR_RF == F5
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF5
#elif PWR_RF == F6
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF6
#elif PWR_RF == F7
#undef PWR_RF
#define PWR_RF_DDR     DDRF
#define PWR_RF_PORT    PORTF
#define PWR_RF_PIN     PINF
#define PWR_RF	    PINF7

#elif PWR_RF == G0
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING0
#elif PWR_RF == G1
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING1
#elif PWR_RF == G2
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING2
#elif PWR_RF == G3
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING3
#elif PWR_RF == G4
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING4
#elif PWR_RF == G5
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING5
#elif PWR_RF == G6
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING6
#elif PWR_RF == G7
#undef PWR_RF
#define PWR_RF_DDR     DDRG
#define PWR_RF_PORT    PORTG
#define PWR_RF_PIN     PING
#define PWR_RF	    PING7

#elif PWR_RF == H0
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH0
#elif PWR_RF == H1
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH1
#elif PWR_RF == H2
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH2
#elif PWR_RF == H3
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH3
#elif PWR_RF == H4
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH4
#elif PWR_RF == H5
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH5
#elif PWR_RF == H6
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH6
#elif PWR_RF == H7
#undef PWR_RF
#define PWR_RF_DDR     DDRH
#define PWR_RF_PORT    PORTH
#define PWR_RF_PIN     PINH
#define PWR_RF	    PINH7

#elif PWR_RF == J0
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ0
#elif PWR_RF == J1
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ1
#elif PWR_RF == J2
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ2
#elif PWR_RF == J3
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ3
#elif PWR_RF == J4
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ4
#elif PWR_RF == J5
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ5
#elif PWR_RF == J6
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ6
#elif PWR_RF == J7
#undef PWR_RF
#define PWR_RF_DDR     DDRJ
#define PWR_RF_PORT    PORTJ
#define PWR_RF_PIN     PINJ
#define PWR_RF	    PINJ7

#elif PWR_RF == K0
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK0
#elif PWR_RF == K1
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK1
#elif PWR_RF == K2
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK2
#elif PWR_RF == K3
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK3
#elif PWR_RF == K4
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK4
#elif PWR_RF == K5
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK5
#elif PWR_RF == K6
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK6
#elif PWR_RF == K7
#undef PWR_RF
#define PWR_RF_DDR     DDRK
#define PWR_RF_PORT    PORTK
#define PWR_RF_PIN     PINK
#define PWR_RF	    PINK7

#elif PWR_RF == L0
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL0
#elif PWR_RF == L1
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL1
#elif PWR_RF == L2
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL2
#elif PWR_RF == L3
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL3
#elif PWR_RF == L4
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL4
#elif PWR_RF == L5
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL5
#elif PWR_RF == L6
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL6
#elif PWR_RF == L7
#undef PWR_RF
#define PWR_RF_DDR     DDRL
#define PWR_RF_PORT    PORTL
#define PWR_RF_PIN     PINL
#define PWR_RF	    PINL7

#elif PWR_RF == A0
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA0
#elif PWR_RF == A1
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA1
#elif PWR_RF == A2
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA2
#elif PWR_RF == A3
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA3
#elif PWR_RF == A4
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA4
#elif PWR_RF == A5
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA5
#elif PWR_RF == A6
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA6
#elif PWR_RF == A7
#undef PWR_RF
#define PWR_RF_DDR     DDRA
#define PWR_RF_PORT    PORTA
#define PWR_RF_PIN     PINA
#define PWR_RF	    PINA7
#else
#error ---------------------------------------------
#error Unrecognized PWR_RF name. Should be like "B5"
#error ---------------------------------------------
#endif
#endif


/*
 * ------------------------------------------------------------------------
 * A bunch of macros to enable the WAKE_SWITCH to be specifed as "D5" for bit 4
 * of port B, and similar.
 */

 #ifdef WAKE_SWITCH
#if WAKE_SWITCH == B0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB0
#elif WAKE_SWITCH == B1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB1
#elif WAKE_SWITCH == B2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB2
#elif WAKE_SWITCH == B3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB3
#elif WAKE_SWITCH == B4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB4
#elif WAKE_SWITCH == B5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB5
#elif WAKE_SWITCH == B6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB6
#elif WAKE_SWITCH == B7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRB
#define WAKE_SWITCH_PORT    PORTB
#define WAKE_SWITCH_PIN     PINB
#define WAKE_SWITCH	    PINB7

#elif WAKE_SWITCH == C0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC0
#elif WAKE_SWITCH == C1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC1
#elif WAKE_SWITCH == C2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC2
#elif WAKE_SWITCH == C3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC3
#elif WAKE_SWITCH == C4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC4
#elif WAKE_SWITCH == C5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC5
#elif WAKE_SWITCH == C6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC6
#elif WAKE_SWITCH == C7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRC
#define WAKE_SWITCH_PORT    PORTC
#define WAKE_SWITCH_PIN     PINC
#define WAKE_SWITCH	    PINC7

#elif WAKE_SWITCH == D0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND0
#elif WAKE_SWITCH == D1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND1
#elif WAKE_SWITCH == D2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND2
#elif WAKE_SWITCH == D3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND3
#elif WAKE_SWITCH == D4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND4
#elif WAKE_SWITCH == D5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND5
#elif WAKE_SWITCH == D6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND6
#elif WAKE_SWITCH == D7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRD
#define WAKE_SWITCH_PORT    PORTD
#define WAKE_SWITCH_PIN     PIND
#define WAKE_SWITCH	    PIND7

#elif WAKE_SWITCH == E0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE0
#elif WAKE_SWITCH == E1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE1
#elif WAKE_SWITCH == E2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE2
#elif WAKE_SWITCH == E3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE3
#elif WAKE_SWITCH == E4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE4
#elif WAKE_SWITCH == E5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE5
#elif WAKE_SWITCH == E6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE6
#elif WAKE_SWITCH == E7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRE
#define WAKE_SWITCH_PORT    PORTE
#define WAKE_SWITCH_PIN     PINE
#define WAKE_SWITCH	    PINE7

#elif WAKE_SWITCH == F0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF0
#elif WAKE_SWITCH == F1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF1
#elif WAKE_SWITCH == F2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF2
#elif WAKE_SWITCH == F3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF3
#elif WAKE_SWITCH == F4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF4
#elif WAKE_SWITCH == F5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF5
#elif WAKE_SWITCH == F6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF6
#elif WAKE_SWITCH == F7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRF
#define WAKE_SWITCH_PORT    PORTF
#define WAKE_SWITCH_PIN     PINF
#define WAKE_SWITCH	    PINF7

#elif WAKE_SWITCH == G0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING0
#elif WAKE_SWITCH == G1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING1
#elif WAKE_SWITCH == G2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING2
#elif WAKE_SWITCH == G3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING3
#elif WAKE_SWITCH == G4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING4
#elif WAKE_SWITCH == G5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING5
#elif WAKE_SWITCH == G6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING6
#elif WAKE_SWITCH == G7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRG
#define WAKE_SWITCH_PORT    PORTG
#define WAKE_SWITCH_PIN     PING
#define WAKE_SWITCH	    PING7

#elif WAKE_SWITCH == H0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH0
#elif WAKE_SWITCH == H1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH1
#elif WAKE_SWITCH == H2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH2
#elif WAKE_SWITCH == H3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH3
#elif WAKE_SWITCH == H4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH4
#elif WAKE_SWITCH == H5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH5
#elif WAKE_SWITCH == H6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH6
#elif WAKE_SWITCH == H7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRH
#define WAKE_SWITCH_PORT    PORTH
#define WAKE_SWITCH_PIN     PINH
#define WAKE_SWITCH	    PINH7

#elif WAKE_SWITCH == J0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ0
#elif WAKE_SWITCH == J1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ1
#elif WAKE_SWITCH == J2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ2
#elif WAKE_SWITCH == J3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ3
#elif WAKE_SWITCH == J4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ4
#elif WAKE_SWITCH == J5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ5
#elif WAKE_SWITCH == J6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ6
#elif WAKE_SWITCH == J7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRJ
#define WAKE_SWITCH_PORT    PORTJ
#define WAKE_SWITCH_PIN     PINJ
#define WAKE_SWITCH	    PINJ7

#elif WAKE_SWITCH == K0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK0
#elif WAKE_SWITCH == K1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK1
#elif WAKE_SWITCH == K2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK2
#elif WAKE_SWITCH == K3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK3
#elif WAKE_SWITCH == K4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK4
#elif WAKE_SWITCH == K5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK5
#elif WAKE_SWITCH == K6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK6
#elif WAKE_SWITCH == K7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRK
#define WAKE_SWITCH_PORT    PORTK
#define WAKE_SWITCH_PIN     PINK
#define WAKE_SWITCH	    PINK7

#elif WAKE_SWITCH == L0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL0
#elif WAKE_SWITCH == L1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL1
#elif WAKE_SWITCH == L2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL2
#elif WAKE_SWITCH == L3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL3
#elif WAKE_SWITCH == L4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL4
#elif WAKE_SWITCH == L5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL5
#elif WAKE_SWITCH == L6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL6
#elif WAKE_SWITCH == L7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRL
#define WAKE_SWITCH_PORT    PORTL
#define WAKE_SWITCH_PIN     PINL
#define WAKE_SWITCH	    PINL7

#elif WAKE_SWITCH == A0
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA0
#elif WAKE_SWITCH == A1
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA1
#elif WAKE_SWITCH == A2
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA2
#elif WAKE_SWITCH == A3
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA3
#elif WAKE_SWITCH == A4
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA4
#elif WAKE_SWITCH == A5
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA5
#elif WAKE_SWITCH == A6
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA6
#elif WAKE_SWITCH == A7
#undef WAKE_SWITCH
#define WAKE_SWITCH_DDR     DDRA
#define WAKE_SWITCH_PORT    PORTA
#define WAKE_SWITCH_PIN     PINA
#define WAKE_SWITCH	    PINA7
#else
#error --------------------------------------------------
#error Unrecognized WAKE_SWITCH name. Should be like "D4"
#error --------------------------------------------------
#endif
#endif


/*
 * ------------------------------------------------------------------------
 * A bunch of macros to enable the WS2812 to be specifed as "D6" for bit 6
 * of port B, and similar.
 */

#ifdef WS2812
#if WS2812 == B0
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB0
#elif WS2812 == B1
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB1
#elif WS2812 == B2
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB2
#elif WS2812 == B3
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB3
#elif WS2812 == B4
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB4
#elif WS2812 == B5
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB5
#elif WS2812 == B6
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB6
#elif WS2812 == B7
#undef WS2812
#define WS2812_DDR     DDRB
#define WS2812_PORT    PORTB
#define WS2812_PIN     PINB
#define WS2812	    PINB7

#elif WS2812 == C0
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC0
#elif WS2812 == C1
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC1
#elif WS2812 == C2
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC2
#elif WS2812 == C3
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC3
#elif WS2812 == C4
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC4
#elif WS2812 == C5
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC5
#elif WS2812 == C6
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC6
#elif WS2812 == C7
#undef WS2812
#define WS2812_DDR     DDRC
#define WS2812_PORT    PORTC
#define WS2812_PIN     PINC
#define WS2812	    PINC7

#elif WS2812 == D0
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND0
#elif WS2812 == D1
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND1
#elif WS2812 == D2
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND2
#elif WS2812 == D3
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND3
#elif WS2812 == D4
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND4
#elif WS2812 == D5
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND5
#elif WS2812 == D6
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND6
#elif WS2812 == D7
#undef WS2812
#define WS2812_DDR     DDRD
#define WS2812_PORT    PORTD
#define WS2812_PIN     PIND
#define WS2812	    PIND7

#elif WS2812 == E0
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE0
#elif WS2812 == E1
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE1
#elif WS2812 == E2
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE2
#elif WS2812 == E3
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE3
#elif WS2812 == E4
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE4
#elif WS2812 == E5
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE5
#elif WS2812 == E6
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE6
#elif WS2812 == E7
#undef WS2812
#define WS2812_DDR     DDRE
#define WS2812_PORT    PORTE
#define WS2812_PIN     PINE
#define WS2812	    PINE7

#elif WS2812 == F0
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF0
#elif WS2812 == F1
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF1
#elif WS2812 == F2
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF2
#elif WS2812 == F3
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF3
#elif WS2812 == F4
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF4
#elif WS2812 == F5
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF5
#elif WS2812 == F6
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF6
#elif WS2812 == F7
#undef WS2812
#define WS2812_DDR     DDRF
#define WS2812_PORT    PORTF
#define WS2812_PIN     PINF
#define WS2812	    PINF7

#elif WS2812 == G0
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING0
#elif WS2812 == G1
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING1
#elif WS2812 == G2
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING2
#elif WS2812 == G3
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING3
#elif WS2812 == G4
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING4
#elif WS2812 == G5
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING5
#elif WS2812 == G6
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING6
#elif WS2812 == G7
#undef WS2812
#define WS2812_DDR     DDRG
#define WS2812_PORT    PORTG
#define WS2812_PIN     PING
#define WS2812	    PING7

#elif WS2812 == H0
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH0
#elif WS2812 == H1
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH1
#elif WS2812 == H2
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH2
#elif WS2812 == H3
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH3
#elif WS2812 == H4
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH4
#elif WS2812 == H5
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH5
#elif WS2812 == H6
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH6
#elif WS2812 == H7
#undef WS2812
#define WS2812_DDR     DDRH
#define WS2812_PORT    PORTH
#define WS2812_PIN     PINH
#define WS2812	    PINH7

#elif WS2812 == J0
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ0
#elif WS2812 == J1
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ1
#elif WS2812 == J2
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ2
#elif WS2812 == J3
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ3
#elif WS2812 == J4
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ4
#elif WS2812 == J5
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ5
#elif WS2812 == J6
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ6
#elif WS2812 == J7
#undef WS2812
#define WS2812_DDR     DDRJ
#define WS2812_PORT    PORTJ
#define WS2812_PIN     PINJ
#define WS2812	    PINJ7

#elif WS2812 == K0
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK0
#elif WS2812 == K1
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK1
#elif WS2812 == K2
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK2
#elif WS2812 == K3
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK3
#elif WS2812 == K4
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK4
#elif WS2812 == K5
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK5
#elif WS2812 == K6
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK6
#elif WS2812 == K7
#undef WS2812
#define WS2812_DDR     DDRK
#define WS2812_PORT    PORTK
#define WS2812_PIN     PINK
#define WS2812	    PINK7

#elif WS2812 == L0
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL0
#elif WS2812 == L1
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL1
#elif WS2812 == L2
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL2
#elif WS2812 == L3
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL3
#elif WS2812 == L4
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL4
#elif WS2812 == L5
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL5
#elif WS2812 == L6
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL6
#elif WS2812 == L7
#undef WS2812
#define WS2812_DDR     DDRL
#define WS2812_PORT    PORTL
#define WS2812_PIN     PINL
#define WS2812	    PINL7

#elif WS2812 == A0
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA0
#elif WS2812 == A1
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA1
#elif WS2812 == A2
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA2
#elif WS2812 == A3
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA3
#elif WS2812 == A4
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA4
#elif WS2812 == A5
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA5
#elif WS2812 == A6
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA6
#elif WS2812 == A7
#undef WS2812
#define WS2812_DDR     DDRA
#define WS2812_PORT    PORTA
#define WS2812_PIN     PINA
#define WS2812	    PINA7
#else
#error ---------------------------------------------
#error Unrecognized WS2812 name. Should be like "D6"
#error ---------------------------------------------
#endif
#endif




#endif