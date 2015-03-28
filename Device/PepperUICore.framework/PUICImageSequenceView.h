//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSBundle, NSMutableArray, NSString;

@interface PUICImageSequenceView : UIView
{
    unsigned int _displayedIndex;
    NSString *_imageNamePrefix;
    NSArray *_imageNames;
    NSBundle *_bundle;
    unsigned int _maxIndex;
    NSMutableArray *_images;
    id _sentinel;
}

- (void)clearCaches;
@property(readonly, nonatomic) unsigned int displayedIndex; // @synthesize displayedIndex=_displayedIndex;
@property(readonly, nonatomic) unsigned int maxIndex; // @synthesize maxIndex=_maxIndex;
- (void)displayImageForPercentage:(float)arg1;
- (id)initWithImageNames:(id)arg1 bundle:(id)arg2;
- (id)initWithImageNamePrefix:(id)arg1 bundle:(id)arg2 maxIndex:(unsigned int)arg3;
- (void)displayImageAtIndex:(unsigned int)arg1;
- (void).cxx_destruct;
- (void)_commonInit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
