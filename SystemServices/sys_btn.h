/**
 * @file        sys_btn.h
 * @copyright
 * @license
 * @version     0.0.0
 * @date
 * @author      Minh Phung Nhat
 *              Hung Pham Duc
 *              Khoi Nguyen Thanh
 * @brief       none
 *
 * @note        none
 *
 * @example     none
 *
 */
/* Define to prevent recursive inclusion ------------------------------ */
#ifndef __SYS_BTN_
#define __SYS_BTN_

/* Includes ----------------------------------------------------------- */
#include <stdint.h>

/* Public defines ----------------------------------------------------- */

/* Public enumerate/structure ----------------------------------------- */

typedef enum
{
  SYS_BTN_EVENT_SINGLE_CLICK,
  SYS_BTN_EVENT_DOUBLE_CLICK,
  SYS_BTN_EVENT_HOLD,
  SYS_BTN_EVENT_RELEASE
} sys_btn_event_t;

/* Public macros ------------------------------------------------------ */

/* Public variables --------------------------------------------------- */

/* Public function prototypes ----------------------------------------- */

/* Public function prototypes ----------------------------------------- */
/**
 * @brief           Initialize system button
 *
 * @return
 *  - (0) : Success
 *  - (-1): Error
 */
uint32_t sys_btn_init();

/**
 * @brief           System button loop() function
 */
uint32_t sys_btn_loop();

#endif // __SYS_BTN_

/* End of file -------------------------------------------------------- */