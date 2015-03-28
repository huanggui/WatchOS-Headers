//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIImageView;

@interface PUICPageIndicatorView : UIView
{
    long long _numberOfPages;
    long long _currentPage;
    UIColor *_indicatorColor;
    UIImageView *_currentIndicator;
}

+ (id)_currentIndicatorImageSmallWithColor:(id)arg1;
+ (id)_currentIndicatorImageWithColor:(id)arg1;
+ (id)_indicatorImageSmall;
+ (id)_indicatorImage;
+ (id)_generateIndicatorImageWithSize:(double)arg1 andColor:(id)arg2;
@property(retain, nonatomic) UIImageView *currentIndicator; // @synthesize currentIndicator=_currentIndicator;
@property(retain, nonatomic) UIColor *indicatorColor; // @synthesize indicatorColor=_indicatorColor;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_dotSpacing;
- (double)_dotSize;

@end
