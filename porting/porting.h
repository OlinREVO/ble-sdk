#define F_CPU (1000000L)

// all SPI pins are on the same port
#define SPI_DDR         DDRB
#define SPI_PORT        PORTB
#define SPI_PIN         PINB

// pin number 26 (INT2)
#define SPI_RDY         PB5

// pin number 27
#define SPI_REQ         PB6

// pin number 8
#define SPI_MISO        PB0

// pin number 9
#define SPI_MOSI        PB1

// pin number 28
#define SPI_SCK         PB7

// pin number 29
#define RESET_PIN       PD0
#define RESET_PIN_DDR   DDRD
#define RESET_PIN_PORT  PORTD
#define RESET_PIN_PIN   PIND

#define bool            int
#define TRUE            1
#define true            1
#define FALSE           0
#define false           0