//
//  UILabel+Init.h
//  ZJAssist
//
//  Created by tp on 2018/6/19.
//  Copyright © 2018年 欧文. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Init)

/**
 初始化UILabel

 @param fontName  Label上显示字体类型
 @param fontSize  Label上显示字体大小
 @param textColor Label上显示字体颜色
 @return 创建好的字体
 */
+ (instancetype)labelWithFontName:(NSString *)fontName
                         fontSize:(CGFloat)fontSize
                        textColor:(UIColor *)textColor;


@end
