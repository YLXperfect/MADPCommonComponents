//
//  UIColor+change.h
//  MADPH5Container
//
//  Created by 王    帅 on 2019/12/30.
//  Copyright © 2019 pactera. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (change)

//16进制颜色转换为UIColor(RGB)
+(UIColor *)colorWithHexString:(NSString *)color;

@end

NS_ASSUME_NONNULL_END
