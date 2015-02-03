//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SPActivatingView : UIView
{
    _Bool _locked;
    _Bool _updating;
    _Bool _loading;
    _Bool _disconnected;
    id <SPActivatingViewDelegate> _delegate;
    UIView *_lockedView;
    UIView *_loadingView;
    UIView *_disconnectedView;
    UIImageView *_snapshotView;
    UIView *_lastUpdatedView;
}

+ (void)initialize;
@property(nonatomic, getter=isDisconnected) _Bool disconnected; // @synthesize disconnected=_disconnected;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(retain, nonatomic) UIView *lastUpdatedView; // @synthesize lastUpdatedView=_lastUpdatedView;
@property(retain, nonatomic) UIImageView *snapshotView; // @synthesize snapshotView=_snapshotView;
@property(retain, nonatomic) UIView *disconnectedView; // @synthesize disconnectedView=_disconnectedView;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *lockedView; // @synthesize lockedView=_lockedView;
@property(nonatomic) __weak id <SPActivatingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isLocked) _Bool locked; // @synthesize locked=_locked;
- (void).cxx_destruct;
- (_Bool)_isSameDay:(id)arg1 otherDay:(id)arg2;
- (_Bool)_isYesterday:(id)arg1;
- (_Bool)_isToday:(id)arg1;
- (id)_timeStampStringForDate:(id)arg1;
- (void)_tearDownLastUpdatedView;
- (void)_updateLastUpdatedView;
- (void)_setupLastUpdatedView;
- (void)_displayLastUpdatedView;
- (void)_teardownSnapshotView;
- (void)_updateSnapshotView;
- (void)_setupSnapshotView;
- (void)_displaySnapshotView;
- (void)_tearDownLoadingView;
- (void)stopAnimating;
- (void)_setupLoadingView;
- (void)_displayLoadingView;
- (void)startAnimating;
- (_Bool)isAnimating;
- (void)_tearDownDisconnectedView;
- (void)_setupDisconnectedView;
- (void)_displayDisconnectedView;
- (void)_tearDownLockedView;
- (void)_setupLockedView;
- (void)_displayLockedView;
- (void)_updateVisibilityOfSubviews;
- (void)_removeFromSuperviewIfNecessary;
- (void)_sizeAndAddToParentView;
- (void)endMonitoringDisconnectedStatus;
- (void)startMonitoringDisconnectedStatus;
- (id)initWithDelegate:(id)arg1;

@end
