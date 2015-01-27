//
//  ADDualTransition.h
//  ScreentransitionTest
//
//  Created by 大氣 on 2015/01/27.
//  Copyright (c) 2015年 Taiki. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "ADTransition.h"

@interface ADDualTransition : ADTransition {
    CAAnimation * _inAnimation;
    CAAnimation * _outAnimation;
}

@property (nonatomic, readonly) CAAnimation * inAnimation;
@property (nonatomic, readonly) CAAnimation * outAnimation;

- (id)initWithDuration:(CFTimeInterval)duration;
- (id)initWithInAnimation:(CAAnimation *)inAnimation andOutAnimation:(CAAnimation *)outAnimation;
- (void)finishInit;
@end

