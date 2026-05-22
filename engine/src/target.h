//
//  target.h
//  shmup
//
//  Created by fabien sanglard on 12-01-31.
//  Copyright (c) 2012 Memset Software. All rights reserved.
//

#ifndef shmup_target_h
#define shmup_target_h


/*
 
         The sole goal of this header is to define:
 
        SHMUP_TARGET_IOS
 */

#if defined (__APPLE__) 
#include <TargetConditionals.h>

   #if TARGET_OS_IPHONE==1 
      #define SHMUP_TARGET_IOS

   #endif

//__APPLE__
#endif

//shmup_target_h
#endif
