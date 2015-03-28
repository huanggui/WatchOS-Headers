//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class UIView, UIViewController<ETPersonViewTransitioning>;

@protocol ETPersonViewTransitioning
- (void)animateTransitionAppearing:(BOOL)arg1 withSiblingTransitionPersonView:(UIView *)arg2 fromViewController:(UIViewController<ETPersonViewTransitioning> *)arg3 toViewController:(UIViewController<ETPersonViewTransitioning> *)arg4;
- (UIView *)transitionPersonView;

@optional
- (BOOL)usesCompactStatusBarHitArea;
- (float)maxAllowableStatusBarWidth;
- (void)animateOutForButtonWithDuration:(double)arg1;
- (void)animateInForButtonWithDuration:(double)arg1;
- (void)completeAnimatedTransitionAppearing:(BOOL)arg1;
- (void)prepareToAnimateTransitionAppearing:(BOOL)arg1 withSiblingTransitionPersonView:(UIView *)arg2 fromViewController:(UIViewController<ETPersonViewTransitioning> *)arg3;
@end
