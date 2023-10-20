; ToE Vectors
;

; ANSI Vectors.
;
ANSI_init_vec		= $FF90
ANSI_write_vec		= $FF93


; Centronics/TPB Vectors.
;
CEN_TPB_init_vec	= $FF96
CEN_LPT_write_vec	= $FF99


; AY Sound vectors
;
AY_Init_vec		= $FFCC
AY_Userwrite_16_vec	= $FFCF
AY_Userread_16_vec	= $FFD2
AY_Userwrite_vec	= $FFD5
AY_Userread_vec		= $FFD8


; IRQ Subsystem vectors.
;
IRQH_Handler_Init_vec	= $FFDB
IRQH_SetIRQ_vec		= $FFDE
IRQH_ClrIRQ_vec		= $FFE1
IRQH_SystemReport_vec	= $FFE4


; IRQ Countdown Timer Vector.
;
INIT_COUNTDOWN_IRQ_vec	= $FFE7


; ACIA Vectors.
;
ACIA_INI_SYS_vec	= $FF42
ACIA1_init_vec		= $FF45
ACIA2_init_vec		= $FF48
ACIA1out_vec		= $FF4B
ACIA2out_vec		= $FF4E
ACIA1in			= $FF51
ACIA2in			= $FF54


; ToE OS Vectors.
;
SPI_Struct_Init_vec	= $FF57
SPI_Init_vec		= $FF5A
SPI_Xfer_vec		= $FF5D
TOE_PrintStr_vec	= $FF60


; TowerTAPE FS Vectors.
;
TAPE_Leader_vec		= $FF63
TAPE_BlockOut_vec	= $FF66
TAPE_ByteOut_vec	= $FF69
TAPE_BlockIn_vec	= $FF6C
TAPE_ByteIn_vec		= $FF6F
TAPE_init_vec		= $FF72
TAPE_CAT_vec		= $FF75
TAPE_SAVE_BASIC_vec	= $FF78		; Need to check if this one needs to be here.
TAPE_LOAD_BASIC_vec	= $FF7B		; Need to check if this one needs to be here.
TAPE_VERIFY_BASIC_vec	= $FF7E		; Need to check if this one needs to be here.
TAPE_SetKbd_vec		= $FFBA


; I2C-Subsystem Vectors.
;
I2C_Init_vec		= $FF81
I2C_Start_vec		= $FF84
I2C_Stop_vec		= $FF87
I2C_Out_vec		= $FF8A
I2C_In_vec		= $FF8D


; ToE ZP Variables

TOE_MemptrLo		= $E7
TOE_MemptrHi		= $E8


; ToE OS Non-ZP Variables
;

os_outsel		= $520
os_infilt		= $521
os_insel		= $522
MON_CurrAttr		= $523
IRQ_User_vec		= $524
NMI_User_vec		= $526


; ToE OS Bit Definitions
;
ACIA1_out_sw		= @00000001
ANSI_out_sw		= @00000010
CEN_LPT_out_sw		= @00000100
ACIA2_out_sw		= @00001000
OS_input_ACIA1  	= @00000001
OS_input_ACIA2  	= @00001000


; XTRA BASIC Non-ZP Variables.

V_XTRA_PlotMode		= $A10
V_XTRA_Xcoord		= $A11
V_XTRA_Ycoord		= $A12
V_XTRA_PlotPattern	= $A13
V_XTRA_Config		= $A14


; XTRA BASIC (PLOT) configuration bits.
;
XTRA_CFG_silent_b	= @00000001
XTRA_CFG_capped_b	= @00000010
XTRA_CFG_NoChecks_b	= @00000100


; AY System Non-ZP Variables.
;
AY_Reg			= $A00
AY_Data			= $A02
AY_Mask			= $A03
AY_Channel		= $A04
AY_Period		= $A05
AY_Volume		= $A07
AY_Envelope_Period	= $A08
AY_Envelope_Mode	= $A0A


; Table 1.  AY_NOT_ENABLE bitfield.
;
; +---------+-----------+-----------+
; | IN/nOUT |   nNOISE  |   nTONE   |
; +----+----+---+---+---+---+---+---+
; |IOB |IOA | C | B | A | C | B | A |
; +----+----+---+---+---+---+---+---+

AY_bit_nIOB		= @10000000
AY_bit_nIOA		= @01000000
AY_bit_nNOISE_C		= @00100000
AY_bit_nNOISE_B		= @00010000
AY_bit_nNOISE_A		= @00001000
AY_bit_nTONE_C		= @00000100
AY_bit_nTONE_B		= @00000010
AY_bit_nTONE_A		= @00000001
AY_AllOff		= @11111111


; Table 2.  Envelope shape/cycle bitfield.
;
; +--------+--------+--------+--------+--------+--------+--------+--------+
; |   B7   |   B6   |   B5   |   B4   |   B3   |   B2   |   B1   |   B0   |
; +--------+--------+--------+--------+--------+--------+--------+--------+
; |          B7-B4 Not used.          | Cont   | Attack | Alt    | Hold   |
; +--------+--------+--------+--------+--------+--------+--------+--------+
;
; CONTinue causes the pattern to cycle when set.
; Setting Attack makes the envelope counter count up, but when cleared causes a count down instead.
; Setting ALTernate causes the counter to reverse direction at the end of each cycle.
; Setting HOLD limits the envelope generator to one cycle

AY_bit_CONT		= @00001000
AY_bit_ATTACK		= @00000100
AY_bit_ALT		= @00000010
AY_bit_HOLD		= @00000001
