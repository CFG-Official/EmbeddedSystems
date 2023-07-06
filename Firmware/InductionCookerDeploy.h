/*
 * InductionCookerDeploy.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "InductionCookerDeploy".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Thu Jul  6 12:39:13 2023
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_InductionCookerDeploy_h_
#define RTW_HEADER_InductionCookerDeploy_h_
#ifndef InductionCookerDeploy_COMMON_INCLUDES_
#define InductionCookerDeploy_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_MbedPinInterface.h"
#include "MW_digitalIO.h"
#endif                              /* InductionCookerDeploy_COMMON_INCLUDES_ */

#include "InductionCookerDeploy_types.h"
#include <stddef.h>
#include <string.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block signals for system '<S1>/decrease_button' */
typedef struct {
  boolean_T b_long;                    /* '<S1>/decrease_button' */
} B_decrease_button_InductionCo_T;

/* Block states (default storage) for system '<S1>/decrease_button' */
typedef struct {
  uint8_T is_c1_InductionCookerDeploy; /* '<S1>/decrease_button' */
  uint8_T is_active_c1_InductionCookerDep;/* '<S1>/decrease_button' */
  uint8_T temporalCounter_i1;          /* '<S1>/decrease_button' */
} DW_decrease_button_InductionC_T;

/* Block signals (default storage) */
typedef struct {
  real_T toggling_period;              /* '<S1>/induction_cooker' */
  boolean_T work;                      /* '<S1>/onoff_button' */
  boolean_T alert_led;                 /* '<S1>/induction_cooker' */
  boolean_T onoff_led;                 /* '<S1>/induction_cooker' */
  boolean_T DigitalRead1;              /* '<S1>/Digital Read1' */
  B_decrease_button_InductionCo_T sf_increase_button;/* '<S1>/increase_button' */
  B_decrease_button_InductionCo_T sf_decrease_button;/* '<S1>/decrease_button' */
} B_InductionCookerDeploy_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  mbed_DigitalRead_InductionCoo_T obj; /* '<S1>/Digital Read3' */
  mbed_DigitalRead_InductionCoo_T obj_b;/* '<S1>/Digital Read2' */
  mbed_DigitalRead_InductionCoo_T obj_d;/* '<S1>/Digital Read1' */
  mbed_DigitalRead_InductionCoo_T obj_e;/* '<S1>/Digital Read' */
  mbed_DigitalWrite_InductionCo_T obj_bg;/* '<S1>/Digital Write2' */
  mbed_DigitalWrite_InductionCo_T obj_j;/* '<S1>/Digital Write1' */
  mbed_DigitalWrite_InductionCo_T obj_a;/* '<S1>/Digital Write' */
  real_T period;                       /* '<S1>/toggling_led' */
  real_T SET_POWER_PATIENCE;           /* '<S1>/induction_cooker' */
  uint32_T temporalCounter_i1;         /* '<S1>/toggling_led' */
  uint32_T temporalCounter_i2;         /* '<S1>/induction_cooker' */
  uint16_T current_power;              /* '<S1>/induction_cooker' */
  uint8_T is_c4_InductionCookerDeploy; /* '<S1>/toggling_led' */
  uint8_T is_active_c4_InductionCookerDep;/* '<S1>/toggling_led' */
  uint8_T is_c3_InductionCookerDeploy; /* '<S1>/onoff_button' */
  uint8_T is_INACTIVE;                 /* '<S1>/onoff_button' */
  uint8_T is_ACTIVE;                   /* '<S1>/onoff_button' */
  uint8_T is_active_c3_InductionCookerDep;/* '<S1>/onoff_button' */
  uint8_T temporalCounter_i1_a;        /* '<S1>/onoff_button' */
  uint8_T is_c5_InductionCookerDeploy; /* '<S1>/induction_cooker' */
  uint8_T is_LOGIC;                    /* '<S1>/induction_cooker' */
  uint8_T is_P0W;                      /* '<S1>/induction_cooker' */
  uint8_T is_P1500W;                   /* '<S1>/induction_cooker' */
  uint8_T is_P300W;                    /* '<S1>/induction_cooker' */
  uint8_T is_P1000W;                   /* '<S1>/induction_cooker' */
  uint8_T is_P500W;                    /* '<S1>/induction_cooker' */
  uint8_T is_ALARM;                    /* '<S1>/induction_cooker' */
  uint8_T is_ACTIVE_i;                 /* '<S1>/induction_cooker' */
  uint8_T is_active_c5_InductionCookerDep;/* '<S1>/induction_cooker' */
  uint8_T temporalCounter_i1_l;        /* '<S1>/induction_cooker' */
  boolean_T b_long;                    /* '<S1>/onoff_button' */
  boolean_T alarm;                     /* '<S1>/induction_cooker' */
  boolean_T objisempty;                /* '<S1>/Digital Write2' */
  boolean_T objisempty_j;              /* '<S1>/Digital Write1' */
  boolean_T objisempty_d;              /* '<S1>/Digital Write' */
  boolean_T objisempty_n;              /* '<S1>/Digital Read3' */
  boolean_T objisempty_l;              /* '<S1>/Digital Read2' */
  boolean_T objisempty_a;              /* '<S1>/Digital Read1' */
  boolean_T objisempty_g;              /* '<S1>/Digital Read' */
  DW_decrease_button_InductionC_T sf_increase_button;/* '<S1>/increase_button' */
  DW_decrease_button_InductionC_T sf_decrease_button;/* '<S1>/decrease_button' */
} DW_InductionCookerDeploy_T;

/* Parameters (default storage) */
struct P_InductionCookerDeploy_T_ {
  real_T DigitalRead_SampleTime;       /* Expression: -1
                                        * Referenced by: '<S1>/Digital Read'
                                        */
  real_T DigitalRead1_SampleTime;      /* Expression: -1
                                        * Referenced by: '<S1>/Digital Read1'
                                        */
  real_T DigitalRead2_SampleTime;      /* Expression: -1
                                        * Referenced by: '<S1>/Digital Read2'
                                        */
  real_T DigitalRead3_SampleTime;      /* Expression: -1
                                        * Referenced by: '<S1>/Digital Read3'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_InductionCookerDeploy_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_InductionCookerDeploy_T InductionCookerDeploy_P;

/* Block signals (default storage) */
extern B_InductionCookerDeploy_T InductionCookerDeploy_B;

/* Block states (default storage) */
extern DW_InductionCookerDeploy_T InductionCookerDeploy_DW;

/* Model entry point functions */
extern void InductionCookerDeploy_initialize(void);
extern void InductionCookerDeploy_step(void);
extern void InductionCookerDeploy_terminate(void);

/* Real-time Model object */
extern RT_MODEL_InductionCookerDeplo_T *const InductionCookerDeploy_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'InductionCookerDeploy'
 * '<S1>'   : 'InductionCookerDeploy/Induction Cooker Control System'
 * '<S2>'   : 'InductionCookerDeploy/Induction Cooker Control System/decrease_button'
 * '<S3>'   : 'InductionCookerDeploy/Induction Cooker Control System/increase_button'
 * '<S4>'   : 'InductionCookerDeploy/Induction Cooker Control System/induction_cooker'
 * '<S5>'   : 'InductionCookerDeploy/Induction Cooker Control System/onoff_button'
 * '<S6>'   : 'InductionCookerDeploy/Induction Cooker Control System/toggling_led'
 */
#endif                                 /* RTW_HEADER_InductionCookerDeploy_h_ */
