//
//  ADTransition.h
//  ScreentransitionTest
//
//  Created by 大氣 on 2015/01/27.
//  Copyright (c) 2015年 Taiki. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <QuartzCore/QuartzCore.h>

extern NSString * ADTransitionAnimationKey;
extern NSString * ADTransitionAnimationInValue;
extern NSString * ADTransitionAnimationOutValue;

@class ADTransition;
@protocol ADTransitionDelegate
@optional
- (void)pushTransitionDidFinish:(ADTransition *)transition;
- (void)popTransitionDidFinish:(ADTransition *)transition;
@end

typedef enum {
    ADTransitionTypeNull,
    ADTransitionTypePush,
    ADTransitionTypePop
} ADTransitionType;

typedef enum {
    ADTransitionRightToLeft,
    ADTransitionLeftToRight,
    ADTransitionTopToBottom,
    ADTransitionBottomToTop
} ADTransitionOrientation;


@interface ADTransition : NSObject {
    id <ADTransitionDelegate> __weak _delegate;
    ADTransitionType _type;
}

@property (nonatomic, weak) id <ADTransitionDelegate> delegate;
@property (nonatomic, assign) ADTransitionType type;
@property (nonatomic, readonly) NSTimeInterval duration; // abstract

+ (ADTransition *)nullTransition;
- (ADTransition *)reverseTransition;
- (NSArray *)getCircleApproximationTimingFunctions;
@end

