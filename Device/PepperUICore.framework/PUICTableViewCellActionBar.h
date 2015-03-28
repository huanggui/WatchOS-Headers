//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, PUICTableViewRowAction;

@interface PUICTableViewCellActionBar : UIView
{
    NSMutableArray *_buttons;
    NSMutableArray *_buttonPillViews;
    BOOL fullyTransparentWhenHidden;
    id <PUICTableViewCellActionBarDelegate> _delegate;
    float _currentOffset;
    unsigned int _state;
}

@property(readonly, nonatomic) float currentOffset; // @synthesize currentOffset=_currentOffset;
@property(readonly, nonatomic) PUICTableViewRowAction *nonDestructiveAction;
@property BOOL fullyTransparentWhenHidden; // @synthesize fullyTransparentWhenHidden;
- (void)_buttonHit:(id)arg1;
- (struct CGRect)_boundsWhenRevealed;
@property(readonly, nonatomic) float confirmationThreshold;
- (void)resetView;
- (void)animateContentsForDestructiveActionForCell:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) PUICTableViewRowAction *destructiveAction;
- (void)moveToOffset:(float)arg1 animated:(BOOL)arg2 buttonsHidden:(BOOL)arg3 initialVelocity:(float)arg4;
@property(readonly, nonatomic) float halfwayThreshold;
@property(readonly, nonatomic) float openThreshold;
- (void)refreshActions;
- (void).cxx_destruct;
- (void)willMoveToSuperview:(id)arg1;
- (void)didMoveToSuperview;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSArray *actions;
@property(nonatomic) __weak id <PUICTableViewCellActionBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;

@end
