/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: InductionCookerDeploy.c
 *
 * Code generated for Simulink model 'InductionCookerDeploy'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Mon Jul  3 17:40:40 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "InductionCookerDeploy.h"
#include "rtwtypes.h"
#include "InductionCookerDeploy_private.h"
#include <math.h>
#include "InductionCookerDeploy_types.h"

/* Named constants for Chart: '<S1>/decrease_button' */
#define InductionCookerD_IN_LongPressed ((uint8_T)1U)
#define InductionCookerDeplo_IN_Pressed ((uint8_T)2U)
#define InductionCookerDeploy_IN_Wait  ((uint8_T)3U)
#define InductionCookerDeploy_RELEASED (true)

/* Named constants for Chart: '<S1>/induction_cooker' */
#define InductionC_TOGGLING_PERIOD_300W (2.0)
#define InductionC_TOGGLING_PERIOD_500W (1.0)
#define InductionCo_TOGGLING_PERIOD_OFF (0.0)
#define InductionCoo_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define InductionCoo_TOGGLING_PERIOD_0W (0.0)
#define InductionCookerDepl_IN_INACTIVE ((uint8_T)2U)
#define InductionCookerDeploy_HIGH     (true)
#define InductionCookerDeploy_IN_ACTIVE ((uint8_T)1U)
#define InductionCookerDeploy_IN_ALARM ((uint8_T)1U)
#define InductionCookerDeploy_IN_OFF   ((uint8_T)1U)
#define InductionCookerDeploy_IN_ON    ((uint8_T)2U)
#define InductionCookerDeploy_IN_P0W   ((uint8_T)1U)
#define InductionCookerDeploy_IN_P1000W ((uint8_T)2U)
#define InductionCookerDeploy_IN_P1500W ((uint8_T)3U)
#define InductionCookerDeploy_IN_P300W ((uint8_T)4U)
#define InductionCookerDeploy_IN_P500W ((uint8_T)5U)
#define InductionCookerDeploy_IN_QUIET ((uint8_T)2U)
#define InductionCookerDeploy_IN_SET   ((uint8_T)1U)
#define InductionCookerDeploy_IN_WAIT  ((uint8_T)2U)
#define InductionCookerDeploy_LOW      (false)
#define Induction_TOGGLING_PERIOD_1000W (0.5)
#define Induction_TOGGLING_PERIOD_1500W (0.25)

/* Named constants for Chart: '<S1>/onoff_button' */
#define InductionCooke_IN_LongPressed_b ((uint8_T)1U)
#define InductionCookerDe_IN_Pressed_oz ((uint8_T)2U)
#define InductionCookerDep_IN_Pressed_o ((uint8_T)1U)
#define InductionCookerDeplo_IN_Wait_je ((uint8_T)3U)
#define InductionCookerDeploy_IN_Wait_j ((uint8_T)2U)

/* Named constants for Chart: '<S1>/toggling_led' */
#define InductionCookerDep_IN_Blink_Off ((uint8_T)1U)
#define InductionCookerDepl_IN_Blink_On ((uint8_T)2U)
#define InductionCookerDeploy_IN_Off   ((uint8_T)3U)

/* Block signals (default storage) */
B_InductionCookerDeploy_T InductionCookerDeploy_B;

/* Block states (default storage) */
DW_InductionCookerDeploy_T InductionCookerDeploy_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_InductionCookerDeploy_T InductionCookerDeploy_Y;

/* Real-time model */
static RT_MODEL_InductionCookerDeplo_T InductionCookerDeploy_M_;
RT_MODEL_InductionCookerDeplo_T *const InductionCookerDeploy_M =
  &InductionCookerDeploy_M_;

/* Forward declaration for local functions */
static void InductionCookerDeploy_LOGIC(const boolean_T *DigitalRead1);

/*
 * System initialize for atomic system:
 *    '<S1>/decrease_button'
 *    '<S1>/increase_button'
 */
void InductionC_decrease_button_Init(boolean_T *rty_b_long)
{
  *rty_b_long = false;
}

/*
 * Output and update for atomic system:
 *    '<S1>/decrease_button'
 *    '<S1>/increase_button'
 */
void InductionCooker_decrease_button(boolean_T rtu_b, boolean_T *rty_b_long,
  DW_decrease_button_InductionC_T *localDW)
{
  if (localDW->temporalCounter_i1 < 15U) {
    localDW->temporalCounter_i1++;
  }

  /* Chart: '<S1>/decrease_button' */
  if (localDW->is_active_c1_InductionCookerDep == 0U) {
    localDW->is_active_c1_InductionCookerDep = 1U;
    localDW->is_c1_InductionCookerDeploy = InductionCookerDeploy_IN_Wait;
    *rty_b_long = InductionCookerDeploy_RELEASED;
  } else {
    switch (localDW->is_c1_InductionCookerDeploy) {
     case InductionCookerD_IN_LongPressed:
      if (rtu_b) {
        localDW->is_c1_InductionCookerDeploy = InductionCookerDeploy_IN_Wait;
        *rty_b_long = InductionCookerDeploy_RELEASED;
      }
      break;

     case InductionCookerDeplo_IN_Pressed:
      if (rtu_b) {
        localDW->is_c1_InductionCookerDeploy = InductionCookerDeploy_IN_Wait;
        *rty_b_long = InductionCookerDeploy_RELEASED;
      } else if (!*rty_b_long) {
        localDW->is_c1_InductionCookerDeploy = InductionCookerD_IN_LongPressed;
        *rty_b_long = InductionCookerDeploy_RELEASED;
      } else {
        *rty_b_long = ((localDW->temporalCounter_i1 < 10U) && (*rty_b_long));
      }
      break;

     default:
      /* case IN_Wait: */
      if (!rtu_b) {
        localDW->is_c1_InductionCookerDeploy = InductionCookerDeplo_IN_Pressed;
        localDW->temporalCounter_i1 = 0U;
        *rty_b_long = InductionCookerDeploy_RELEASED;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/decrease_button' */
}

/* Function for Chart: '<S1>/induction_cooker' */
static void InductionCookerDeploy_LOGIC(const boolean_T *DigitalRead1)
{
  boolean_T tmp;
  switch (InductionCookerDeploy_DW.is_LOGIC) {
   case InductionCookerDeploy_IN_P0W:
    if ((!InductionCookerDeploy_B.b_long) && (!*DigitalRead1)) {
      InductionCookerDeploy_DW.is_P0W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P300W;
      InductionCookerDeploy_DW.is_P300W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else {
      switch (InductionCookerDeploy_DW.is_P0W) {
       case InductionCookerDeploy_IN_SET:
        break;

       default:
        /* case IN_WAIT: */
        if ((InductionCookerDeploy_DW.temporalCounter_i2 >= (uint32_T)ceil
             (InductionCookerDeploy_DW.SET_POWER_PATIENCE * 10.0)) ||
            (InductionCookerDeploy_DW.current_power == 0)) {
          InductionCookerDeploy_DW.is_P0W = InductionCookerDeploy_IN_SET;
          InductionCookerDeploy_DW.current_power = 0U;
          InductionCookerDeploy_B.toggling_period =
            InductionCoo_TOGGLING_PERIOD_0W;
        }
        break;
      }
    }
    break;

   case InductionCookerDeploy_IN_P1000W:
    if (InductionCookerDeploy_DW.alarm) {
      InductionCookerDeploy_DW.is_P1000W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P0W;
      InductionCookerDeploy_DW.is_P0W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else {
      tmp = !*DigitalRead1;
      if ((!InductionCookerDeploy_B.b_long_k) && tmp) {
        InductionCookerDeploy_DW.is_P1000W = InductionCoo_IN_NO_ACTIVE_CHILD;
        InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P500W;
        InductionCookerDeploy_DW.is_P500W = InductionCookerDeploy_IN_WAIT;
        InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
      } else if ((!InductionCookerDeploy_B.b_long) && tmp) {
        InductionCookerDeploy_DW.is_P1000W = InductionCoo_IN_NO_ACTIVE_CHILD;
        InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P1500W;
        InductionCookerDeploy_DW.is_P1500W = InductionCookerDeploy_IN_WAIT;
        InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
      } else {
        switch (InductionCookerDeploy_DW.is_P1000W) {
         case InductionCookerDeploy_IN_SET:
          break;

         default:
          /* case IN_WAIT: */
          if (InductionCookerDeploy_DW.temporalCounter_i2 >= (uint32_T)ceil
              (InductionCookerDeploy_DW.SET_POWER_PATIENCE * 10.0)) {
            InductionCookerDeploy_DW.is_P1000W = InductionCookerDeploy_IN_SET;
            InductionCookerDeploy_DW.current_power = 1000U;
            InductionCookerDeploy_B.toggling_period =
              Induction_TOGGLING_PERIOD_1000W;
          }
          break;
        }
      }
    }
    break;

   case InductionCookerDeploy_IN_P1500W:
    if (InductionCookerDeploy_DW.alarm) {
      InductionCookerDeploy_DW.is_P1500W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P0W;
      InductionCookerDeploy_DW.is_P0W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else if ((!InductionCookerDeploy_B.b_long_k) && (!*DigitalRead1)) {
      InductionCookerDeploy_DW.is_P1500W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P1000W;
      InductionCookerDeploy_DW.is_P1000W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else {
      switch (InductionCookerDeploy_DW.is_P1500W) {
       case InductionCookerDeploy_IN_SET:
        break;

       default:
        /* case IN_WAIT: */
        if (InductionCookerDeploy_DW.temporalCounter_i2 >= (uint32_T)ceil
            (InductionCookerDeploy_DW.SET_POWER_PATIENCE * 10.0)) {
          InductionCookerDeploy_DW.is_P1500W = InductionCookerDeploy_IN_SET;
          InductionCookerDeploy_DW.current_power = 1500U;
          InductionCookerDeploy_B.toggling_period =
            Induction_TOGGLING_PERIOD_1500W;
        }
        break;
      }
    }
    break;

   case InductionCookerDeploy_IN_P300W:
    tmp = !*DigitalRead1;
    if (InductionCookerDeploy_DW.alarm || ((!InductionCookerDeploy_B.b_long_k) &&
         tmp)) {
      InductionCookerDeploy_DW.is_P300W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P0W;
      InductionCookerDeploy_DW.is_P0W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else if ((!InductionCookerDeploy_B.b_long) && tmp) {
      InductionCookerDeploy_DW.is_P300W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P500W;
      InductionCookerDeploy_DW.is_P500W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else {
      switch (InductionCookerDeploy_DW.is_P300W) {
       case InductionCookerDeploy_IN_SET:
        break;

       default:
        /* case IN_WAIT: */
        if (InductionCookerDeploy_DW.temporalCounter_i2 >= (uint32_T)ceil
            (InductionCookerDeploy_DW.SET_POWER_PATIENCE * 10.0)) {
          InductionCookerDeploy_DW.is_P300W = InductionCookerDeploy_IN_SET;
          InductionCookerDeploy_DW.current_power = 300U;
          InductionCookerDeploy_B.toggling_period =
            InductionC_TOGGLING_PERIOD_300W;
        }
        break;
      }
    }
    break;

   default:
    /* case IN_P500W: */
    if (InductionCookerDeploy_DW.alarm) {
      InductionCookerDeploy_DW.is_P500W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P0W;
      InductionCookerDeploy_DW.is_P0W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else if ((!InductionCookerDeploy_B.b_long_k) && (!*DigitalRead1)) {
      InductionCookerDeploy_DW.is_P500W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P300W;
      InductionCookerDeploy_DW.is_P300W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else if ((!InductionCookerDeploy_B.b_long) && (!*DigitalRead1)) {
      InductionCookerDeploy_DW.is_P500W = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P1000W;
      InductionCookerDeploy_DW.is_P1000W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
    } else {
      switch (InductionCookerDeploy_DW.is_P500W) {
       case InductionCookerDeploy_IN_SET:
        break;

       default:
        /* case IN_WAIT: */
        if (InductionCookerDeploy_DW.temporalCounter_i2 >= (uint32_T)ceil
            (InductionCookerDeploy_DW.SET_POWER_PATIENCE * 10.0)) {
          InductionCookerDeploy_DW.is_P500W = InductionCookerDeploy_IN_SET;
          InductionCookerDeploy_DW.current_power = 500U;
          InductionCookerDeploy_B.toggling_period =
            InductionC_TOGGLING_PERIOD_500W;
        }
        break;
      }
    }
    break;
  }
}

/* Model step function */
void InductionCookerDeploy_step(void)
{
  boolean_T DigitalRead1;
  boolean_T rtb_DigitalRead_0;

  /* MATLABSystem: '<S1>/Digital Read1' */
  if (InductionCookerDeploy_DW.obj_d.SampleTime !=
      InductionCookerDeploy_P.DigitalRead1_SampleTime) {
    InductionCookerDeploy_DW.obj_d.SampleTime =
      InductionCookerDeploy_P.DigitalRead1_SampleTime;
  }

  /* MATLABSystem: '<S1>/Digital Read1' */
  DigitalRead1 = MW_digitalIO_read
    (InductionCookerDeploy_DW.obj_d.MW_DIGITALIO_HANDLE);

  /* MATLABSystem: '<S1>/Digital Read' */
  if (InductionCookerDeploy_DW.obj_e.SampleTime !=
      InductionCookerDeploy_P.DigitalRead_SampleTime) {
    InductionCookerDeploy_DW.obj_e.SampleTime =
      InductionCookerDeploy_P.DigitalRead_SampleTime;
  }

  rtb_DigitalRead_0 = MW_digitalIO_read
    (InductionCookerDeploy_DW.obj_e.MW_DIGITALIO_HANDLE);

  /* Chart: '<S1>/onoff_button' incorporates:
   *  MATLABSystem: '<S1>/Digital Read'
   */
  if (InductionCookerDeploy_DW.temporalCounter_i1_a < 15U) {
    InductionCookerDeploy_DW.temporalCounter_i1_a++;
  }

  if (InductionCookerDeploy_DW.is_active_c3_InductionCookerDep == 0U) {
    InductionCookerDeploy_DW.is_active_c3_InductionCookerDep = 1U;
    InductionCookerDeploy_DW.is_c3_InductionCookerDeploy =
      InductionCookerDepl_IN_INACTIVE;
    InductionCookerDeploy_DW.is_INACTIVE = InductionCookerDeploy_IN_Wait_j;
    InductionCookerDeploy_B.work = InductionCookerDeploy_LOW;
  } else if (InductionCookerDeploy_DW.is_c3_InductionCookerDeploy ==
             InductionCookerDeploy_IN_ACTIVE) {
    switch (InductionCookerDeploy_DW.is_ACTIVE) {
     case InductionCooke_IN_LongPressed_b:
      InductionCookerDeploy_B.work = InductionCookerDeploy_LOW;
      if (rtb_DigitalRead_0) {
        InductionCookerDeploy_DW.is_ACTIVE = InductionCoo_IN_NO_ACTIVE_CHILD;
        InductionCookerDeploy_DW.is_c3_InductionCookerDeploy =
          InductionCookerDepl_IN_INACTIVE;
        InductionCookerDeploy_DW.is_INACTIVE = InductionCookerDeploy_IN_Wait_j;
      }
      break;

     case InductionCookerDe_IN_Pressed_oz:
      if (rtb_DigitalRead_0) {
        InductionCookerDeploy_DW.is_ACTIVE = InductionCookerDeplo_IN_Wait_je;
        InductionCookerDeploy_DW.b_long = true;
      } else if (!InductionCookerDeploy_DW.b_long) {
        InductionCookerDeploy_DW.is_ACTIVE = InductionCooke_IN_LongPressed_b;
        InductionCookerDeploy_B.work = InductionCookerDeploy_LOW;
      } else {
        InductionCookerDeploy_DW.b_long =
          (InductionCookerDeploy_DW.temporalCounter_i1_a < 10U);
      }
      break;

     default:
      /* case IN_Wait: */
      if (!rtb_DigitalRead_0) {
        InductionCookerDeploy_DW.is_ACTIVE = InductionCookerDe_IN_Pressed_oz;
        InductionCookerDeploy_DW.temporalCounter_i1_a = 0U;
        InductionCookerDeploy_DW.b_long = true;
      }
      break;
    }

    /* case IN_INACTIVE: */
  } else if (InductionCookerDeploy_DW.is_INACTIVE ==
             InductionCookerDep_IN_Pressed_o) {
    InductionCookerDeploy_B.work = InductionCookerDeploy_HIGH;
    if (rtb_DigitalRead_0) {
      InductionCookerDeploy_DW.is_INACTIVE = InductionCoo_IN_NO_ACTIVE_CHILD;
      InductionCookerDeploy_DW.is_c3_InductionCookerDeploy =
        InductionCookerDeploy_IN_ACTIVE;
      InductionCookerDeploy_DW.is_ACTIVE = InductionCookerDeplo_IN_Wait_je;
      InductionCookerDeploy_DW.b_long = true;
    }
  } else {
    /* case IN_Wait: */
    InductionCookerDeploy_B.work = InductionCookerDeploy_LOW;
    if (!rtb_DigitalRead_0) {
      InductionCookerDeploy_DW.is_INACTIVE = InductionCookerDep_IN_Pressed_o;
      InductionCookerDeploy_B.work = InductionCookerDeploy_HIGH;
    }
  }

  /* End of Chart: '<S1>/onoff_button' */

  /* MATLABSystem: '<S1>/Digital Read2' */
  if (InductionCookerDeploy_DW.obj_b.SampleTime !=
      InductionCookerDeploy_P.DigitalRead2_SampleTime) {
    InductionCookerDeploy_DW.obj_b.SampleTime =
      InductionCookerDeploy_P.DigitalRead2_SampleTime;
  }

  rtb_DigitalRead_0 = MW_digitalIO_read
    (InductionCookerDeploy_DW.obj_b.MW_DIGITALIO_HANDLE);

  /* Chart: '<S1>/increase_button' incorporates:
   *  MATLABSystem: '<S1>/Digital Read2'
   */
  InductionCooker_decrease_button(rtb_DigitalRead_0,
    &InductionCookerDeploy_B.b_long,
    &InductionCookerDeploy_DW.sf_increase_button);

  /* MATLABSystem: '<S1>/Digital Read3' */
  if (InductionCookerDeploy_DW.obj.SampleTime !=
      InductionCookerDeploy_P.DigitalRead3_SampleTime) {
    InductionCookerDeploy_DW.obj.SampleTime =
      InductionCookerDeploy_P.DigitalRead3_SampleTime;
  }

  rtb_DigitalRead_0 = MW_digitalIO_read
    (InductionCookerDeploy_DW.obj.MW_DIGITALIO_HANDLE);

  /* Chart: '<S1>/decrease_button' incorporates:
   *  MATLABSystem: '<S1>/Digital Read3'
   */
  InductionCooker_decrease_button(rtb_DigitalRead_0,
    &InductionCookerDeploy_B.b_long_k,
    &InductionCookerDeploy_DW.sf_decrease_button);

  /* Chart: '<S1>/induction_cooker' */
  if (InductionCookerDeploy_DW.temporalCounter_i1_l < 127U) {
    InductionCookerDeploy_DW.temporalCounter_i1_l++;
  }

  if (InductionCookerDeploy_DW.temporalCounter_i2 < MAX_uint32_T) {
    InductionCookerDeploy_DW.temporalCounter_i2++;
  }

  if (InductionCookerDeploy_DW.is_active_c5_InductionCookerDep == 0U) {
    InductionCookerDeploy_DW.is_active_c5_InductionCookerDep = 1U;
    InductionCookerDeploy_DW.is_c5_InductionCookerDeploy =
      InductionCookerDeploy_IN_OFF;
    InductionCookerDeploy_B.onoff_led = InductionCookerDeploy_LOW;
    InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
    InductionCookerDeploy_DW.current_power = 0U;
    InductionCookerDeploy_B.toggling_period = InductionCo_TOGGLING_PERIOD_OFF;
  } else if (InductionCookerDeploy_DW.is_c5_InductionCookerDeploy ==
             InductionCookerDeploy_IN_OFF) {
    if (InductionCookerDeploy_B.work) {
      InductionCookerDeploy_B.onoff_led = InductionCookerDeploy_HIGH;
      InductionCookerDeploy_DW.is_c5_InductionCookerDeploy =
        InductionCookerDeploy_IN_ON;
      InductionCookerDeploy_DW.is_LOGIC = InductionCookerDeploy_IN_P0W;
      InductionCookerDeploy_DW.is_P0W = InductionCookerDeploy_IN_WAIT;
      InductionCookerDeploy_DW.temporalCounter_i2 = 0U;
      InductionCookerDeploy_DW.is_ALARM = InductionCookerDepl_IN_INACTIVE;
      InductionCookerDeploy_DW.alarm = InductionCookerDeploy_LOW;
      InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
    }

    /* case IN_ON: */
  } else if (!InductionCookerDeploy_B.work) {
    InductionCookerDeploy_DW.is_ACTIVE_i = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_ALARM = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_P0W = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_P1000W = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_P1500W = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_P300W = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_P500W = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_LOGIC = InductionCoo_IN_NO_ACTIVE_CHILD;
    InductionCookerDeploy_DW.is_c5_InductionCookerDeploy =
      InductionCookerDeploy_IN_OFF;
    InductionCookerDeploy_B.onoff_led = InductionCookerDeploy_LOW;
    InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
    InductionCookerDeploy_DW.current_power = 0U;
    InductionCookerDeploy_B.toggling_period = InductionCo_TOGGLING_PERIOD_OFF;
  } else {
    InductionCookerDeploy_LOGIC(&DigitalRead1);
    if (InductionCookerDeploy_DW.is_ALARM == InductionCookerDeploy_IN_ACTIVE) {
      if (InductionCookerDeploy_DW.current_power == 0) {
        InductionCookerDeploy_DW.is_ACTIVE_i = InductionCoo_IN_NO_ACTIVE_CHILD;
        InductionCookerDeploy_DW.is_ALARM = InductionCookerDepl_IN_INACTIVE;
        InductionCookerDeploy_DW.alarm = InductionCookerDeploy_LOW;
        InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
      } else if (InductionCookerDeploy_DW.is_ACTIVE_i ==
                 InductionCookerDeploy_IN_ALARM) {
        if (!DigitalRead1) {
          InductionCookerDeploy_DW.is_ACTIVE_i = InductionCookerDeploy_IN_QUIET;
          InductionCookerDeploy_DW.alarm = InductionCookerDeploy_LOW;
          InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
        } else if (InductionCookerDeploy_DW.temporalCounter_i1_l >= 100U) {
          InductionCookerDeploy_DW.alarm = InductionCookerDeploy_HIGH;
          InductionCookerDeploy_DW.current_power = 0U;
          InductionCookerDeploy_B.toggling_period =
            InductionCoo_TOGGLING_PERIOD_0W;
          InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
        }

        /* case IN_QUIET: */
      } else if (DigitalRead1) {
        InductionCookerDeploy_DW.is_ACTIVE_i = InductionCookerDeploy_IN_ALARM;
        InductionCookerDeploy_DW.temporalCounter_i1_l = 0U;
        InductionCookerDeploy_B.alert_led = InductionCookerDeploy_HIGH;
      }

      /* case IN_INACTIVE: */
    } else if (InductionCookerDeploy_DW.current_power != 0) {
      InductionCookerDeploy_DW.is_ALARM = InductionCookerDeploy_IN_ACTIVE;
      InductionCookerDeploy_DW.is_ACTIVE_i = InductionCookerDeploy_IN_QUIET;
      InductionCookerDeploy_DW.alarm = InductionCookerDeploy_LOW;
      InductionCookerDeploy_B.alert_led = InductionCookerDeploy_LOW;
    }
  }

  /* End of Chart: '<S1>/induction_cooker' */

  /* MATLABSystem: '<S1>/Digital Write' */
  MW_digitalIO_write(InductionCookerDeploy_DW.obj_a.MW_DIGITALIO_HANDLE,
                     InductionCookerDeploy_B.alert_led);

  /* Chart: '<S1>/toggling_led' */
  if (InductionCookerDeploy_DW.temporalCounter_i1 < MAX_uint32_T) {
    InductionCookerDeploy_DW.temporalCounter_i1++;
  }

  if (InductionCookerDeploy_DW.is_active_c4_InductionCookerDep == 0U) {
    InductionCookerDeploy_DW.is_active_c4_InductionCookerDep = 1U;
    InductionCookerDeploy_DW.is_c4_InductionCookerDeploy =
      InductionCookerDeploy_IN_Off;
    DigitalRead1 = InductionCookerDeploy_LOW;
  } else {
    switch (InductionCookerDeploy_DW.is_c4_InductionCookerDeploy) {
     case InductionCookerDep_IN_Blink_Off:
      DigitalRead1 = InductionCookerDeploy_LOW;
      if (InductionCookerDeploy_B.toggling_period == 0.0) {
        InductionCookerDeploy_DW.is_c4_InductionCookerDeploy =
          InductionCookerDeploy_IN_Off;
      } else if (InductionCookerDeploy_DW.temporalCounter_i1 >= (uint32_T)ceil
                 (InductionCookerDeploy_DW.period * 10.0)) {
        InductionCookerDeploy_DW.is_c4_InductionCookerDeploy =
          InductionCookerDepl_IN_Blink_On;
        InductionCookerDeploy_DW.temporalCounter_i1 = 0U;
        DigitalRead1 = InductionCookerDeploy_HIGH;
        InductionCookerDeploy_DW.period =
          InductionCookerDeploy_B.toggling_period;
      }
      break;

     case InductionCookerDepl_IN_Blink_On:
      DigitalRead1 = InductionCookerDeploy_HIGH;
      if (InductionCookerDeploy_B.toggling_period == 0.0) {
        InductionCookerDeploy_DW.is_c4_InductionCookerDeploy =
          InductionCookerDeploy_IN_Off;
        DigitalRead1 = InductionCookerDeploy_LOW;
      } else if (InductionCookerDeploy_DW.temporalCounter_i1 >= (uint32_T)ceil
                 (InductionCookerDeploy_DW.period * 10.0)) {
        InductionCookerDeploy_DW.is_c4_InductionCookerDeploy =
          InductionCookerDep_IN_Blink_Off;
        InductionCookerDeploy_DW.temporalCounter_i1 = 0U;
        DigitalRead1 = InductionCookerDeploy_LOW;
        InductionCookerDeploy_DW.period =
          InductionCookerDeploy_B.toggling_period;
      }
      break;

     default:
      /* case IN_Off: */
      DigitalRead1 = InductionCookerDeploy_LOW;
      if (InductionCookerDeploy_B.toggling_period != 0.0) {
        InductionCookerDeploy_DW.is_c4_InductionCookerDeploy =
          InductionCookerDepl_IN_Blink_On;
        InductionCookerDeploy_DW.temporalCounter_i1 = 0U;
        DigitalRead1 = InductionCookerDeploy_HIGH;
        InductionCookerDeploy_DW.period =
          InductionCookerDeploy_B.toggling_period;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/toggling_led' */

  /* MATLABSystem: '<S1>/Digital Write1' */
  MW_digitalIO_write(InductionCookerDeploy_DW.obj_j.MW_DIGITALIO_HANDLE,
                     DigitalRead1);

  /* MATLABSystem: '<S1>/Digital Write2' */
  MW_digitalIO_write(InductionCookerDeploy_DW.obj_bg.MW_DIGITALIO_HANDLE,
                     InductionCookerDeploy_B.onoff_led);
}

/* Model initialize function */
void InductionCookerDeploy_initialize(void)
{
  {
    uint32_T pinname;
    mbed_DigitalRead_InductionCoo_T *obj;
    mbed_DigitalWrite_InductionCo_T *obj_0;

    /* SystemInitialize for Chart: '<S1>/increase_button' */
    InductionC_decrease_button_Init(&InductionCookerDeploy_B.b_long);

    /* SystemInitialize for Chart: '<S1>/decrease_button' */
    InductionC_decrease_button_Init(&InductionCookerDeploy_B.b_long_k);

    /* SystemInitialize for Chart: '<S1>/induction_cooker' */
    InductionCookerDeploy_DW.SET_POWER_PATIENCE = 5.0;

    /* Start for MATLABSystem: '<S1>/Digital Read1' */
    InductionCookerDeploy_DW.obj_d.matlabCodegenIsDeleted = false;
    InductionCookerDeploy_DW.obj_d.SampleTime =
      InductionCookerDeploy_P.DigitalRead1_SampleTime;
    obj = &InductionCookerDeploy_DW.obj_d;
    InductionCookerDeploy_DW.obj_d.isInitialized = 1;
    pinname = PC_10;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    InductionCookerDeploy_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Digital Read' */
    InductionCookerDeploy_DW.obj_e.matlabCodegenIsDeleted = false;
    InductionCookerDeploy_DW.obj_e.SampleTime =
      InductionCookerDeploy_P.DigitalRead_SampleTime;
    obj = &InductionCookerDeploy_DW.obj_e;
    InductionCookerDeploy_DW.obj_e.isInitialized = 1;
    pinname = PC_13;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    InductionCookerDeploy_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Digital Read2' */
    InductionCookerDeploy_DW.obj_b.matlabCodegenIsDeleted = false;
    InductionCookerDeploy_DW.obj_b.SampleTime =
      InductionCookerDeploy_P.DigitalRead2_SampleTime;
    obj = &InductionCookerDeploy_DW.obj_b;
    InductionCookerDeploy_DW.obj_b.isInitialized = 1;
    pinname = PC_2;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    InductionCookerDeploy_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Digital Read3' */
    InductionCookerDeploy_DW.obj.matlabCodegenIsDeleted = false;
    InductionCookerDeploy_DW.obj.SampleTime =
      InductionCookerDeploy_P.DigitalRead3_SampleTime;
    obj = &InductionCookerDeploy_DW.obj;
    InductionCookerDeploy_DW.obj.isInitialized = 1;
    pinname = PC_3;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 0);
    InductionCookerDeploy_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Digital Write' */
    InductionCookerDeploy_DW.obj_a.matlabCodegenIsDeleted = false;
    obj_0 = &InductionCookerDeploy_DW.obj_a;
    InductionCookerDeploy_DW.obj_a.isInitialized = 1;
    pinname = PA_7;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    InductionCookerDeploy_DW.obj_a.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Digital Write1' */
    InductionCookerDeploy_DW.obj_j.matlabCodegenIsDeleted = false;
    obj_0 = &InductionCookerDeploy_DW.obj_j;
    InductionCookerDeploy_DW.obj_j.isInitialized = 1;
    pinname = PA_6;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    InductionCookerDeploy_DW.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<S1>/Digital Write2' */
    InductionCookerDeploy_DW.obj_bg.matlabCodegenIsDeleted = false;
    obj_0 = &InductionCookerDeploy_DW.obj_bg;
    InductionCookerDeploy_DW.obj_bg.isInitialized = 1;
    pinname = PA_5;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(pinname, 1);
    InductionCookerDeploy_DW.obj_bg.isSetupComplete = true;
  }
}

/* Model terminate function */
void InductionCookerDeploy_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/Digital Read1' */
  if (!InductionCookerDeploy_DW.obj_d.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj_d.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj_d.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj_d.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj_d.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Read1' */

  /* Terminate for MATLABSystem: '<S1>/Digital Read' */
  if (!InductionCookerDeploy_DW.obj_e.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj_e.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj_e.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj_e.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj_e.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Read' */

  /* Terminate for MATLABSystem: '<S1>/Digital Read2' */
  if (!InductionCookerDeploy_DW.obj_b.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj_b.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj_b.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj_b.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj_b.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Read2' */

  /* Terminate for MATLABSystem: '<S1>/Digital Read3' */
  if (!InductionCookerDeploy_DW.obj.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Read3' */

  /* Terminate for MATLABSystem: '<S1>/Digital Write' */
  if (!InductionCookerDeploy_DW.obj_a.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj_a.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj_a.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj_a.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj_a.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Write' */

  /* Terminate for MATLABSystem: '<S1>/Digital Write1' */
  if (!InductionCookerDeploy_DW.obj_j.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj_j.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj_j.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj_j.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj_j.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Write1' */

  /* Terminate for MATLABSystem: '<S1>/Digital Write2' */
  if (!InductionCookerDeploy_DW.obj_bg.matlabCodegenIsDeleted) {
    InductionCookerDeploy_DW.obj_bg.matlabCodegenIsDeleted = true;
    if ((InductionCookerDeploy_DW.obj_bg.isInitialized == 1) &&
        InductionCookerDeploy_DW.obj_bg.isSetupComplete) {
      MW_digitalIO_close(InductionCookerDeploy_DW.obj_bg.MW_DIGITALIO_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S1>/Digital Write2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
