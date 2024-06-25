[FIELD_INPUT]
# E-Stop
ESTOP_OK = hm2_7i92.0.7i77.0.0.input-00
ESTOP    = hm2_7i92.0.7i77.0.0.input-06

# Home
HOME_X = lcec.0.FIELD_INPUT.din-0
HOME_Y = lcec.0.FIELD_INPUT.din-1
HOME_Z = lcec.0.FIELD_INPUT.din-2

# Probe
TOOL_PROBE     = lcec.0.FIELD_INPUT.din-6
3D_PROBE       = hm2_7i92.0.7i77.0.0.input-04
3D_PROBE_ERROR = hm2_7i92.0.7i77.0.0.input-05

# DYN-4
DYN_4_X_ALARM = hm2_7i92.0.7i77.0.0.input-08
DYN_4_Y_ALARM = hm2_7i92.0.7i77.0.0.input-09
DYN_4_Z_ALARM = hm2_7i92.0.7i77.0.0.input-10

; DYN_4_X_SERVO_READY = hm2_7i92.0.7i77.0.0.input-12
; DYN_4_Y_SERVO_READY = hm2_7i92.0.7i77.0.0.input-13
; DYN_4_Z_SERVO_READY = hm2_7i92.0.7i77.0.0.input-14

# Encoders
# X_MOTOR_ENCODER  = hm2_7i92.0.encoder.00
X_LINEAR_ENCODER = hm2_7i92.0.encoder.03

# Y_MOTOR_ENCODER  = hm2_7i92.0.encoder.01
Y_LINEAR_ENCODER = hm2_7i92.0.encoder.04

Z_MOTOR_ENCODER  = hm2_7i92.0.encoder.02
# Z_LINEAR_ENCODER = hm2_7i92.0.encoder.05

# Spindle
TOOLCONE_VALID = lcec.0.FIELD_INPUT.din-3
ATC_OPENED = lcec.0.FIELD_INPUT.din-4
ATC_CLOSED = lcec.0.FIELD_INPUT.din-5


[FIELD_OUTPUT]
# Solonoids
AIR_BLANKET    = lcec.0.VALVE_OUT.dout-0
MIST           = lcec.0.VALVE_OUT.dout-1
CONE_CLEAN     = lcec.0.VALVE_OUT.dout-2
SPINDLE_UNLOCK = lcec.0.VALVE_OUT.dout-3
# SPINDLE_LOCK = Mechanically opposite to SPINDLE_UNLOCK
SP_FAN         = hm2_7i92.0.7i77.0.0.output-00

# Devices
# SUCTION_CLEANER = hm2_7i92.0.7i77.0.0.output-07
# VACUUM_PUMP     = hm2_7i92.0.7i77.0.0.output-08
Z_BRAKE         = hm2_7i92.0.7i77.0.0.output-12

# DYN-4
X_RESET = hm2_7i92.0.7i77.0.0.output-09
Y_RESET = hm2_7i92.0.7i77.0.0.output-10
Z_RESET = hm2_7i92.0.7i77.0.0.output-11

