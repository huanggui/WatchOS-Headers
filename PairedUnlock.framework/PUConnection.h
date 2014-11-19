//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUUnlockClient.h"

@class NSString, NSXPCConnection;

@interface PUConnection : NSObject <PUUnlockClient>
{
    CDUnknownBlockType _getRemoteDevicePasscodeStateHandler;
    id <PUConnectionDelegate> _delegate;
    NSXPCConnection *_connection;
}

@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <PUConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didGetRemoteDeviceHasPasscode:(_Bool)arg1 isLocked:(_Bool)arg2 isUnlockOnly:(_Bool)arg3 error:(id)arg4;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidCompletePasscodeAction:(_Bool)arg1 error:(id)arg2;
- (void)didDisableOnlyRemoteUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didEnableOnlyRemoteUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didUnpairForUnlock:(_Bool)arg1 error:(id)arg2;
- (void)didPairForUnlock:(_Bool)arg1 error:(id)arg2;
- (void)getRemoteDeviceState:(CDUnknownBlockType)arg1;
- (void)getRemoteDevicePasscodeState:(CDUnknownBlockType)arg1;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDevicePasscodeAction:(long long)arg1;
- (void)setUnlockEnabled:(_Bool)arg1;
- (void)disableOnlyRemoteUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1;
- (void)unpairForUnlock;
- (void)pairForUnlockWithPasscode:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
