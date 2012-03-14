/*
 * pic18f1330.c - device specific definitions
 *
 * This file is part of the GNU PIC library for SDCC,
 * originally devised by Vangelis Rokas <vrokas AT otenet.gr>
 *
 * It has been automatically generated by inc2h-pic16.pl,
 * (c) 2007 by Raphael Neider <rneider AT web.de>
 *
 * SDCC is licensed under the GNU Public license (GPL) v2. Note that
 * this license covers the code to the compiler and other executables,
 * tbut explicitly does not cover any code or objects generated by sdcc.
 *
 * For pic device libraries and header files which are derived from
 * Microchip header (.inc) and linker script (.lkr) files Microchip
 * requires that "The header files should state that they are only to be
 * used with authentic Microchip devices" which makes them incompatible
 * with the GPL. Pic device libraries and header files are located at
 * non-free/lib and non-free/include directories respectively.
 * Sdcc should be run with the --use-non-free command line option in
 * order to include non-free header files and libraries.
 *
 * See http://sdcc.sourceforge.net/ for the latest information on sdcc.
 */

#include <pic18f1330.h>


__sfr __at (0xF80) PORTA;
volatile __PORTAbits_t __at (0xF80) PORTAbits;

__sfr __at (0xF81) PORTB;
volatile __PORTBbits_t __at (0xF81) PORTBbits;

__sfr __at (0xF82) OVDCONS;
volatile __OVDCONSbits_t __at (0xF82) OVDCONSbits;

__sfr __at (0xF83) OVDCOND;
volatile __OVDCONDbits_t __at (0xF83) OVDCONDbits;

__sfr __at (0xF84) DTCON;
volatile __DTCONbits_t __at (0xF84) DTCONbits;

__sfr __at (0xF85) PWMCON1;
volatile __PWMCON1bits_t __at (0xF85) PWMCON1bits;

__sfr __at (0xF86) PWMCON0;
volatile __PWMCON0bits_t __at (0xF86) PWMCON0bits;

__sfr __at (0xF87) SEVTCMPH;

__sfr __at (0xF88) SEVTCMPL;

__sfr __at (0xF89) LATA;
volatile __LATAbits_t __at (0xF89) LATAbits;

__sfr __at (0xF8A) LATB;
volatile __LATBbits_t __at (0xF8A) LATBbits;

__sfr __at (0xF8B) FLTCONFIG;
volatile __FLTCONFIGbits_t __at (0xF8B) FLTCONFIGbits;

__sfr __at (0xF8C) PDC2H;

__sfr __at (0xF8D) PDC2L;

__sfr __at (0xF8E) PDC1H;

__sfr __at (0xF8F) PDC1L;

__sfr __at (0xF90) PDC0H;

__sfr __at (0xF91) PDC0L;

__sfr __at (0xF92) DDRA;
volatile __DDRAbits_t __at (0xF92) DDRAbits;

__sfr __at (0xF92) TRISA;
volatile __TRISAbits_t __at (0xF92) TRISAbits;

__sfr __at (0xF93) DDRB;
volatile __DDRBbits_t __at (0xF93) DDRBbits;

__sfr __at (0xF93) TRISB;
volatile __TRISBbits_t __at (0xF93) TRISBbits;

__sfr __at (0xF95) PTPERH;

__sfr __at (0xF96) PTPERL;

__sfr __at (0xF97) PTMRH;

__sfr __at (0xF98) PTMRL;

__sfr __at (0xF99) PTCON1;
volatile __PTCON1bits_t __at (0xF99) PTCON1bits;

__sfr __at (0xF9A) PTCON0;
volatile __PTCON0bits_t __at (0xF9A) PTCON0bits;

__sfr __at (0xF9B) OSCTUNE;
volatile __OSCTUNEbits_t __at (0xF9B) OSCTUNEbits;

__sfr __at (0xF9D) PIE1;
volatile __PIE1bits_t __at (0xF9D) PIE1bits;

__sfr __at (0xF9E) PIR1;
volatile __PIR1bits_t __at (0xF9E) PIR1bits;

__sfr __at (0xF9F) IPR1;
volatile __IPR1bits_t __at (0xF9F) IPR1bits;

__sfr __at (0xFA0) PIE2;
volatile __PIE2bits_t __at (0xFA0) PIE2bits;

__sfr __at (0xFA1) PIR2;
volatile __PIR2bits_t __at (0xFA1) PIR2bits;

__sfr __at (0xFA2) IPR2;
volatile __IPR2bits_t __at (0xFA2) IPR2bits;

__sfr __at (0xFA3) PIE3;
volatile __PIE3bits_t __at (0xFA3) PIE3bits;

__sfr __at (0xFA4) PIR3;
volatile __PIR3bits_t __at (0xFA4) PIR3bits;

__sfr __at (0xFA5) IPR3;
volatile __IPR3bits_t __at (0xFA5) IPR3bits;

__sfr __at (0xFA6) EECON1;
volatile __EECON1bits_t __at (0xFA6) EECON1bits;

__sfr __at (0xFA7) EECON2;

__sfr __at (0xFA8) EEDATA;

__sfr __at (0xFA9) EEADR;

__sfr __at (0xFAB) RCSTA;
volatile __RCSTAbits_t __at (0xFAB) RCSTAbits;

__sfr __at (0xFAC) TXSTA;
volatile __TXSTAbits_t __at (0xFAC) TXSTAbits;

__sfr __at (0xFAD) TXREG;

__sfr __at (0xFAE) RCREG;

__sfr __at (0xFAF) SPBRG;

__sfr __at (0xFB0) SPBRGH;

__sfr __at (0xFB4) CMCON;
volatile __CMCONbits_t __at (0xFB4) CMCONbits;

__sfr __at (0xFB5) CVRCON;
volatile __CVRCONbits_t __at (0xFB5) CVRCONbits;

__sfr __at (0xFB8) BAUDCON;
volatile __BAUDCONbits_t __at (0xFB8) BAUDCONbits;

__sfr __at (0xFB8) BAUDCTL;
volatile __BAUDCTLbits_t __at (0xFB8) BAUDCTLbits;

__sfr __at (0xFC0) ADCON2;
volatile __ADCON2bits_t __at (0xFC0) ADCON2bits;

__sfr __at (0xFC1) ADCON1;
volatile __ADCON1bits_t __at (0xFC1) ADCON1bits;

__sfr __at (0xFC2) ADCON0;
volatile __ADCON0bits_t __at (0xFC2) ADCON0bits;

__sfr __at (0xFC3) ADRES;

__sfr __at (0xFC3) ADRESL;

__sfr __at (0xFC4) ADRESH;

__sfr __at (0xFCD) T1CON;
volatile __T1CONbits_t __at (0xFCD) T1CONbits;

__sfr __at (0xFCE) TMR1L;

__sfr __at (0xFCF) TMR1H;

__sfr __at (0xFD0) RCON;
volatile __RCONbits_t __at (0xFD0) RCONbits;

__sfr __at (0xFD1) WDTCON;
volatile __WDTCONbits_t __at (0xFD1) WDTCONbits;

__sfr __at (0xFD2) LVDCON;
volatile __LVDCONbits_t __at (0xFD2) LVDCONbits;

__sfr __at (0xFD3) OSCCON;
volatile __OSCCONbits_t __at (0xFD3) OSCCONbits;

__sfr __at (0xFD5) T0CON;
volatile __T0CONbits_t __at (0xFD5) T0CONbits;

__sfr __at (0xFD6) TMR0L;

__sfr __at (0xFD7) TMR0H;

__sfr __at (0xFD8) STATUS;
volatile __STATUSbits_t __at (0xFD8) STATUSbits;

__sfr __at (0xFD9) FSR2L;

__sfr __at (0xFDA) FSR2H;

__sfr __at (0xFDB) PLUSW2;

__sfr __at (0xFDC) PREINC2;

__sfr __at (0xFDD) POSTDEC2;

__sfr __at (0xFDE) POSTINC2;

__sfr __at (0xFDF) INDF2;

__sfr __at (0xFE0) BSR;

__sfr __at (0xFE1) FSR1L;

__sfr __at (0xFE2) FSR1H;

__sfr __at (0xFE3) PLUSW1;

__sfr __at (0xFE4) PREINC1;

__sfr __at (0xFE5) POSTDEC1;

__sfr __at (0xFE6) POSTINC1;

__sfr __at (0xFE7) INDF1;

__sfr __at (0xFE8) WREG;

__sfr __at (0xFE9) FSR0L;

__sfr __at (0xFEA) FSR0H;

__sfr __at (0xFEB) PLUSW0;

__sfr __at (0xFEC) PREINC0;

__sfr __at (0xFED) POSTDEC0;

__sfr __at (0xFEE) POSTINC0;

__sfr __at (0xFEF) INDF0;

__sfr __at (0xFF0) INTCON3;
volatile __INTCON3bits_t __at (0xFF0) INTCON3bits;

__sfr __at (0xFF1) INTCON2;
volatile __INTCON2bits_t __at (0xFF1) INTCON2bits;

__sfr __at (0xFF2) INTCON;
volatile __INTCONbits_t __at (0xFF2) INTCONbits;

__sfr __at (0xFF3) PROD;

__sfr __at (0xFF3) PRODL;

__sfr __at (0xFF4) PRODH;

__sfr __at (0xFF5) TABLAT;

__sfr __at (0xFF6) TBLPTR;

__sfr __at (0xFF6) TBLPTRL;

__sfr __at (0xFF7) TBLPTRH;

__sfr __at (0xFF8) TBLPTRU;

__sfr __at (0xFF9) PC;

__sfr __at (0xFF9) PCL;

__sfr __at (0xFFA) PCLATH;

__sfr __at (0xFFB) PCLATU;

__sfr __at (0xFFC) STKPTR;
volatile __STKPTRbits_t __at (0xFFC) STKPTRbits;

__sfr __at (0xFFD) TOS;

__sfr __at (0xFFD) TOSL;

__sfr __at (0xFFE) TOSH;

__sfr __at (0xFFF) TOSU;

/* Hack to facilitate using stream_putchar with this family. */
unsigned char SSPBUF;
