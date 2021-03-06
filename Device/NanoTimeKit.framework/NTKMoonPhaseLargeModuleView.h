//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKComplicationModuleView.h>

#import "NTKMoonPhaseComplicationDisplay.h"

@class NSDate, NSString, NTKColoringLabel, UIFont;

@interface NTKMoonPhaseLargeModuleView : NTKComplicationModuleView <NTKMoonPhaseComplicationDisplay>
{
    float _fontSize;
    NTKColoringLabel *_phaseLabel;
    NTKColoringLabel *_eventLabel;
    NTKColoringLabel *_eventTimeLabel;
    NTKColoringLabel *_countdownLabel;
    BOOL _noEvent;
    NSDate *_eventDate;
    struct NSNumber *_timerToken;
    BOOL _locked;
    BOOL _paused;
    UIFont *_smallCapsFont;
}

- (void)_updateCountdownTimerIfNecessary;
- (void)setMoonEvent:(int)arg1 date:(id)arg2;
- (void)setPhaseName:(id)arg1;
- (void)setAnimatesForegroundColors:(BOOL)arg1;
- (void)setSecondaryForegroundColor:(id)arg1;
- (void)layoutContentView;
- (void).cxx_destruct;
- (void)setForegroundColor:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) unsigned int complicationType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

