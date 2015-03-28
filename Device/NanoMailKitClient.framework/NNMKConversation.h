//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NNMKMailboxItem.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDate, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface NNMKConversation : NSObject <NNMKMailboxItem, NSSecureCoding, NSCopying>
{
    NSString *_subject;
    NSString *_preview;
    unsigned int _status;
    NSString *_conversationId;
    NSArray *_from;
    NSMutableOrderedSet *_messagesIds;
    NSMutableDictionary *_messagesDateReceivedKeyedByMessagesIds;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)hasSingleMessage;
- (id)indexesOfMessages:(id)arg1;
- (unsigned int)indexOfMessageId:(id)arg1;
- (id)messageIdAtIndex:(unsigned int)arg1;
- (void)removeMessageWithId:(id)arg1;
- (void)addMessageId:(id)arg1 dateReceived:(id)arg2;
@property(readonly, nonatomic) unsigned int messagesCount;
@property(retain, nonatomic) NSMutableDictionary *messagesDateReceivedKeyedByMessagesIds; // @synthesize messagesDateReceivedKeyedByMessagesIds=_messagesDateReceivedKeyedByMessagesIds;
@property(retain, nonatomic) NSMutableOrderedSet *messagesIds; // @synthesize messagesIds=_messagesIds;
@property(retain, nonatomic) NSString *preview; // @synthesize preview=_preview;
- (unsigned int)_indexForNewMessageWithDateReceived:(id)arg1 messageId:(id)arg2;
- (BOOL)checkState:(unsigned int)arg1;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) NSDate *dateReceived; // @dynamic dateReceived;
@property(retain, nonatomic) NSArray *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeState:(unsigned int)arg1;
- (void)addState:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
