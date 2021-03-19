/*
 * PIE_RegisterDefines_PIEIFR6.h
 *
 *  Created on: 12 mar. 2021
 *      Author: vyldram
 */

#ifndef XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR6_H_
#define XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR6_H_

#include <xUtils/Standard/Standard.h>

/********************************************************************************************/
/************************************* PIEIFR6 ***********************************************/
/********************************************************************************************/

/*----------*/
#define PIE_PIEIFR6_R_PIE_SPIA_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_R_PIE_SPIA_RX_BIT    (0U)
#define PIE_PIEIFR6_R_PIE_SPIA_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_SPIA_RX_PEND    ((uint16_t) 0x0001U)

#define PIE_PIEIFR6_PIE_SPIA_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_SPIA_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_SPIA_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_SPIA_TX_MASK    ((uint16_t) 0x0002U)
#define PIE_PIEIFR6_R_PIE_SPIA_TX_BIT    (1U)
#define PIE_PIEIFR6_R_PIE_SPIA_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_SPIA_TX_PEND    ((uint16_t) 0x0002U)

#define PIE_PIEIFR6_PIE_SPIA_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_SPIA_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_SPIA_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_SPIB_RX_MASK    ((uint16_t) 0x0004U)
#define PIE_PIEIFR6_R_PIE_SPIB_RX_BIT    (2U)
#define PIE_PIEIFR6_R_PIE_SPIB_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_SPIB_RX_PEND    ((uint16_t) 0x0004U)

#define PIE_PIEIFR6_PIE_SPIB_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_SPIB_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_SPIB_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_SPIB_TX_MASK    ((uint16_t) 0x0008U)
#define PIE_PIEIFR6_R_PIE_SPIB_TX_BIT    (3U)
#define PIE_PIEIFR6_R_PIE_SPIB_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_SPIB_TX_PEND    ((uint16_t) 0x0008U)

#define PIE_PIEIFR6_PIE_SPIB_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_SPIB_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_SPIB_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_MCBSPA_RX_MASK    ((uint16_t) 0x0010U)
#define PIE_PIEIFR6_R_PIE_MCBSPA_RX_BIT    (4U)
#define PIE_PIEIFR6_R_PIE_MCBSPA_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_MCBSPA_RX_PEND    ((uint16_t) 0x0010U)

#define PIE_PIEIFR6_PIE_MCBSPA_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_MCBSPA_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_MCBSPA_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_MCBSPA_TX_MASK    ((uint16_t) 0x0020U)
#define PIE_PIEIFR6_R_PIE_MCBSPA_TX_BIT    (5U)
#define PIE_PIEIFR6_R_PIE_MCBSPA_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_MCBSPA_TX_PEND    ((uint16_t) 0x0020U)

#define PIE_PIEIFR6_PIE_MCBSPA_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_MCBSPA_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_MCBSPA_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_MCBSPB_RX_MASK    ((uint16_t) 0x0040U)
#define PIE_PIEIFR6_R_PIE_MCBSPB_RX_BIT    (6U)
#define PIE_PIEIFR6_R_PIE_MCBSPB_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_MCBSPB_RX_PEND    ((uint16_t) 0x0040U)

#define PIE_PIEIFR6_PIE_MCBSPB_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_MCBSPB_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_MCBSPB_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_MCBSPB_TX_MASK    ((uint16_t) 0x0080U)
#define PIE_PIEIFR6_R_PIE_MCBSPB_TX_BIT    (7U)
#define PIE_PIEIFR6_R_PIE_MCBSPB_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_MCBSPB_TX_PEND    ((uint16_t) 0x0080U)

#define PIE_PIEIFR6_PIE_MCBSPB_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_MCBSPB_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_MCBSPB_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_SPIC_RX_MASK    ((uint16_t) 0x0100U)
#define PIE_PIEIFR6_R_PIE_SPIC_RX_BIT    (8U)
#define PIE_PIEIFR6_R_PIE_SPIC_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_SPIC_RX_PEND    ((uint16_t) 0x0100U)

#define PIE_PIEIFR6_PIE_SPIC_RX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_SPIC_RX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_SPIC_RX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_SPIC_TX_MASK    ((uint16_t) 0x0200U)
#define PIE_PIEIFR6_R_PIE_SPIC_TX_BIT    (9U)
#define PIE_PIEIFR6_R_PIE_SPIC_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_SPIC_TX_PEND    ((uint16_t) 0x0200U)

#define PIE_PIEIFR6_PIE_SPIC_TX_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_SPIC_TX_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_SPIC_TX_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_RES170_MASK    ((uint16_t) 0x0400U)
#define PIE_PIEIFR6_R_PIE_RES170_BIT    (10U)
#define PIE_PIEIFR6_R_PIE_RES170_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_RES170_PEND    ((uint16_t) 0x0400U)

#define PIE_PIEIFR6_PIE_RES170_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_RES170_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_RES170_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_RES171_MASK    ((uint16_t) 0x0800U)
#define PIE_PIEIFR6_R_PIE_RES171_BIT    (11U)
#define PIE_PIEIFR6_R_PIE_RES171_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_RES171_PEND    ((uint16_t) 0x0800U)

#define PIE_PIEIFR6_PIE_RES171_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_RES171_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_RES171_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_RES172_MASK    ((uint16_t) 0x1000U)
#define PIE_PIEIFR6_R_PIE_RES172_BIT    (12U)
#define PIE_PIEIFR6_R_PIE_RES172_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_RES172_PEND    ((uint16_t) 0x1000U)

#define PIE_PIEIFR6_PIE_RES172_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_RES172_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_RES172_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_RES173_MASK    ((uint16_t) 0x2000U)
#define PIE_PIEIFR6_R_PIE_RES173_BIT    (13U)
#define PIE_PIEIFR6_R_PIE_RES173_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_RES173_PEND    ((uint16_t) 0x2000U)

#define PIE_PIEIFR6_PIE_RES173_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_RES173_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_RES173_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_RES174_MASK    ((uint16_t) 0x4000U)
#define PIE_PIEIFR6_R_PIE_RES174_BIT    (14U)
#define PIE_PIEIFR6_R_PIE_RES174_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_RES174_PEND    ((uint16_t) 0x4000U)

#define PIE_PIEIFR6_PIE_RES174_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_RES174_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_RES174_PEND    ((uint16_t) 0x0001U)
/*----------*/

/*----------*/
#define PIE_PIEIFR6_R_PIE_RES175_MASK    ((uint16_t) 0x8000U)
#define PIE_PIEIFR6_R_PIE_RES175_BIT    (15U)
#define PIE_PIEIFR6_R_PIE_RES175_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_R_PIE_RES175_PEND    ((uint16_t) 0x8000U)

#define PIE_PIEIFR6_PIE_RES175_MASK    ((uint16_t) 0x0001U)
#define PIE_PIEIFR6_PIE_RES175_NOPEND    ((uint16_t) 0x0000U)
#define PIE_PIEIFR6_PIE_RES175_PEND    ((uint16_t) 0x0001U)
/*----------*/




#endif /* XDRIVER_MCU_PIE_PERIPHERAL_REGISTER_REGISTERDEFINES_REGISTERDEFINES_PIEIFR_XHEADER_PIE_REGISTERDEFINES_PIEIFR6_H_ */
