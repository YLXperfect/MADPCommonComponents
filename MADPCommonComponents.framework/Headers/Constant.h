//
//  Constant.h
//  MobileBank
//
//  Created by 王    帅 on 6/12/18.
//  Copyright © 2018年 Alibaba. All rights reserved.
//  常量

#ifndef Constant_h
#define Constant_h

//屏幕大小
#define SCREEN_WIDTH ([UIScreen mainScreen].bounds.size.width)
#define SCREEN_HEIGHT ([UIScreen mainScreen].bounds.size.height)

//字体
#define FONT_TYPE_MEDIUM @"PingFang-SC-Medium" //中等字体
#define FONT_TYPE_REGULAR @"PingFang-SC-Regular" //常用字体
#define FONT_TYPE_LIGHT @"PingFang-SC-Light" //高亮字体

//文字大小
#define FONT_SIZE_SYSTEM  17.0f //系统字体大小
#define FONT_SIZE_TITLE   16.0f //标题
#define FONT_SIZE_SUBTIE  15.0f //小标题
#define FONT_SIZE_MIDIUM  13.0f //中等
#define FONT_SIZE_MAIN    14.0f //正文

//时间相关
#define EXPIRED_TIME  60480 //一周 60*60*24*7

//缩放倍数
#define SCREEN_SCALE (SCREEN_WIDTH / 375.0f)
#define SCREEN_SCALE_H (SCREEN_WIDTH / 375.0f) //横屏比例

//多数据分页默认请求条数
#define REQUEST_COUNT 20

//secton
#define HEIGHT_SECTION_MAX 10.0f //section最大间隔宽度
#define HEIGHT_SECTION_MIN 0.01f //section最小间隔宽度，防止IOS 9中设置为0时候出现问题

//space & margin
#define HEIGHT_SPACE           5.0f //普通间隔
#define HEIGHT_MARGIN_TOP      10.0f //上方间隔
#define HEIGHT_MARGIN_BOTTOM   10.0f //底部间隔
#define HEIGHT_MARGIN_LEFT     15.0f //左边间隔
#define HEIGHT_MARGIN_RIGHT    15.0f //右边间隔


#define kIs_iphone (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
#define kIs_iPhoneX SCREEN_WIDTH >=375.0f && SCREEN_HEIGHT >=812.0f && kIs_iphone
    
/*状态栏高度*/ //状态栏高度（信号，营业商，等）
#define HEIGHT_STATUBAR (CGFloat)(kIs_iPhoneX?(44.0):(20.0))
/*导航栏高度*/
#define kNavBarHeight (44)
/*状态栏和导航栏总高度*/
#define HEIGHT_NAVIGATIONBAR (CGFloat)(kIs_iPhoneX?(88.0):(64.0))
/*TabBar高度*/
#define HEIGHT_TABBAR (CGFloat)(kIs_iPhoneX?(49.0 + 34.0):(49.0))
/*顶部安全区域远离高度*/
#define kTopBarSafeHeight (CGFloat)(kIs_iPhoneX?(44.0):(0))
 /*底部安全区域远离高度*/
#define kBottomSafeHeight (CGFloat)(kIs_iPhoneX?(34.0):(0))
/*iPhoneX的状态栏高度差值*/
#define kTopBarDifHeight (CGFloat)(kIs_iPhoneX?(24.0):(0))
/*导航条和Tabbar总高度*/ //竖屏navigationBar高度（包含了statubar高度）
#define kNavAndTabHeight (HEIGHT_NAVIGATIONBAR + HEIGHT_TABBAR)

/*横屏navigationBar高度(包含statubar高度)*/
#define HEIGHT_NAVIGATIONBAR_H 49.0

// 公用视图
#define HEIGHT_LINE        1.0f   // 分割线
#define HEIGHT_SEARCH_BAR  50.0f  // 搜索框
#define HEIGHT_MAP_CELL    200.0f // 地图cell
#define HEIGHT_PICKER_CELL 40.0f  // picker选择器

//首页

//金融

//生活

//我的


#endif /* Constant_h */
