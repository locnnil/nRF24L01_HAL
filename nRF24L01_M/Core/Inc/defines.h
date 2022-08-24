/*
 * defines.h
 *
 *  Created on: 24 de ago de 2022
 *      Author: lincoln.almeida
 */

#ifndef INC_DEFINES_H_
#define INC_DEFINES_H_

#ifdef DEBUG
#define DEBUGBKPT()     __BKPT()
#else
#define DEBUGBKPT()
#endif

#endif /* INC_DEFINES_H_ */
