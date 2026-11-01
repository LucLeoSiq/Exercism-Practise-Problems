#include "queen_attack.h"

#define BOARD_SIZE 8

attack_status_t can_attack(position_t queen_1, position_t queen_2){ 
    // Check for invalid positions
    if (queen_1.row == queen_2.row && queen_1.column == queen_2.column)
        return INVALID_POSITION;

    if (queen_1.row >= BOARD_SIZE || queen_2.row >= BOARD_SIZE) 
        return INVALID_POSITION;

    if (queen_1.column >= BOARD_SIZE || queen_2.column >= BOARD_SIZE) 
        return INVALID_POSITION;

    //Check all valid attack positions
    if (queen_1.column == queen_2.column)
        return CAN_ATTACK;
    
    if (queen_1.row == queen_2.row)
        return CAN_ATTACK;

    if (queen_1.column - queen_1.row == queen_2.column - queen_2.row)
        return CAN_ATTACK;

    if (queen_1.column + queen_1.row == queen_2.column + queen_2.row)
        return CAN_ATTACK;
    
    return CAN_NOT_ATTACK;
}

