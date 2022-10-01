#ifndef DEFENDER_H
#define DEFENDER_H

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "defender/BS_utils.h"

    // Data to be proceed to make robot's decision
    typedef struct def_data_tag
    {
        int16_t robot_x[6];
        int16_t robot_y[6];
        int16_t robot_th[6];
        uint8_t robot_num;
        int16_t ball_x;
        int16_t ball_y;
        char obs[15];
        uint8_t total_obs;
        uint8_t game_status;

    } def_data_t;

    void def_prep_kickoff_home(def_data_t *data, uint8_t *ret);
    void def_start_kickoff_home(def_data_t *data, uint8_t *ret);

    void def_run(def_data_t *data, uint8_t *ret);

#ifdef __cplusplus
}
#endif

#endif