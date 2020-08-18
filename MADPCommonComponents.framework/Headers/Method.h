//
//  Method.h
//  MobileBank
//
//  Created by 王    帅 on 6/12/18.
//  Copyright © 2018年 Alibaba. All rights reserved.
//

#ifndef Method_h
#define Method_h

// 设备判断
#define iPhone5      ((SCREEN_WIDTH == 320) && (SCREEN_HEIGHT == 568))
#define iPhone6      ((SCREEN_WIDTH == 375) && (SCREEN_HEIGHT == 667))
#define iPhone6_Plus ((SCREEN_WIDTH == 414) && (SCREEN_HEIGHT == 736))
#define iPhoneX      ((SCREEN_WIDTH == 375) && (SCREEN_HEIGHT == 812))
#define iPhoneXMAX   ((SCREEN_WIDTH == 414) && (SCREEN_HEIGHT == 896))

// NSUserDefaults
#define GET_USER_DEFAULTS(key) [[NSUserDefaults standardUserDefaults] objectForKey:key]
#define REMOVE_USER_DEFAULTS(key) [[NSUserDefaults standardUserDefaults] removeObjectForKey:key]
#define SET_USER_DEFAULTS(obj, key) [[NSUserDefaults standardUserDefaults] setObject:obj forKey:key]

// 存取token
#define SET_TOKEN(token) SET_USER_DEFAULTS(token, @"token")
#define GET_TOKEN        GET_USER_DEFAULTS(@"token")

// 存取用户id(用户本地归档用)
#define SET_USERID(id)   SET_USER_DEFAULTS(id, KEY_USER_ID)
#define GET_USERID       GET_USER_DEFAULTS(KEY_USER_ID)

// 强弱引用
#define WeakSelf(type)  __weak typeof(type) weak##type = type;     // weak
#define StrongSelf(type)  __strong typeof(type) type = weak##type; // strong

// app版本号
#define VERSION [[[NSBundle mainBundle] infoDictionary] objectForKey:@"CFBundleShortVersionString"]
#define NEWVERSION  [GET_USER_DEFAULTS(APPVERSION)  isEqualToString:VERSION] ? [GET_USER_DEFAULTS(APPVERSION)  isEqualToString:VERSION] : NO

//下载文件存放地址
//缓存主目录
#define MADPCachesDirectory [[NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"MADPCache"]
//保存文件名
#define MADPFileName(url) url.md5String
//文件存放路径
#define MADPFileFullpath(url) [MADPCachesDirectory stringByAppendingPathComponent:MADPFileName(url)]

#endif /* Method_h */
