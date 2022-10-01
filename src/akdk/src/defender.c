#include "defender/defender.h"

void def_prep_kickoff_home(def_data_t *data, uint8_t *ret)
{
    printf("DEF_Prep_kickoff: %d %d\n", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
}

void def_start_kickoff_home(def_data_t *data, uint8_t *ret)
{
    printf("DEF_Start_kickoff: %d %d\n", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
    *ret = 100;
}

void def_run(def_data_t *data, uint8_t *ret)
{
    // printf("stat: %d \n", data->game_status);

    switch (data->game_status)
    {
    case PREP_KICKOFF_HOME:
        def_prep_kickoff_home(data, ret);
        break;
    case START_KICKOFF_HOME:
        def_start_kickoff_home(data, ret);
        break;
    }
}