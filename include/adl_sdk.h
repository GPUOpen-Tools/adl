//
//  Copyright (c) 2008-2024 Advanced Micro Devices, Inc.
//

/// \file adl_sdk.h
/// \brief Contains the definition of the Memory Allocation Callback.\n <b>Included in ADL SDK</b>
///
/// \n\n
/// This file contains the definition of the Memory Allocation Callback.\n
/// It also includes definitions of the respective structures and constants.\n
/// <b> This is the only header file to be included in a C/C++ project using ADL </b>

#ifndef ADL_SDK_H_
#define ADL_SDK_H_

#include "adl_structures.h"

#if defined (LINUX)
#define __stdcall
#endif /* (LINUX) */

/// Memory Allocation Call back 
typedef void* ( __stdcall *ADL_MAIN_MALLOC_CALLBACK )( int );


#endif /* ADL_SDK_H_ */
