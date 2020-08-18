//
//  UIView+frame.h
//  ZJAssist
//
//  Created by tp on 2018/9/21.
//  Copyright © 2018年 欧文. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (frame)

@property (nonatomic, assign) CGFloat Au_x;//起点x
@property (nonatomic, assign) CGFloat Au_y;//起点y
@property (nonatomic, assign) CGFloat Au_width;//宽
@property (nonatomic, assign) CGFloat Au_height;//高
@property (nonatomic, assign, readonly) CGFloat Au_maxY;//左下角y值
@property (nonatomic, assign, readonly) CGFloat Au_minY;//左上角y值
@property (nonatomic, assign, readonly) CGFloat Au_maxX;//右上角x值
@property (nonatomic, assign, readonly) CGFloat Au_minX;//左上角x值
@property (nonatomic, assign, readonly) CGFloat Au_midX;//中心点x值
@property (nonatomic, assign, readonly) CGFloat Au_midY;//中心点x值

@end

