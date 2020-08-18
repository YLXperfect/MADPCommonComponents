//
//  PacteraJPViewControllerHelper.h
//  PictureUtils
//
//  Created by BruceHu on 2019/11/27.
//  Copyright © 2019 BruceHu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PacteraJPViewControllerHelper : NSObject

#pragma mark - FindCurrentShowingViewController
/// 获取Window当前显示的视图控制器ViewController
+ (UIViewController *)findCurrentShowingViewController;


/// 获取Window当前显示的视图控制器ViewController
/// @param vc 从哪个界面开始分析
/// 返回当前显示的视图控制器ViewController
+ (UIViewController *)findCurrentShowingViewControllerFrom:(UIViewController *)vc;


#pragma mark - FindBelongViewControllerForView
/// 获取view属于哪一个Controller
/// @param view 需要找ViewController的view
/// 返回显示view的对应ViewController
+ (nullable UIViewController *)findBelongViewControllerForView:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
