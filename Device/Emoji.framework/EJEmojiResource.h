//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface EJEmojiResource : NSObject
{
    NSString *_resourceName;
}

+ (id)URLForResource:(id)arg1 withExtension:(id)arg2;
+ (id)emojiResourceWithResourceName:(id)arg1;
@property(copy, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
- (BOOL)resourceExists;
- (id)URLForResource;
- (void).cxx_destruct;

@end

