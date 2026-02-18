# file: block_design_mdm_1_6.xdc
create_clock -period 33.333 [get_pins {Use*.BSCAN*/*/DRCK}]
create_clock -period 33.333 [get_pins {Use*.BSCAN*/*/UPDATE}]
set_clock_groups -asynchronous -group [get_clocks -of_objects [get_pins "Use*.BSCAN*/*/DRCK"]]
set_clock_groups -asynchronous -group [get_clocks -of_objects [get_pins "Use*.BSCAN*/*/UPDATE"]]
set_false_path -through [get_pins "Use*.BSCAN*/*/CAPTURE"]
set_false_path -through [get_pins "Use*.BSCAN*/*/SEL"]
set_false_path -through [get_pins "Use*.BSCAN*/*/SHIFT"]
set_false_path -through [get_pins "Use*.BSCAN*/*/TDI"]
create_generated_clock -source [get_ports S_AXI_ACLK] -divide_by 4 [get_pins "*/*.DbgReg_DRCK*/Q"]
create_generated_clock -source [get_ports S_AXI_ACLK] -divide_by 8 [get_pins "*/*.DbgReg_UPDATE*/Q"]
set_clock_groups -asynchronous -group [get_clocks -of_objects [get_pins "*/*.DbgReg_DRCK*/Q"]]
set_clock_groups -asynchronous -group [get_clocks -of_objects [get_pins "*/*.DbgReg_UPDATE*/Q"]]
set_clock_groups -logically_exclusive  -group [get_clocks -of_objects [get_pins "Use*.BSCAN*/*/DRCK"]] -group [get_clocks -of_objects [get_pins "Use*.BSCAN*/*/UPDATE"]] -group [get_clocks -of_objects [get_pins "*/*.DbgReg_DRCK*/Q"]] -group [get_clocks -of_objects [get_pins "*/*.DbgReg_UPDATE*/Q"]]

create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-10 -description "Debug protocol ensures stable signals" \
  -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Debug_SYS_Rst_i_reg/C]

# Methodology waivers for internal BSCAN clock constraints
create_waiver -internal -scoped -user mdm -tags 12436 -type METHODOLOGY -id TIMING-54 \
  -object [get_clocks -quiet -of_objects [get_pins "Use*.BSCAN*/*/DRCK"]] \
  -description "Avoid warning for valid DRCK clock constraint"
create_waiver -internal -scoped -user mdm -tags 12436 -type METHODOLOGY -id TIMING-54 \
  -object [get_clocks -quiet -of_objects [get_pins "Use*.BSCAN*/*/UPDATE"]] \
  -description "Avoid warning for valid UPDATE clock constraint"
create_waiver -internal -scoped -user mdm -tags 12436 -type METHODOLOGY -id TIMING-54 \
  -object [get_clocks -quiet -of_objects [get_pins "MDM_Core_I1/Use_Dbg_Reg_Access.DbgReg_DRCK_i_reg/Q"]] \
  -description "Avoid warning for valid DRCK clock constraint"
create_waiver -internal -scoped -user mdm -tags 12436 -type METHODOLOGY -id TIMING-54 \
  -object [get_clocks -quiet -of_objects [get_pins "MDM_Core_I1/Use_Dbg_Reg_Access.DbgReg_UPDATE_i_reg/Q"]] \
  -description "Avoid warning for valid UPDATE clock constraint"

# Waivers for serial debug interface
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-13 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Serial_Unified_Completion.*/C]

create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Serial_Unified_Completion.*/D]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-15 -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Serial_Unified_Completion.*/D]

# Waivers for internal BSCAN
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -from [get_pins -quiet Use_E2.BSCAN_I/Use_E2.BSCANE2_I/UPDATE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-15 -description "Debug protocol ensures stable signals" -from [get_pins -quiet Use_E2.BSCAN_I/Use_E2.BSCANE2_I/UPDATE]

# Waivers for BSCAN
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-13 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-13 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/*/C*]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-13 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/*/O]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-15 -description "Debug protocol ensures stable signals" -from [list [get_pins -quiet {MDM_Core_I1/*/C MDM_Core_I1/JTAG_CONTROL_I/*/C}]]

create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/*/CE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/CE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/*/CE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [list [get_pins -quiet {MDM_Core_I1/JTAG_CONTROL_I/*/D MDM_Core_I1/JTAG_CONTROL_I/*/R}]]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-7  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/PRE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-7  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/*/CLR]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-15 -description "Debug protocol ensures stable signals" -to [list [get_pins -quiet {MDM_Core_I1/JTAG_CONTROL_I/*/R MDM_Core_I1/JTAG_CONTROL_I/*/*/R}]]


# Waivers for memory access from debug
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-10 -description "Debug protocol ensures stable signals" -from [get_pins -quiet Use_Bus_MASTER.*/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-17 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Dbg_Mem_Access.*/C]

create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [get_pins -quiet Use_Bus_MASTER.*/*/D]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-7  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Dbg_Mem_Access.*/CLR]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-15 -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Dbg_Mem_Access.*/D]

# Waivers for debug register access
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -from [get_pins -quiet Use_Dbg_Reg_Access.*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/Use_Dbg_Reg_Access.*/Q]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-4  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-7  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/Use_Dbg_Reg_Access.*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-8  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/Use_Dbg_Reg_Access.*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-10 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-11 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/Use_Dbg_Reg_Access.*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-13 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/*/C]

create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-1  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/*/D]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-2  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/*/D]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-2  -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/*/CE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-7  -description "Debug protocol ensures stable signals" -to [get_pins -quiet Use_Dbg_Reg_Access.*/CLR]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-7  -description "Debug protocol ensures stable signals" -to [get_pins -quiet Use_Dbg_Reg_Access.*/PRE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-11 -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/*/CE]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-15 -description "Debug protocol ensures stable signals" -to [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/*/D]

# Waiver for cross trigger
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-2  -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Cross_Trigger.*/C]
create_waiver -internal -scoped -user mdm -tags 12436 -type CDC -id CDC-10 -description "Debug protocol ensures stable signals" -from [get_pins -quiet MDM_Core_I1/JTAG_CONTROL_I/Use_Cross_Trigger.*/C]
