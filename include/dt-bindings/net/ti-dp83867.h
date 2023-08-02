/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Device Tree constants for the Texas Instruments DP83867 PHY
 *
 * Author: Dan Murphy <dmurphy@ti.com>
 *
 * Copyright:   (C) 2015 Texas Instruments, Inc.
 */

#ifndef _DT_BINDINGS_TI_DP83867_H
#define _DT_BINDINGS_TI_DP83867_H

#define DP83867_DEVADDR		0x1f

#define MII_DP83867_PHYCTRL	0x10
#define MII_DP83867_MICR	0x12
#define MII_DP83867_CFG2	0x14
#define MII_DP83867_BISCR	0x16

#define MII_MMD_CTRL		0x0d
#define MII_MMD_DATA		0x0e

#define DP83867_CTRL		0x1f

/* Extended Registers */
#define DP83867_LEDCR1		0x0018
#define DP83867_LEDCR2		0x0019
#define DP83867_RGMIICTL	0x0032
#define DP83867_RGMIIDCTL	0x0086
#define DP83867_IO_MUX_CFG	0x0170

/* MMD access */
#define MII_MMD_CTRL_DEVAD_MASK	0x1f
#define MII_MMD_CTRL_ADDR	0x0000
#define MII_MMD_CTRL_NOINCR	0x4000
#define MII_MMD_CTRL_INCR_RDWT	0x8000
#define MII_MMD_CTRL_INCR_ON_WT	0xC000

/* PHY CTRL */
#define DP83867_PHYCR_FIFO_DEPTH_SHIFT		14
#define DP83867_MDI_CROSSOVER		5
#define DP83867_MDI_CROSSOVER_AUTO	2
#define DP83867_MDI_CROSSOVER_MDIX	2
#define DP83867_PHYCTRL_SGMIIEN			0x0800
#define DP83867_PHYCTRL_RXFIFO_SHIFT	12
#define DP83867_PHYCTRL_TXFIFO_SHIFT	14

#define DP83867_PHYCR_FIFO_DEPTH_3_B_NIB	0x00
#define DP83867_PHYCR_FIFO_DEPTH_4_B_NIB	0x01
#define DP83867_PHYCR_FIFO_DEPTH_6_B_NIB	0x02
#define DP83867_PHYCR_FIFO_DEPTH_8_B_NIB	0x03

/* RGMIIDCTL internal delay for rx and tx */
#define	DP83867_RGMIIDCTL_250_PS	0x0
#define	DP83867_RGMIIDCTL_500_PS	0x1
#define	DP83867_RGMIIDCTL_750_PS	0x2
#define	DP83867_RGMIIDCTL_1_NS		0x3
#define	DP83867_RGMIIDCTL_1_25_NS	0x4
#define	DP83867_RGMIIDCTL_1_50_NS	0x5
#define	DP83867_RGMIIDCTL_1_75_NS	0x6
#define	DP83867_RGMIIDCTL_2_00_NS	0x7
#define	DP83867_RGMIIDCTL_2_25_NS	0x8
#define	DP83867_RGMIIDCTL_2_50_NS	0x9
#define	DP83867_RGMIIDCTL_2_75_NS	0xa
#define	DP83867_RGMIIDCTL_3_00_NS	0xb
#define	DP83867_RGMIIDCTL_3_25_NS	0xc
#define	DP83867_RGMIIDCTL_3_50_NS	0xd
#define	DP83867_RGMIIDCTL_3_75_NS	0xe
#define	DP83867_RGMIIDCTL_4_00_NS	0xf

/* IO_MUX_CFG - Clock output selection */
#define DP83867_CLK_O_SEL_CHN_A_RCLK		0x0
#define DP83867_CLK_O_SEL_CHN_B_RCLK		0x1
#define DP83867_CLK_O_SEL_CHN_C_RCLK		0x2
#define DP83867_CLK_O_SEL_CHN_D_RCLK		0x3
#define DP83867_CLK_O_SEL_CHN_A_RCLK_DIV5	0x4
#define DP83867_CLK_O_SEL_CHN_B_RCLK_DIV5	0x5
#define DP83867_CLK_O_SEL_CHN_C_RCLK_DIV5	0x6
#define DP83867_CLK_O_SEL_CHN_D_RCLK_DIV5	0x7
#define DP83867_CLK_O_SEL_CHN_A_TCLK		0x8
#define DP83867_CLK_O_SEL_CHN_B_TCLK		0x9
#define DP83867_CLK_O_SEL_CHN_C_TCLK		0xA
#define DP83867_CLK_O_SEL_CHN_D_TCLK		0xB
#define DP83867_CLK_O_SEL_REF_CLK		0xC
/* Special flag to indicate clock should be off */
#define DP83867_CLK_O_SEL_OFF			0xFFFFFFFF

/* LED mode selelctor (LEDCR1) */
/* Receive Error */
#define MII_DP83867_LEDCR1_LED_SEL_RX_ERR			(14)
/* Receive Error or Transmit Error */
#define MII_DP83867_LEDCR1_LED_SEL_RX_TX_ERR		(13)
/* Link established, blink for transmit or receive activity */
#define MII_DP83867_LEDCR1_LED_SEL_LE_RX_TX_ACT		(11)
/* Full duplex */
#define MII_DP83867_LEDCR1_LED_SEL_FDX				(10)
/* 100/1000BT link established */
#define MII_DP83867_LEDCR1_LED_SEL_100_1000BT_LE	(9)
/* 10/100BT link established */
#define MII_DP83867_LEDCR1_LED_SEL_10_100BT_LE		(8)
/* 10BT link established */
#define MII_DP83867_LEDCR1_LED_SEL_10BT_LE			(7)
/* 100 BTX link established */
#define MII_DP83867_LEDCR1_LED_SEL_100BTX_LE		(6)
/* 1000BT link established */
#define MII_DP83867_LEDCR1_LED_SEL_1000BT_LE		(5)
/* Collision detected */
#define MII_DP83867_LEDCR1_LED_SEL_COL_DET			(4)
/* Receive activity */
#define MII_DP83867_LEDCR1_LED_SEL_RX_ACT			(3)
/* Transmit activity */
#define MII_DP83867_LEDCR1_LED_SEL_TX_ACT			(2)
/* Receive or Transmit activity */
#define MII_DP83867_LEDCR1_LED_SEL_RX_TX_ACT		(1)
/* Link established */
#define MII_DP83867_LEDCR1_LED_SEL_LE				(0)

#endif
