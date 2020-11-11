//
//  UIColor+Extend.h
//  MADPCommonComponents
//
//  Created by BruceHu on 2020/9/1.
//  Copyright © 2020 singers. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (Extend)


/**
 *  十六进制颜色
 */
+ (UIColor *)colorWithHexColorString:(NSString *)hexColorString;


/**
 *  十六进制颜色:含alpha
 */
+ (UIColor *)colorWithHexColorString:(NSString *)hexColorString alpha:(float)alpha;


/// 按水平或垂直方向 渐变颜色
/// @param view 需要添加渐变色的view
/// @param colorS 渐变颜色，目前是支持两种渐变
/// @param fram 渐变的范围
/// @param direction 方向：horizontal 水平方向；vertical 竖直方向
+ (void)gradientProcessing:(UIView *)view colors:(NSArray<UIColor *> *)colorS gradFram:(CGRect)fram direction:(NSString *)direction;

/// 按角度 渐变颜色
/// @param view 需要添加渐变色的view
/// @param colorS 渐变颜色，目前是支持两种渐变
/// @param fram 渐变的范围
/// @param angle 渐变色的角度 (0, 360]
+ (void)gradientProcessing:(UIView *)view colors:(NSArray<UIColor *> *)colorS gradFram:(CGRect)fram angle:(CGFloat)angle;

@end

NS_ASSUME_NONNULL_END
