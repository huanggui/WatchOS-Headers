//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PUICCAAnimationDelegateBlockCaller : NSObject
{
    PUICCAAnimationDelegateBlockCaller *_circleOfLife;
    CDUnknownBlockType _completionBlock;
}

@property(retain, nonatomic) PUICCAAnimationDelegateBlockCaller *circleOfLife; // @synthesize circleOfLife=_circleOfLife;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;

@end

