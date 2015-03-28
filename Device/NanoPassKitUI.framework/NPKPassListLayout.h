//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewLayout.h"

@interface NPKPassListLayout : UICollectionViewLayout
{
    BOOL _truncatePasses;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) BOOL truncatePasses; // @synthesize truncatePasses=_truncatePasses;
- (float)_nonStockholmStartingYOffset;
- (id)_layoutAttributesForElementsInRect:(struct CGRect)arg1 section:(int)arg2 yOffsetForItems:(float)arg3 itemCount:(int)arg4;
- (id)_layoutAttributesForNonStockholmElementsInRect:(struct CGRect)arg1;
- (id)_layoutAttributesForStockholmElementsInRect:(struct CGRect)arg1;
- (BOOL)_needsDivider;
@property(readonly) float nonStockholmStartingYOffset; // @dynamic nonStockholmStartingYOffset;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)init;

@end
