//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSData, NSString;

@interface NNMKProtoImageAttachmentSync : PBCodable <NSCopying>
{
    NSString *_contentId;
    NSData *_dateSynced;
    unsigned int _fullSyncVersion;
    NSData *_imageData;
    NSString *_messageId;
    CDStruct_a125a100 _has;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
@property(readonly, nonatomic) BOOL hasContentId;
@property(retain, nonatomic) NSData *dateSynced; // @synthesize dateSynced=_dateSynced;
@property(readonly, nonatomic) BOOL hasDateSynced;
@property(readonly, nonatomic) BOOL hasMessageId;
@property(nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property(nonatomic) BOOL hasFullSyncVersion;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(readonly, nonatomic) BOOL hasImageData;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;

@end
