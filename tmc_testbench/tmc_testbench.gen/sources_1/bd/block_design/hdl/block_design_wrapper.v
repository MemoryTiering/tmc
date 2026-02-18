//Copyright 1986-2022 Xilinx, Inc. All Rights Reserved.
//Copyright 2022-2025 Advanced Micro Devices, Inc. All Rights Reserved.
//--------------------------------------------------------------------------------
//Tool Version: Vivado v.2025.2 (win64) Build 6299465 Fri Nov 14 19:35:11 GMT 2025
//Date        : Mon Feb 16 10:34:29 2026
//Host        : Thomas_Laptop running 64-bit major release  (build 9200)
//Command     : generate_target block_design_wrapper.bd
//Design      : block_design_wrapper
//Purpose     : IP block netlist
//--------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

module block_design_wrapper
   (CLK100MHZ,
    reset,
    usb_uart_rxd,
    usb_uart_txd);
  input CLK100MHZ;
  input reset;
  input usb_uart_rxd;
  output usb_uart_txd;

  wire CLK100MHZ;
  wire reset;
  wire usb_uart_rxd;
  wire usb_uart_txd;

  block_design block_design_i
       (.CLK100MHZ(CLK100MHZ),
        .reset(reset),
        .usb_uart_rxd(usb_uart_rxd),
        .usb_uart_txd(usb_uart_txd));
endmodule
