/**
 * @file lv_theme_alien.h
 *
 */

#ifndef LV_THEME_ALIEN_H
#define LV_THEME_ALIEN_H

#ifdef __cplusplus
extern "C"
{
#endif

/*********************
 *      INCLUDES
 *********************/
#include "../../lv_conf.h"

#if USE_LV_THEME_ALIEN

    /*********************
     *      DEFINES
     *********************/

    /**********************
     *      TYPEDEFS
     **********************/

    /**********************
     * GLOBAL PROTOTYPES
     **********************/

    /**
     * Initialize the alien theme
     * @param hue [0..360] hue value from HSV color space to define the theme's
     * base color
     * @param font pointer to a font (NULL to use the default)
     * @return pointer to the initialized theme
     */
    lv_theme_t *lv_theme_alien_init(uint16_t hue, lv_font_t *font);
    /**
     * Get a pointer to the theme
     * @return pointer to the theme
     */
    lv_theme_t *lv_theme_get_alien(void);

    /**********************
     *      MACROS
     **********************/

#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*LV_THEME_ALIEN_H*/