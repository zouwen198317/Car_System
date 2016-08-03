
#include "mtype.h"
#include "alFM_v2_1.h"

/** \cond DOXYGEN_EXCLUDE */

#define alFM_v2_1_DISTORTION_CURVE_LENGTH    106

static FLOAT64   g_alFM_v2_1_eFOV_V_VCCamera = 114.889100;          // in degree
static FLOAT64   g_alFM_v2_1_eFOV_H_VCCamera = 143.503668;          // in degree
static FLOAT64   g_alFM_v2_1_eUD_FOV_H_VCCamera = 123.666398;       // in degree, for 2D �ϳ����ϥ�
static FLOAT64   g_alFM_v2_1_eFocalLength_VCCamera = 1.08115190;    // in mm
static UINT32    g_alFM_v2_1_ulSensorPixelWidth_VCCamera = 640;     // in pixel
static UINT32    g_alFM_v2_1_ulSensorPixelHeight_VCCamera = 480;    // in pixel
static UINT32    g_alFM_v2_1_ulSensorPixelSize_VCCamera = 5600;     // in nm
static FLOAT64   g_alFM_v2_1_eHResizeRatio_VCCamera = 1.1109375;               // in degree

static UINT32    g_alFM_v2_1_ulAngleTableScale_VCCamera = 1;
static UINT32    g_alFM_v2_1_ulCurveLength_VCCamera = alFM_v2_1_DISTORTION_CURVE_LENGTH;

const FLOAT64 g_alFM_v2_1_aeAngleDegree_VCCamera[alFM_v2_1_DISTORTION_CURVE_LENGTH] =
{
    0.00, 0.85, 1.70, 2.55, 3.40, 4.25, 5.10, 5.95, 6.80, 7.65,
    8.50, 9.35, 10.20, 11.05, 11.90, 12.75, 13.60, 14.45, 15.30, 16.15,
    17.00, 17.85, 18.70, 19.55, 20.40, 21.25, 22.10, 22.95, 23.80, 24.65,
    25.50, 26.35, 27.20, 28.05, 28.90, 29.75, 30.60, 31.45, 32.30, 33.15,
    34.00, 34.85, 35.70, 36.55, 37.40, 38.25, 39.10, 39.95, 40.80, 41.65,
    42.50, 43.35, 44.20, 45.05, 45.90, 46.75, 47.60, 48.45, 49.30, 50.15,
    51.00, 51.85, 52.70, 53.55, 54.40, 55.25, 56.10, 56.95, 57.80, 58.65,
    59.50, 60.35, 61.20, 62.05, 62.90, 63.75, 64.60, 65.45, 66.30, 67.15,
    68.00, 68.85, 69.70, 70.55, 71.40, 72.25, 73.10, 73.95, 74.80, 75.65,
    76.50, 77.35, 78.20, 79.05, 79.90, 80.75, 81.60, 82.45, 83.30, 84.15,
    85.00, 85.44, 86.33, 87.22, 88.11, 89.00
};

static FLOAT64 g_alFM_v2_1_aeRealHeight_VCCamera[alFM_v2_1_DISTORTION_CURVE_LENGTH] =
{
    0, 0.01601242, 0.03203188, 0.04806547, 0.06412025, 0.08020336, 0.09632198, 0.11248333, 0.12869475, 0.14496362,
    0.16129747, 0.17770391, 0.19419071, 0.21076576, 0.22743714, 0.24421309, 0.26110206, 0.27811271, 0.29525393, 0.31253485,
    0.32996491, 0.34755381, 0.36531158, 0.38324861, 0.40137564, 0.41970382, 0.43824471, 0.45701036, 0.47601328, 0.49526653,
    0.51478375, 0.53457917, 0.55466768, 0.57506489, 0.59578716, 0.61685167, 0.63827648, 0.66008058, 0.68228401, 0.70490788,
    0.7279745, 0.75150745, 0.77553171, 0.80007373, 0.82516161, 0.85082517, 0.87709616, 0.90400839, 0.93159792, 0.95990327,
    0.98896561, 1.01882905, 1.04954089, 1.0811519, 1.11371671, 1.14729416, 1.18194772, 1.21774597, 1.25476316, 1.29307977,
    1.33278323, 1.37396869, 1.41673989, 1.46121017, 1.50750361, 1.55575635, 1.60611811, 1.65875394, 1.71384624, 1.7715971,
    1.83223107, 1.89599835, 1.96317862, 2.03408549, 2.10907182, 2.18853612, 2.27293014, 2.36276809, 2.45863789, 2.56121485,
    2.67127852, 2.78973372, 2.91763668, 3.05622819, 3.20697575, 3.37162784, 3.55228459, 3.75149094, 3.97236094, 4.21874633,
    4.49546883, 4.80864595, 5.16615773, 5.57833081, 6.05896799, 6.62694532, 7.30877897, 8.14292595, 9.18735851, 10.53374191,
    12.33607345, 13.53219374, 16.8263833, 22.22621811, 32.7063436, 61.83114091
};

static FLOAT64 g_alFM_v2_1_aeRefHeight_VCCamera[alFM_v2_1_DISTORTION_CURVE_LENGTH] =
{
    0, 0.01601242, 0.03203188, 0.04806547, 0.06412025, 0.08020336, 0.09632198, 0.11248333, 0.12869475, 0.14496362,
    0.16129747, 0.17770391, 0.19419071, 0.21076576, 0.22743714, 0.24421309, 0.26110206, 0.27811271, 0.29525393, 0.31253485,
    0.32996491, 0.34755381, 0.36531158, 0.38324861, 0.40137564, 0.41970382, 0.43824471, 0.45701036, 0.47601328, 0.49526653,
    0.51478375, 0.53457917, 0.55466768, 0.57506489, 0.59578716, 0.61685167, 0.63827648, 0.66008058, 0.68228401, 0.70490788,
    0.7279745, 0.75150745, 0.77553171, 0.80007373, 0.82516161, 0.85082517, 0.87709616, 0.90400839, 0.93159792, 0.95990327,
    0.98896561, 1.01882905, 1.04954089, 1.0811519, 1.11371671, 1.14729416, 1.18194772, 1.21774597, 1.25476316, 1.29307977,
    1.33278323, 1.37396869, 1.41673989, 1.46121017, 1.50750361, 1.55575635, 1.60611811, 1.65875394, 1.71384624, 1.7715971,
    1.83223107, 1.89599835, 1.96317862, 2.03408549, 2.10907182, 2.18853612, 2.27293014, 2.36276809, 2.45863789, 2.56121485,
    2.67127852, 2.78973372, 2.91763668, 3.05622819, 3.20697575, 3.37162784, 3.55228459, 3.75149094, 3.97236094, 4.21874633,
    4.49546883, 4.80864595, 5.16615773, 5.57833081, 6.05896799, 6.62694532, 7.30877897, 8.14292595, 9.18735851, 10.53374191,
    12.33607345, 13.53219374, 16.8263833, 22.22621811, 32.7063436, 61.83114091
};

static FLOAT64 g_alFM_v2_1_aeDistortionCurve_VCCamera[alFM_v2_1_DISTORTION_CURVE_LENGTH] =
{
    0, -0.00154706, -0.00619347, -0.01395499, -0.02485792, -0.03893923, -0.05624666, -0.07683891, -0.10078581, -0.12816859,
    -0.15908017, -0.19362543, -0.23192162, -0.27409875, -0.32030003, -0.37068233, -0.42541675, -0.48468918, -0.54870088, -0.6176692,
    -0.69182822, -0.77142955, -0.85674307, -0.94805779, -1.04568271, -1.14994769, -1.26120442, -1.37982736, -1.5062147, -1.64078939,
    -1.78400008, -1.93632217, -2.09825873, -2.27034147, -2.45313161, -2.64722073, -2.85323154, -3.07181847, -3.30366827, -3.54950034,
    -3.81006696, -4.08615332, -4.37857733, -4.68818917, -5.0158706, -5.36253401, -5.72912115, -6.11660156, -6.52597072, -6.95824784,
    -7.41447341, -7.89570642, -8.40302136, -8.93750496, -9.50025276, -10.09236549, -10.71494548, -11.36909283, -12.05590184, -12.77645734,
    -13.53183124, -14.32307931, -15.15123816, -16.01732255, -16.92232303, -17.86720402, -18.85290214, -19.88032513, -20.950351, -22.06382771,
    -23.2215732, -24.42437575, -25.6729947, -26.96816155, -28.31058124, -29.70093375, -31.13987592, -32.62804349, -34.16605334, -35.75450589,
    -37.3939878, -39.08507472, -40.82833452, -42.62433056, -44.47362557, -46.37678577, -48.33438568, -50.34701359, -52.41527787, -54.53981442,
    -56.72129541, -58.96043976, -61.25802574, -63.61490616, -66.03202698, -68.51045018, -71.05138218, -73.65620961, -76.326545, -79.06428628,
    -81.87169653, -83.35319014, -86.41099489, -89.55437865, -92.78901275, -96.12255694
};

void alFM_v2_1_LoadModedCfg_VC_NoFisheye2(alFM_v2_1_ModelCfg * a_ptFM_v2_Cfg)
{
    UINT16 uwDI;

    a_ptFM_v2_Cfg->uwSrcSensorWidth = g_alFM_v2_1_ulSensorPixelWidth_VCCamera;
    a_ptFM_v2_Cfg->ulSensorPixelSize = g_alFM_v2_1_ulSensorPixelSize_VCCamera;
    a_ptFM_v2_Cfg->uwLengthOfDistortionCurve = g_alFM_v2_1_ulCurveLength_VCCamera;
    a_ptFM_v2_Cfg->uwAngleTableScale = g_alFM_v2_1_ulAngleTableScale_VCCamera;
    a_ptFM_v2_Cfg->eFocalLength = g_alFM_v2_1_eFocalLength_VCCamera;
    a_ptFM_v2_Cfg->eFOV_H = g_alFM_v2_1_eFOV_H_VCCamera;
    a_ptFM_v2_Cfg->eUD_FOV_H = g_alFM_v2_1_eUD_FOV_H_VCCamera;
    a_ptFM_v2_Cfg->eHResizeRatio = g_alFM_v2_1_eHResizeRatio_VCCamera;

    for (uwDI = 0; uwDI < g_alFM_v2_1_ulCurveLength_VCCamera; uwDI++)
    {
        a_ptFM_v2_Cfg->aeAngleDegree[uwDI] = g_alFM_v2_1_aeAngleDegree_VCCamera[uwDI];
        a_ptFM_v2_Cfg->aeRealHeight[uwDI] = g_alFM_v2_1_aeRealHeight_VCCamera[uwDI];
#if 0
        a_ptFM_v2_Cfg->aeRefHeight[uwDI] = g_alFM_v2_1_aeRefHeight_VCCamera[uwDI];
        a_ptFM_v2_Cfg->aeDistortion[uwDI] = g_alFM_v2_1_aeDistortionCurve_VCCamera[uwDI];
#endif
    }
}

#undef alFM_v2_1_DISTORTION_CURVE_LENGTH

/** \endcond DOXYGEN_EXCLUDE */
