//
//  UIImage+mazaika.h
//  photo
//
//  Created by Иван Ушаков on 24.11.12.
//  Copyright (c) 2012 Иван Ушаков. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (mazaika)
- (UIImage *)crop:(CGRect)rect;
- (UIImage *)resize:(CGSize)newSize;
@end
