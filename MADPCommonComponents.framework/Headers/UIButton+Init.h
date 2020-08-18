//
//  UIButton+Init.h
//  ZJAssist
//
//  Created by tp on 2018/6/20.
//  Copyright © 2018年 欧文. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, ArrangePosition) {
    ArrangePositionImageLeftTitleRight = 0, // 默认图左标题右
    ArrangePositionImageRightTitleLeft,     // 图右标题左
    ArrangePositionImageTopTitleBottom,     // 图上标题下
    ArrangePositionImageBottomTitleTop      // 图下标题上
};

@interface UIButton (Init)

/**
 根据背景色+文字，创建按钮

 @param backgroundColor 按钮背景色
 @param title           按钮标题
 @param font            按钮标题字体
 @param titleColor      按钮标题字体颜色
 @param alinment        按钮标题对齐方式
 @return 返回创建好的按钮
 */
+ (instancetype)buttonWithBackgroundColor:(UIColor *)backgroundColor
                                    title:(NSString *)title
                                titleFont:(UIFont *)font
                               titleColor:(UIColor *)titleColor
                             textAlinment:(UIControlContentHorizontalAlignment)alinment;


/**
 根据图片+文字，创建按钮

 @param imageName  图片名字
 @param title      按钮标题
 @param titleColor 按钮标题颜色
 @param font       按钮标题字体
 @param position   图片和文字位置
 @return 调整位置后按钮
 */
+ (instancetype)buttonWithImage:(NSString *)imageName
                          title:(NSString *)title
                     titleColor:(UIColor *)titleColor
                      titleFont:(UIFont *)font
                arrangePosition:(ArrangePosition)position;


/**
 根据图片+文字，创建按钮
 （唯一不同之处在于按钮创建方式不同）
 @param imageName  图片名字
 @param title      按钮标题
 @param titleColor 按钮标题颜色
 @param font       按钮标题字体
 @param position   图片和文字位置
 @return 调整位置后按钮
 */
+ (instancetype)WSbuttonWithImage:(NSString *)imageName
                          title:(NSString *)title
                     titleColor:(UIColor *)titleColor
                      titleFont:(UIFont *)font
                arrangePosition:(ArrangePosition)position;


/**
 根据文字设置，创建按钮
 
 @param title      按钮标题
 @param titleColor 按钮标题颜色
 @param font       按钮标题字体
 @return           调整位置后按钮
 */
+ (instancetype)buttonWithTitle:(NSString*)title
                    titleColor:(UIColor *)titleColor
                     titleFont:(UIFont *)font;


/**
 根据图片名字，创建按钮

 @param imageName 图片名字
 @return          创建好的按钮
 */
+ (instancetype)buttonWithImageName:(NSString *)imageName;


//新增加一个属性，用来判断是否使用水波纹效果
@property (assign, nonatomic)  BOOL  isUseRipple;

@end
