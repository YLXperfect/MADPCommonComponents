//
//  Color.h
//  MobileBank
//
//  Created by 王    帅 on 6/12/18.
//  Copyright © 2018年 Alibaba. All rights reserved.
//  颜色

#ifndef Color_h
#define Color_h

//颜色宏定义
#define RGBA(r,g,b,a) [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:a]//带透明度的rgb色
#define RGBD(r,g,b) RGBA(r,g,b,1)//默认透明度为1的颜色

#define COLOR_APP_ORANGE  RGBD(255,235,202)//系统橘黄色
#define COLOR_WHITE       [UIColor  whiteColor] //白色

//背景颜色
#define COLOR_BACKGROUND         RGBD(240,243,245)//全局通用背景色
#define COLOR_BACKGROUND_BTN     RGBA(44,195,255,0.65)//全局通用按钮背景色
#define COLOR_BACKGROUND_LINE    RGBA(0,0,0,0.35)//全局通用线条背景色
#define COLOR_BACKGROUND_TABBAR  RGBD(237,237,237)//tabbar背景颜色

//文本相关颜色
#define COLOR_TEXT_TITLE         RGBA(0,0,0,0.85)//主标题
#define COLOR_TEXT_SUBHEADING    RGBA(0,0,0,0.75)//副标题
#define COLOR_TEXT_MAIN          RGBA(0,0,0,0.65)//正文
#define COLOR_TEXT_PLACEHODER    RGBA(0,0,0,0.2)//占位符，超级浅色

//首页页面相关颜色




//金融页面相关颜色



//生活页面相关颜色



//我的页面相关颜色



//主打色系
#define COLOR_SYSTEM_MAIN        UIColorFromRGBHex(0x3c76fe)
#define COLOR_SYSTEM_NOTSELECTED UIColorFromRGBHexAndA(0x3c76fe,0.2)
#define COLOR_AUXILIARY_ONE      UIColorFromRGBHex(0xef7d18)
#define COLOR_AUXILIARY_TWO      UIColorFromRGBHex(0xc3a158)
#define COLOR_AUXILIARY_THREE    UIColorFromRGBHex(0x3a72d9)

#endif /* Color_h */
