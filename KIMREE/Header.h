//
//  Header.h
//  Smoking
//
//  Created by JIRUI on 14-4-1.
//  Copyright (c) 2014年 ___FULLUSERNAME___. All rights reserved.
//

#ifndef haitaotong_Header_h
#define haitaotong_Header_h

#ifdef DEBUG
  #define THLog(...)  printf("\n\n--------------------\n%s Line:%d]\n[\n%s\n]", __FUNCTION__,__LINE__,[[NSString stringWithFormat:__VA_ARGS__] UTF8String])
#else
  #define THLog(...)
#endif

#import "Config.h"
#import "ApiDef.h"
#import "NotificationNameDef.h"
#import "UserDefaultsKeyDef.h"
#import "FunctionDef.h"
#import "FontDef.h"
#import "ColorDef.h"
#import "ConstantDef.h"
#import "ShortcutDef.h"
#import "ErrorCodeDef.h"
//#import "AppHelper.h"
#import "JRFundation.h"
//#import "JRUIKit.h"
//#import "JRNetwork.h"
#import "JRTool.h"

#endif
