
#pragma once

#include "mtype.h"
#include "atype.h"
#include "alMANUALK_Def.h"
#include "BVCAM_FACAUTOK_Def.h"
#include "alCameraInfo.h"
#include "alAVM2DDef.h"
#include "CommonK.h"

/**
*  \defgroup EAGLEK3
*  @{
*/

//////////////////////////
// Front View
/*

］             ］
(2)            (3)

］             ］
(0)            (1)

*/
#define SIM_DEFAULT_FP_OFFSET_X_FRONT_0    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_FRONT_0    (0)
#define SIM_DEFAULT_FP_OFFSET_X_FRONT_1    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_FRONT_1    (0)
#define SIM_DEFAULT_FP_OFFSET_X_FRONT_2    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_FRONT_2    (0)
#define SIM_DEFAULT_FP_OFFSET_X_FRONT_3    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_FRONT_3    (0)

// Back View
/*

］             ］
(1)            (0)

］             ］
(3)            (2)

*/
#define SIM_DEFAULT_FP_OFFSET_X_BACK_0     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_BACK_0     (0)
#define SIM_DEFAULT_FP_OFFSET_X_BACK_1     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_BACK_1     (0)
#define SIM_DEFAULT_FP_OFFSET_X_BACK_2     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_BACK_2     (0)
#define SIM_DEFAULT_FP_OFFSET_X_BACK_3     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_BACK_3     (0)

// Left View
/*

］
(3)     ］
(1)

］
］      (0)
(2)

*/
#define SIM_DEFAULT_FP_OFFSET_X_LEFT_0     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_LEFT_0     (0)
#define SIM_DEFAULT_FP_OFFSET_X_LEFT_1     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_LEFT_1     (0)
#define SIM_DEFAULT_FP_OFFSET_X_LEFT_2     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_LEFT_2     (0)
#define SIM_DEFAULT_FP_OFFSET_X_LEFT_3     (0)
#define SIM_DEFAULT_FP_OFFSET_Y_LEFT_3     (0)

// Right View
/*

］
］     (2)
(0)

］
(1)     ］
(3)

*/
#define SIM_DEFAULT_FP_OFFSET_X_RIGHT_0    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_RIGHT_0    (0)
#define SIM_DEFAULT_FP_OFFSET_X_RIGHT_1    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_RIGHT_1    (0)
#define SIM_DEFAULT_FP_OFFSET_X_RIGHT_2    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_RIGHT_2    (0)
#define SIM_DEFAULT_FP_OFFSET_X_RIGHT_3    (0)
#define SIM_DEFAULT_FP_OFFSET_Y_RIGHT_3    (0)


/* Defalut M33 Configuration */
/* Mon Jan 13 19:46:30 2014
This file is automatically generated by the Program */
// 2.5 m
#define SIM_DEFAULT_FM11_W2I                            (-8.865001)
#define SIM_DEFAULT_FM12_W2I                            (116.893276)
#define SIM_DEFAULT_FM13_W2I                            (-11836.622590)
#define SIM_DEFAULT_FM21_W2I                            (-0.720469)
#define SIM_DEFAULT_FM22_W2I                            (75.490611)
#define SIM_DEFAULT_FM23_W2I                            (-9691.606863)
#define SIM_DEFAULT_FM31_W2I                            (-0.003306)
#define SIM_DEFAULT_FM32_W2I                            (0.324594)
#define SIM_DEFAULT_FM33_W2I                            (-40.586544)
#define SIM_DEFAULT_FM11_I2W                            (5.684132)
#define SIM_DEFAULT_FM12_I2W                            (62.592990)
#define SIM_DEFAULT_FM13_I2W                            (-16604.211606)
#define SIM_DEFAULT_FM21_I2W                            (0.194442)
#define SIM_DEFAULT_FM22_I2W                            (22.246981)
#define SIM_DEFAULT_FM23_I2W                            (-5369.033875)
#define SIM_DEFAULT_FM31_I2W                            (0.001092)
#define SIM_DEFAULT_FM32_I2W                            (0.172823)
#define SIM_DEFAULT_FM33_I2W                            (-40.586544)

#define SIM_DEFAULT_BM11_W2I                            (1.884358)
#define SIM_DEFAULT_BM12_W2I                            (-4.848334)
#define SIM_DEFAULT_BM13_W2I                            (803.995801)
#define SIM_DEFAULT_BM21_W2I                            (-0.125179)
#define SIM_DEFAULT_BM22_W2I                            (-1.709094)
#define SIM_DEFAULT_BM23_W2I                            (422.137131)
#define SIM_DEFAULT_BM31_W2I                            (-0.000458)
#define SIM_DEFAULT_BM32_W2I                            (-0.013424)
#define SIM_DEFAULT_BM33_W2I                            (4.223360)
#define SIM_DEFAULT_BM11_I2W                            (1.711899)
#define SIM_DEFAULT_BM12_I2W                            (-10.685220)
#define SIM_DEFAULT_BM13_I2W                            (742.126722)
#define SIM_DEFAULT_BM21_I2W                            (-0.369936)
#define SIM_DEFAULT_BM22_I2W                            (-9.188008)
#define SIM_DEFAULT_BM23_I2W                            (988.792409)
#define SIM_DEFAULT_BM31_I2W                            (-0.000990)
#define SIM_DEFAULT_BM32_I2W                            (-0.030363)
#define SIM_DEFAULT_BM33_I2W                            (4.223360)

#define SIM_DEFAULT_LM11_W2I                            (5.464076)
#define SIM_DEFAULT_LM12_W2I                            (1.422569)
#define SIM_DEFAULT_LM13_W2I                            (-2746.108554)
#define SIM_DEFAULT_LM21_W2I                            (2.684097)
#define SIM_DEFAULT_LM22_W2I                            (0.254721)
#define SIM_DEFAULT_LM23_W2I                            (-1411.185734)
#define SIM_DEFAULT_LM31_W2I                            (0.015195)
#define SIM_DEFAULT_LM32_W2I                            (0.001048)
#define SIM_DEFAULT_LM33_W2I                            (-7.044172)
#define SIM_DEFAULT_LM11_I2W                            (-0.917435)
#define SIM_DEFAULT_LM12_I2W                            (20.739658)
#define SIM_DEFAULT_LM13_I2W                            (-3797.200409)
#define SIM_DEFAULT_LM21_I2W                            (-7.361293)
#define SIM_DEFAULT_LM22_I2W                            (9.397803)
#define SIM_DEFAULT_LM23_I2W                            (987.037689)
#define SIM_DEFAULT_LM31_I2W                            (-0.003074)
#define SIM_DEFAULT_LM32_I2W                            (0.046135)
#define SIM_DEFAULT_LM33_I2W                            (-7.044172)

#define SIM_DEFAULT_RM11_W2I                            (-7.276601)
#define SIM_DEFAULT_RM12_W2I                            (-1.830370)
#define SIM_DEFAULT_RM13_W2I                            (2498.380387)
#define SIM_DEFAULT_RM21_W2I                            (-3.737205)
#define SIM_DEFAULT_RM22_W2I                            (-0.402839)
#define SIM_DEFAULT_RM23_W2I                            (1022.628775)
#define SIM_DEFAULT_RM31_W2I                            (-0.020279)
#define SIM_DEFAULT_RM32_W2I                            (-0.001659)
#define SIM_DEFAULT_RM33_W2I                            (6.293328)
#define SIM_DEFAULT_RM11_I2W                            (1.350628)
#define SIM_DEFAULT_RM12_I2W                            (-11.872992)
#define SIM_DEFAULT_RM13_I2W                            (1393.107306)
#define SIM_DEFAULT_RM21_I2W                            (-4.478403)
#define SIM_DEFAULT_RM22_I2W                            (-7.840215)
#define SIM_DEFAULT_RM23_I2W                            (3051.864484)
#define SIM_DEFAULT_RM31_I2W                            (0.003172)
#define SIM_DEFAULT_RM32_I2W                            (-0.040324)
#define SIM_DEFAULT_RM33_I2W                            (6.293328)

/** \brief Camera Configuration */
#define SIM_DEFAULT_CAM_PITCH_BV_FRONT              (70)
#define SIM_DEFAULT_CAM_YAW_BV_FRONT                0
#define SIM_DEFAULT_CAM_ROLL_BV_FRONT               0
#define SIM_DEFAULT_CAM_POS_X_BV_FRONT              0           // ┏�eいァ�� 0
#define SIM_DEFAULT_CAM_POS_Y_BV_FRONT              (-2423)     // ┏��いァ�� 0
#define SIM_DEFAULT_CAM_POS_Z_BV_FRONT              533         // �aキ�u�� 0

#define SIM_DEFAULT_CAM_PITCH_BV_BACK               (42)
#define SIM_DEFAULT_CAM_YAW_BV_BACK                 (0)
#define SIM_DEFAULT_CAM_ROLL_BV_BACK                0
#define SIM_DEFAULT_CAM_POS_X_BV_BACK               (-220)      // ┏�eいァ�� 0
#define SIM_DEFAULT_CAM_POS_Y_BV_BACK               (2368)      // ┏��いァ�� 0
#define SIM_DEFAULT_CAM_POS_Z_BV_BACK               861         // �aキ�u�� 0

#define SIM_DEFAULT_CAM_PITCH_BV_LEFT               (22)
#define SIM_DEFAULT_CAM_YAW_BV_LEFT                 (2)
#define SIM_DEFAULT_CAM_ROLL_BV_LEFT                (0)
#define SIM_DEFAULT_CAM_POS_X_BV_LEFT               (-1062)     // ┏�eいァ�� 0
#define SIM_DEFAULT_CAM_POS_Y_BV_LEFT               (-756)      // ┏��いァ�� 0
#define SIM_DEFAULT_CAM_POS_Z_BV_LEFT               (998)       // �aキ�u�� 0

#define SIM_DEFAULT_CAM_PITCH_BV_RIGHT              (22)
#define SIM_DEFAULT_CAM_YAW_BV_RIGHT                (2)
#define SIM_DEFAULT_CAM_ROLL_BV_RIGHT               (0)
#define SIM_DEFAULT_CAM_POS_X_BV_RIGHT              1045        // ┏�eいァ�� 0
#define SIM_DEFAULT_CAM_POS_Y_BV_RIGHT              (-721)      // ┏��いァ�� 0
#define SIM_DEFAULT_CAM_POS_Z_BV_RIGHT              (998)       // �aキ�u�� 0

///
#define SIM_DEFAULT_CAM_RMATRIX11_BV2RC_FRONT             (1.008593709)
#define SIM_DEFAULT_CAM_RMATRIX12_BV2RC_FRONT             (0.024464768)
#define SIM_DEFAULT_CAM_RMATRIX13_BV2RC_FRONT             (-0.000208191)
#define SIM_DEFAULT_CAM_RMATRIX21_BV2RC_FRONT             (-0.002892477)
#define SIM_DEFAULT_CAM_RMATRIX22_BV2RC_FRONT             (0.340187884)
#define SIM_DEFAULT_CAM_RMATRIX23_BV2RC_FRONT             (0.939057354)
#define SIM_DEFAULT_CAM_RMATRIX31_BV2RC_FRONT             (0.008526616)
#define SIM_DEFAULT_CAM_RMATRIX32_BV2RC_FRONT             (-0.930849305)
#define SIM_DEFAULT_CAM_RMATRIX33_BV2RC_FRONT             (0.343182124)

#define SIM_DEFAULT_CAM_RMATRIX11_RC2BV_FRONT             (0.991261086)
#define SIM_DEFAULT_CAM_RMATRIX12_RC2BV_FRONT             (-0.008205336)
#define SIM_DEFAULT_CAM_RMATRIX13_RC2BV_FRONT             (0.023053803)
#define SIM_DEFAULT_CAM_RMATRIX21_RC2BV_FRONT             (0.009003204)
#define SIM_DEFAULT_CAM_RMATRIX22_RC2BV_FRONT             (0.34627067)
#define SIM_DEFAULT_CAM_RMATRIX23_RC2BV_FRONT             (-0.947503154)
#define SIM_DEFAULT_CAM_RMATRIX31_RC2BV_FRONT             (-0.000208274)
#define SIM_DEFAULT_CAM_RMATRIX32_RC2BV_FRONT             (0.939430564)
#define SIM_DEFAULT_CAM_RMATRIX33_RC2BV_FRONT             (0.343318515)

#define SIM_DEFAULT_CAM_TMATRIX1_BV2RC_FRONT             (121.6170145)
#define SIM_DEFAULT_CAM_TMATRIX2_BV2RC_FRONT             (1375.290063)
#define SIM_DEFAULT_CAM_TMATRIX3_BV2RC_FRONT             (-2077.094121)

#define SIM_DEFAULT_CAM_TMATRIX1_RC2BV_FRONT             (-61)
#define SIM_DEFAULT_CAM_TMATRIX2_RC2BV_FRONT             (-2445)
#define SIM_DEFAULT_CAM_TMATRIX3_RC2BV_FRONT             (-578)
///

///
#define SIM_DEFAULT_CAM_RMATRIX11_BV2RC_BACK             (-1.005237142)
#define SIM_DEFAULT_CAM_RMATRIX12_BV2RC_BACK             (0.045987533)
#define SIM_DEFAULT_CAM_RMATRIX13_BV2RC_BACK              (0.01915928)
#define SIM_DEFAULT_CAM_RMATRIX21_BV2RC_BACK             (-0.013038503)
#define SIM_DEFAULT_CAM_RMATRIX22_BV2RC_BACK             (-0.730450372)
#define SIM_DEFAULT_CAM_RMATRIX23_BV2RC_BACK             (0.677788315)
#define SIM_DEFAULT_CAM_RMATRIX31_BV2RC_BACK             (0.038233641)
#define SIM_DEFAULT_CAM_RMATRIX32_BV2RC_BACK             (0.672508025)
#define SIM_DEFAULT_CAM_RMATRIX33_BV2RC_BACK             (0.734875453)

#define SIM_DEFAULT_CAM_RMATRIX11_RC2BV_BACK             (-0.992800723)
#define SIM_DEFAULT_CAM_RMATRIX12_RC2BV_BACK             (-0.020914397)
#define SIM_DEFAULT_CAM_RMATRIX13_RC2BV_BACK             (0.045173479)
#define SIM_DEFAULT_CAM_RMATRIX21_RC2BV_BACK             (0.035502878)
#define SIM_DEFAULT_CAM_RMATRIX22_RC2BV_BACK             (-0.739600104)
#define SIM_DEFAULT_CAM_RMATRIX23_RC2BV_BACK             (0.681220331)
#define SIM_DEFAULT_CAM_RMATRIX31_RC2BV_BACK             (0.019162997)
#define SIM_DEFAULT_CAM_RMATRIX32_RC2BV_BACK             (0.677919825)
#define SIM_DEFAULT_CAM_RMATRIX33_RC2BV_BACK             (0.735018039)

#define SIM_DEFAULT_CAM_TMATRIX1_BV2RC_BACK             (-316.1193869)
#define SIM_DEFAULT_CAM_TMATRIX2_BV2RC_BACK             (2286.949799)
#define SIM_DEFAULT_CAM_TMATRIX3_BV2RC_BACK             (-830.7976855)

#define SIM_DEFAULT_CAM_TMATRIX1_RC2BV_BACK             (-228)
#define SIM_DEFAULT_CAM_TMATRIX2_RC2BV_BACK             (2268)
#define SIM_DEFAULT_CAM_TMATRIX3_RC2BV_BACK             (-933)
///

///
#define SIM_DEFAULT_CAM_RMATRIX11_BV2RC_LEFT             (-0.05586546)
#define SIM_DEFAULT_CAM_RMATRIX12_BV2RC_LEFT             (-1.022201829)
#define SIM_DEFAULT_CAM_RMATRIX13_BV2RC_LEFT             (-0.008638326)
#define SIM_DEFAULT_CAM_RMATRIX21_BV2RC_LEFT             (0.922193523)
#define SIM_DEFAULT_CAM_RMATRIX22_BV2RC_LEFT             (-0.016131721)
#define SIM_DEFAULT_CAM_RMATRIX23_BV2RC_LEFT             (0.326677959)
#define SIM_DEFAULT_CAM_RMATRIX31_BV2RC_LEFT             (-0.319788851)
#define SIM_DEFAULT_CAM_RMATRIX32_BV2RC_LEFT             (-0.003773158)
#define SIM_DEFAULT_CAM_RMATRIX33_BV2RC_LEFT             (0.943569112)

#define SIM_DEFAULT_CAM_RMATRIX11_RC2BV_LEFT             (-0.014029249)
#define SIM_DEFAULT_CAM_RMATRIX12_RC2BV_LEFT             (0.967340691)
#define SIM_DEFAULT_CAM_RMATRIX13_RC2BV_LEFT             (-0.335036478)
#define SIM_DEFAULT_CAM_RMATRIX21_RC2BV_LEFT             (-0.977440447)
#define SIM_DEFAULT_CAM_RMATRIX22_RC2BV_LEFT             (-0.055635829)
#define SIM_DEFAULT_CAM_RMATRIX23_RC2BV_LEFT             (0.010313552)
#define SIM_DEFAULT_CAM_RMATRIX31_RC2BV_LEFT             (-0.008663313)
#define SIM_DEFAULT_CAM_RMATRIX32_RC2BV_LEFT             (0.327622896)
#define SIM_DEFAULT_CAM_RMATRIX33_RC2BV_LEFT             (0.946298447)

#define SIM_DEFAULT_CAM_TMATRIX1_BV2RC_LEFT             (-845.2360161)
#define SIM_DEFAULT_CAM_TMATRIX2_BV2RC_LEFT             (1334.328599)
#define SIM_DEFAULT_CAM_TMATRIX3_BV2RC_LEFT             (567.1341171)

#define SIM_DEFAULT_CAM_TMATRIX1_RC2BV_LEFT             (-1112)
#define SIM_DEFAULT_CAM_TMATRIX2_RC2BV_LEFT             (-757)
#define SIM_DEFAULT_CAM_TMATRIX3_RC2BV_LEFT             (-981)
///

///
#define SIM_DEFAULT_CAM_RMATRIX11_BV2RC_RIGHT             (-0.053843277)
#define SIM_DEFAULT_CAM_RMATRIX12_BV2RC_RIGHT             (1.013028052)
#define SIM_DEFAULT_CAM_RMATRIX13_BV2RC_RIGHT             (-0.02817934)
#define SIM_DEFAULT_CAM_RMATRIX21_BV2RC_RIGHT             (-0.927822381)
#define SIM_DEFAULT_CAM_RMATRIX22_BV2RC_RIGHT             (-0.000973807)
#define SIM_DEFAULT_CAM_RMATRIX23_BV2RC_RIGHT             (0.336781521)
#define SIM_DEFAULT_CAM_RMATRIX31_BV2RC_RIGHT             (0.330817617)
#define SIM_DEFAULT_CAM_RMATRIX32_BV2RC_RIGHT             (0.030718694)
#define SIM_DEFAULT_CAM_RMATRIX33_BV2RC_RIGHT             (0.939962532)

#define SIM_DEFAULT_CAM_RMATRIX11_RC2BV_RIGHT             (-0.011286276)
#define SIM_DEFAULT_CAM_RMATRIX12_RC2BV_RIGHT             (-0.955227673)
#define SIM_DEFAULT_CAM_RMATRIX13_RC2BV_RIGHT             (0.341912553)
#define SIM_DEFAULT_CAM_RMATRIX21_RC2BV_RIGHT             (0.985753986)
#define SIM_DEFAULT_CAM_RMATRIX22_RC2BV_RIGHT             (-0.041381739)
#define SIM_DEFAULT_CAM_RMATRIX23_RC2BV_RIGHT             (0.044378898)
#define SIM_DEFAULT_CAM_RMATRIX31_RC2BV_RIGHT             (-0.028243016)
#define SIM_DEFAULT_CAM_RMATRIX32_RC2BV_RIGHT             (0.337542534)
#define SIM_DEFAULT_CAM_RMATRIX33_RC2BV_RIGHT             (0.942086532)

#define SIM_DEFAULT_CAM_TMATRIX1_BV2RC_RIGHT             (860.6806593)
#define SIM_DEFAULT_CAM_TMATRIX2_BV2RC_RIGHT             (1298.888016)
#define SIM_DEFAULT_CAM_TMATRIX3_BV2RC_RIGHT             (532.976724)

#define SIM_DEFAULT_CAM_TMATRIX1_RC2BV_RIGHT             (1068)
#define SIM_DEFAULT_CAM_TMATRIX2_RC2BV_RIGHT             (-818)
#define SIM_DEFAULT_CAM_TMATRIX3_RC2BV_RIGHT             (-916)
///
/* SV Left/Right & LVDS Front is currently not ready & used. */
#define SIM_DEFAULT_CAM_PITCH_SV_LEFT               (0)
#define SIM_DEFAULT_CAM_YAW_SV_LEFT                 (20)
#define SIM_DEFAULT_CAM_ROLL_SV_LEFT                0
#define SIM_DEFAULT_CAM_POS_X_SV_LEFT               (-1045)
#define SIM_DEFAULT_CAM_POS_Y_SV_LEFT               (-570)
#define SIM_DEFAULT_CAM_POS_Z_SV_LEFT               (1069)
#define SIM_DEFAULT_CAM_WIDTH_SV_LEFT               720
#define SIM_DEFAULT_CAM_HEIGHT_SV_LEFT              480

#define SIM_DEFAULT_CAM_PITCH_SV_RIGHT              (0)
#define SIM_DEFAULT_CAM_YAW_SV_RIGHT                (-20)
#define SIM_DEFAULT_CAM_ROLL_SV_RIGHT               0
#define SIM_DEFAULT_CAM_POS_X_SV_RIGHT              1017
#define SIM_DEFAULT_CAM_POS_Y_SV_RIGHT              (-543)
#define SIM_DEFAULT_CAM_POS_Z_SV_RIGHT              1068
#define SIM_DEFAULT_CAM_WIDTH_SV_RIGHT              720
#define SIM_DEFAULT_CAM_HEIGHT_SV_RIGHT             480

#define SIM_DEFAULT_CAM_PITCH_LVDS_FRONT            (-10)
#define SIM_DEFAULT_CAM_YAW_LVDS_FRONT              (0)
#define SIM_DEFAULT_CAM_ROLL_LVDS_FRONT             0
#define SIM_DEFAULT_CAM_POS_X_LVDS_FRONT            0
#define SIM_DEFAULT_CAM_POS_Y_LVDS_FRONT            0
#define SIM_DEFAULT_CAM_POS_Z_LVDS_FRONT            1250
#define SIM_DEFAULT_CAM_WIDTH_LVDS_FRONT            1280
#define SIM_DEFAULT_CAM_HEIGHT_LVDS_FRONT           800

//////////////////////////

/** \brief Define the number of feature points for each camera. */
#define     EAGLEK3_CAMERA_FP_NUM                   4

/** \brief Define the number of fine tune feature points for each camera (For AutoK). */
#define     EAGLEK3_CAMERA_FP_NUM_AUTOK_FINETUNE    6

/** \brief Define the number of feature points for each camera (For AutoK). */
#define     EAGLEK3_CAMERA_FP_NUM_AUTOK             8

/** \brief Define the number of channels for BV. */
#define     EAGLEK3_NUM_BV_CHANNEL                  4
/** \brief Define the M33 element count. */
#define     EAGLEK3_M33_ELEMENT_CNT                 9

/** \brief Define the number of cameras for Eagle II platform. */
#define     EAGLEK3_CAMERA_NUM                      7
/** \brief Define the size of exported M33 matrix. */
#define     EAGLEK3_PlanarTransMatrixTableSIZE      ((sizeof(EAGLEK3_M33_Set)<<1) + 1)//(EAGLEK3_M33_NUM * 9 * 2 * 2 + 1)
 

#ifdef __cplusplus
extern "C"
{
#endif


/** \brief The index to indicate the current used camera. */
typedef enum 
{
    EAGLEK3_BV_LEFT     = 0,
    EAGLEK3_BV_RIGHT    = 1,
    EAGLEK3_BV_FRONT    = 2,
    EAGLEK3_BV_BACK     = 3,
    EAGLEK3_SV_LEFT     = 4,
    EAGLEK3_SV_RIGHT    = 5,
    EAGLEK3_LVDS_FRONT  = 6
} EAGLEK3_CAM_INDX;



/** \brief M33 matrix set for all cameras. */
typedef struct
{

    /** \brief M33 of BV Left Camera, aeBVL[0] : WtoI, aeBVL[1] : ItoW */
    FLOAT64 aeBVL[2][EAGLEK3_M33_ELEMENT_CNT];
    /** \brief M33 of BV Right Camera, aeBVR[0] : WtoI, aeBVR[1] : ItoW */
    FLOAT64 aeBVR[2][EAGLEK3_M33_ELEMENT_CNT];
    /** \brief M33 of BV Front Camera, aeBVF[0] : WtoI, aeBVF[1] : ItoW */
    FLOAT64 aeBVF[2][EAGLEK3_M33_ELEMENT_CNT];
    /** \brief M33 of BV Rear(Back) Camera, aeBVB[0] : WtoI, aeBVB[1] : ItoW */
    FLOAT64 aeBVB[2][EAGLEK3_M33_ELEMENT_CNT];

    /** \brief M33 of SV Left Camera, aeSVL[0] : WtoI, aeSVL[1] : ItoW */
    FLOAT64 aeSVL[2][EAGLEK3_M33_ELEMENT_CNT];
    /** \brief M33 of SV Right Camera, aeSVR[0] : WtoI, aeSVR[1] : ItoW */
    FLOAT64 aeSVR[2][EAGLEK3_M33_ELEMENT_CNT];

    /** \brief M33 of LVDS Front Camera, aeLVDSF[0] : WtoI, aeLVDSF[1] : ItoW */
    FLOAT64 aeLVDSF[2][EAGLEK3_M33_ELEMENT_CNT];

} EAGLEK3_M33_Set;

/** \brief Define configuration data of a single camera. */
typedef struct 
{
    /** \brief Image Feature Points - X : 1 ~ 4 */
    FLOAT64   eX[EAGLEK3_CAMERA_FP_NUM];
    /** \brief Image Feature Points - Y : 1 ~ 4 */
    FLOAT64   eY[EAGLEK3_CAMERA_FP_NUM];

} EAGLEK3_FeaturePointPos;

/** \brief Define the configure data  . */
typedef struct
{
    /** \brief The AutoK configure. */
    BVCAM_FACAUTOK_CFG tAutoK_Cfg;

    /** \brief The MANUALK configure. */
    alMANUALK_CameraCfg          atMANUALK_Cfg[EAGLEK3_NUM_BV_CHANNEL];

    /** \brief The extrinsic parameter configure. */
    alCAMERAINFO_ExtrinsicParams atCameraExtrinsicParams[EAGLEK3_NUM_BV_CHANNEL];

    /** \brief The transfrom matrix configure. */
    alCOMMONK_CalibrationParams atCalibrationParams[EAGLEK3_NUM_BV_CHANNEL];

    /** \brief Factory AutoK Switch 0: OFF 1:ON*/
    UINT8           ucFactoryAutoKSwitch;

#if 1
    /** \brief Pitch angle offset (in degree) �枉�┐�廬沙~�t*/
    FLOAT32         afPitchOffset[EAGLEK3_NUM_BV_CHANNEL];
    /** \brief Yaw angle offset (in degree) �枉�┐�廬沙~�t*/
    FLOAT32         afYawOffset[EAGLEK3_NUM_BV_CHANNEL];
    /** \brief Roll angle offset (in degree) �枉�┐�廬沙~�t*/
    FLOAT32         afRollOffset[EAGLEK3_NUM_BV_CHANNEL];
    /** \brief Camera Position X offset (in milimeter) : according to center of car center on the ground �枉��豸m�沙~�t*/
    INT32           alCameraPosXOffset[EAGLEK3_NUM_BV_CHANNEL];
    /** \brief Camera Position Y offset (in milimeter) : according to center of car center on the ground  �枉��豸m�沙~�t*/
    INT32           alCameraPosYOffset[EAGLEK3_NUM_BV_CHANNEL];
    /** \brief Camera Position Z offset (in milimeter) : according to center of car center on the ground �枉��豸m�沙~�t*/
    INT32           alCameraPosZOffset[EAGLEK3_NUM_BV_CHANNEL];
    /** \brief LM Switch */
    INT32           alLMBoundarySwitch[EAGLEK3_NUM_BV_CHANNEL];
#endif
} EAGLEK3_Cfg;

/** \brief Define the parameter data of the 2D around view monitor . */
typedef struct
{
    /** \brief The AutoK Parameters. */
    BVCAM_FACAUTOK_Parameter tAutoK_Params;

    /** \brief The ManualK Parameters. */
    alMANUALK_Params tMANUALK_Params;

    /** \brief The BV Buffer size */
    alPointINT32 tBVImgSize;

    // alAVM2D_Params talAVM2D_Params;
} EAGLEK3_Param;



/** \brief Define the calibration result data . */
typedef struct
{
    /** \brief The car MANUALK configure. */
    alCAMERAINFO_ExtrinsicParams atCameraExtrinsicParams[EAGLEK3_NUM_BV_CHANNEL];

    /** \brief The car MANUALK configure. */
    alCOMMONK_CalibrationParams atCalibrationParams[EAGLEK3_NUM_BV_CHANNEL];

    /** \brief AutoK_Data. */
    BVCAM_FACAUTOK_Data tBV_BV_FAC_AutoK_Data;

    /** \brief The car MANUALK configure. */
    UINT8 *a_pucEagleK3WorkingBuffer;

} EAGLEK3_Data;

/** \brief Define the calibration result data . */
typedef struct
{
    /** \brief The Field Data of  MANUALK configure. */
    alMANUALK_ChartCrossPointSet tManualKFieldData;

    /** \brief The Field Data of  AutoK configure. */
    BVCAM_FACAUTOK_CalibrationFeildData tAutoKFieldData;

    /** \brief The configure of FP offset. */
    alPointINT32    atBVFPOffsetFineTuned[EAGLEK3_NUM_BV_CHANNEL][EAGLEK3_CAMERA_FP_NUM_AUTOK];
} EAGLEK3_FieldData;




#ifdef WIN32
/** \brief Record the Working Folder Path. */
extern wchar_t g_EAGLEK3_awcWorkingPath[MAX_PATH];
#endif


/**
\brief Load FM Cfg by Default
\param a_ucCamNum [IN] The camera number
\param a_ptFMCfg [INOut] The Cfg data
\return None.
*/
void  EAGLEK3_LoadFM_BV_CfgByDefault(UINT8 a_ucCamNum, alFM_v2_1_ModelCfg *a_ptFMCfg);

/** \brief Load Default ExtrinsicData for EAGLEK3. */
void EAGLEK3_LoadDefaultExtrinsicData(alCAMERAINFO_ExtrinsicParams a_atCameraExtrinsicParams[EAGLEK3_NUM_BV_CHANNEL]);

/** \brief Load Default Calibration for EAGLEK3. */
void EAGLEK3_LoadDefaultCalibrationData(alCOMMONK_CalibrationParams a_atCalibrationParams[EAGLEK3_NUM_BV_CHANNEL]);


/**
\brief Initialize eagleK: Load default setting.
\return None.
*/
void EAGLEK3_LoadDefault(EAGLEK3_Cfg *a_ptEAGLEK3_Cfg);


/**
\brief Load calibration field data from default for fine-tune offset.
*/
void EAGLEK3_LoadFieldDataFineTuneOffsetByDefault(alPointINT32    a_atBVFPOffsetFineTuned[EAGLEK3_NUM_BV_CHANNEL][EAGLEK3_CAMERA_FP_NUM_AUTOK]);

/**
\brief Load calibration field data from default.
*/
void EAGLEK3_LoadFieldDataByDefault(EAGLEK3_FieldData *a_ptFeildData);

void  EAGLEK3_LoadFM_BV_fgByHexFile();

/**
\brief Cfg Import by Hex file (1300-2)
\param a_ulDataID [IN] Data ID
\param a_ulDataLength [IN] Data Length
\param a_pulBuffer [IN] Data Section Buffer for reading
*/
void EAGLEK3_CfgImportHex(UINT32 a_ulDataID, UINT32 a_ulDataLength, UINT8 * a_pucBuffer, EAGLEK3_Cfg *a_ptCfg);

/**
\brief Cfg Export to Hex file
\param a_ulSectionID [IN] Section ID
\param a_ptCfg [IN] EagleK3 Config data
\param a_pucDataSectionBuffer [OUT] Data Section Buffer for output
*/
UINT32 EAGLEK3_CfgExportHex(
    UINT32 a_ulSectionID,
    EAGLEK3_Cfg *a_ptCfg,
    UINT8 *a_pucDataSectionBuffer
    );

/**
\brief Cfg Export to Hex file
\param a_ulSectionID [IN] Section ID
\param a_ptFieldData [IN] field data
\param a_pucDataSectionBuffer [OUT] Data Section Buffer for output
*/
UINT32 EAGLEK3_FieldDataExportHex(
    UINT32 a_ulSectionID,
    EAGLEK3_FieldData *a_ptFieldData,
    UINT8 *a_pucDataSectionBuffer
    );

/**
\brief Cfg Import by Hex file (1300-2)
\param a_ulDataID [IN] Data ID
\param a_ulDataLength [IN] Data Length
\param a_pulBuffer [IN] Data Section Buffer for reading
*/
void EAGLEK3_FieldDataImportHex(UINT32 a_ulDataID, UINT32 a_ulDataLength, UINT8 * a_pucBuffer, EAGLEK3_FieldData *a_ptFieldData);

/**
\brief Cfg Export to Hex file
\param a_ulSectionID [IN] Section ID
\param a_ptExtrinsicParams [IN] Extrinsic Params
\param a_pucDataSectionBuffer [OUT] Data Section Buffer for output
*/
UINT32 EAGLEK3_ExtrinsicCfgExportHex(
    UINT32 a_ulSectionID,
    alCAMERAINFO_ExtrinsicParams *a_ptExtrinsicParams,
    UINT8 *a_pucDataSectionBuffer
    );

/**
\brief Cfg Import by Hex file (1300-2)
\param a_ulDataID [IN] Data ID
\param a_ulDataLength [IN] Data Length
\param a_pulBuffer [IN] Data Section Buffer for reading
*/
void EAGLEK3_ExtrinsicCfgImportHex(UINT32 a_ulDataID, UINT32 a_ulDataLength, UINT8 * a_pucBuffer, alCAMERAINFO_ExtrinsicParams *a_ptExtrinsicParams);

/**
\brief Cfg Export to Hex file
\param a_ulSectionID [IN] Section ID
\param a_ptCalibrationParams [IN] Calibration Params
\param a_pucDataSectionBuffer [OUT] Data Section Buffer for output
*/
UINT32 EAGLEK3_CalibrationCfgExportHex(
    UINT32 a_ulSectionID,
    alCOMMONK_CalibrationParams *a_ptCalibrationParams,
    UINT8 *a_pucDataSectionBuffer
    );

/**
\brief Cfg Import by Hex file (1300-2)
\param a_ulDataID [IN] Data ID
\param a_ulDataLength [IN] Data Length
\param a_pulBuffer [IN] Data Section Buffer for reading
*/
void EAGLEK3_CalibrationCfgImportHex(
    UINT32 a_ulDataID, UINT32 a_ulDataLength, 
    UINT8 * a_pucBuffer, alCOMMONK_CalibrationParams *a_ptCalibrationParams
);

#ifdef WIN32 // only PC use INI file
/**
\brief Load FM Cfg by INI file
\param a_pwcConfigFilePath [IN] The absolute path of the ini file.
\param a_ucCamNum [IN] The camera number
\param a_ptFMCfg [INOut] The Cfg data
\return None.
*/
void  EAGLEK3_LoadFM_BV_CfgByINI(wchar_t * a_pwcConfigFilePath, UINT8 a_ucCamNum, alFM_v2_1_ModelCfg *a_ptFMCfg);

/**
\brief Load EAGLEK3 Cfg by INI file
\param a_pwcConfigFileName [IN] The absolute path of the ini file.
\param a_ptCfg [INOut] The Cfg data
\return None.
*/
void EAGLEK3_LoadUserCfgByINI(wchar_t * a_pwcConfigFileName, EAGLEK3_Cfg *a_ptCfg);

/**
\brief Load calibration field data from local ini files.
*/
void EAGLEK3_LoadFieldDataByINI(
    wchar_t * pwcIniFileNameManualK, wchar_t * pwcIniFileNameAutoK,
    wchar_t * pwcIniFileNameFineTune, EAGLEK3_FieldData *a_ptFeildData
    );
#endif


#ifdef WIN32 // FW 弧ぃ旨�n�z�Lini FILE厚�J

#endif

#ifdef __cplusplus
}
#endif

/**
  *  @}
  */

//#pragma pack()  // �魯旅w�]�紺O笑悼刻飼
