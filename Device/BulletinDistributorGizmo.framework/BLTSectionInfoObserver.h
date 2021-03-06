//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BBObserverDelegate.h"

@class BBObserver, NSObject<OS_dispatch_queue>, NSString;

@interface BLTSectionInfoObserver : NSObject <BBObserverDelegate>
{
    BBObserver *_observer;
    NSObject<OS_dispatch_queue> *_queue;
    id <BLTSectionInfoObserverDelegate> _delegate;
}

- (void)updateSectionInfoBySectionIDs:(id)arg1;
- (void)_getBBSectionInfoExtendedProperties:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_reloadSectionInfosWithCompletion:(CDUnknownBlockType)arg1;
- (void)reloadWithCompletion:(CDUnknownBlockType)arg1;
- (void)observer:(id)arg1 updateSectionInfo:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <BLTSectionInfoObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

