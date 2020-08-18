//
//  UIImage+BoundlePath.h
//  MADPH5Container
//
//  Created by 王    帅 on 2019/11/13.
//  Copyright © 2019 pactera. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (BoundlePath)

+ (UIImage *)imageNamed:(NSString *)imageName inBundleName:(NSString *)bundleName;

@end


