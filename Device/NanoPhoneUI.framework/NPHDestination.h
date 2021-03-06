//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NPHDestinationDisplayDetails, NSString;

@interface NPHDestination : NSObject
{
    NSString *_destinationID;
    int _callService;
}

+ (id)destinationFromURL:(id)arg1;
@property(readonly, nonatomic) NSString *destinationID; // @synthesize destinationID=_destinationID;
@property(readonly, nonatomic) NPHDestinationDisplayDetails *displayDetails;
- (void)logWithReason:(id)arg1 indented:(BOOL)arg2;
- (id)initWithDestinationID:(id)arg1 callService:(int)arg2;
@property(readonly, nonatomic) int callService; // @synthesize callService=_callService;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *description;

@end

