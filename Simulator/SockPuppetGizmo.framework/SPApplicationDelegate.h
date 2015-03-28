//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PUICQuickboardViewControllerDelegate.h"
#import "SPCompanionConnectionDelegate.h"
#import "SPInterfaceViewControllerDelegate.h"
#import "UIApplicationDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSDictionary, NSString, PUICQuickboardViewController, SPCompanionConnection, SPInterfaceViewController, SPPageViewController, UIColor, UIImage, UIView, UIWindow;

@interface SPApplicationDelegate : NSObject <SPInterfaceViewControllerDelegate, SPCompanionConnectionDelegate, UIGestureRecognizerDelegate, PUICQuickboardViewControllerDelegate, UIApplicationDelegate>
{
    _Bool _displayingFirstUnlockScreen;
    _Bool _launchedWithOptions;
    _Bool _launchedFromNotification;
    _Bool _presentedNotification;
    _Bool _customNotificationWantsHeaderBlur;
    _Bool _simulatorNotificationForceStaticPresentation;
    UIWindow *_window;
    NSString *_launchMode;
    SPCompanionConnection *_companionConnection;
    NSDictionary *_interfaceDescription;
    NSString *_stringsFileName;
    UIColor *_applicationColor;
    SPPageViewController *_pageViewController;
    PUICQuickboardViewController *_textInputViewController;
    double _busyDisplayTime;
    UIView *_busyView;
    NSDictionary *_dynamicNotificationInterface;
    NSDictionary *_staticNotificationInterface;
    SPInterfaceViewController *_notificationClientViewController;
    NSString *_notificationAlert;
    NSString *_notificationTitle;
    NSDictionary *_remoteNotificationContext;
    UIColor *_customNotificationSashColor;
    UIColor *_customNotificationTitleColor;
    UIImage *_simulatorNotificationIcon;
    NSString *_simulatorNotificationAppName;
}

@property(nonatomic) _Bool simulatorNotificationForceStaticPresentation; // @synthesize simulatorNotificationForceStaticPresentation=_simulatorNotificationForceStaticPresentation;
@property(retain, nonatomic) NSString *simulatorNotificationAppName; // @synthesize simulatorNotificationAppName=_simulatorNotificationAppName;
@property(retain, nonatomic) UIImage *simulatorNotificationIcon; // @synthesize simulatorNotificationIcon=_simulatorNotificationIcon;
@property(retain, nonatomic) UIColor *customNotificationTitleColor; // @synthesize customNotificationTitleColor=_customNotificationTitleColor;
@property(retain, nonatomic) UIColor *customNotificationSashColor; // @synthesize customNotificationSashColor=_customNotificationSashColor;
@property(nonatomic) _Bool customNotificationWantsHeaderBlur; // @synthesize customNotificationWantsHeaderBlur=_customNotificationWantsHeaderBlur;
@property(copy, nonatomic) NSDictionary *remoteNotificationContext; // @synthesize remoteNotificationContext=_remoteNotificationContext;
@property(copy, nonatomic) NSString *notificationTitle; // @synthesize notificationTitle=_notificationTitle;
@property(copy, nonatomic) NSString *notificationAlert; // @synthesize notificationAlert=_notificationAlert;
@property(nonatomic) _Bool presentedNotification; // @synthesize presentedNotification=_presentedNotification;
@property(retain, nonatomic) SPInterfaceViewController *notificationClientViewController; // @synthesize notificationClientViewController=_notificationClientViewController;
@property(copy, nonatomic) NSDictionary *staticNotificationInterface; // @synthesize staticNotificationInterface=_staticNotificationInterface;
@property(copy, nonatomic) NSDictionary *dynamicNotificationInterface; // @synthesize dynamicNotificationInterface=_dynamicNotificationInterface;
@property(retain, nonatomic) UIView *busyView; // @synthesize busyView=_busyView;
@property(nonatomic) double busyDisplayTime; // @synthesize busyDisplayTime=_busyDisplayTime;
@property(nonatomic) _Bool launchedFromNotification; // @synthesize launchedFromNotification=_launchedFromNotification;
@property(nonatomic) _Bool launchedWithOptions; // @synthesize launchedWithOptions=_launchedWithOptions;
@property(retain, nonatomic) PUICQuickboardViewController *textInputViewController; // @synthesize textInputViewController=_textInputViewController;
@property(retain, nonatomic) SPPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(retain, nonatomic) UIColor *applicationColor; // @synthesize applicationColor=_applicationColor;
@property(copy, nonatomic) NSString *stringsFileName; // @synthesize stringsFileName=_stringsFileName;
@property(retain, nonatomic) NSDictionary *interfaceDescription; // @synthesize interfaceDescription=_interfaceDescription;
@property(retain) SPCompanionConnection *companionConnection; // @synthesize companionConnection=_companionConnection;
@property(nonatomic) _Bool displayingFirstUnlockScreen; // @synthesize displayingFirstUnlockScreen=_displayingFirstUnlockScreen;
@property(readonly, copy, nonatomic) NSString *launchMode; // @synthesize launchMode=_launchMode;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)updateForSimulatorLockedState:(_Bool)arg1 viewController:(id)arg2;
- (void)registerForSimulatorLockState;
- (id)currentViewController;
- (void)handleGlanceTap:(id)arg1;
- (void)setupNotificationActionButtons;
- (void)presentNotificationViewController;
- (void)presentStaticNotification;
- (void)presentDynamicNotification;
- (_Bool)setUpForNotificationsInSimulatorWithCategory:(id)arg1 exactCategory:(id)arg2;
- (void)_clearBusy;
- (void)_showBusyScreen;
- (void)_showBusyIndicator;
- (void)quickboardDictationButtonTappedInCompanionSimulator:(id)arg1;
- (void)quickboardEmojiButtonTappedInCompanionSimulator:(id)arg1;
- (void)quickboardInputCancelled:(id)arg1;
- (void)quickboard:(id)arg1 textEntered:(id)arg2;
- (void)launchGizmoAppForCompanionAppWithIdentifier:(id)arg1 withURLString:(id)arg2;
- (void)interfaceViewController:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (void)interfaceViewController:(id)arg1 sendAction:(id)arg2 withValue:(id)arg3;
- (void)appWithRootInterfaceViewController:(id)arg1 performActionWithItemID:(id)arg2 forNotificationID:(id)arg3;
- (void)interfaceViewControllerDidDeactivate:(id)arg1;
- (void)interfaceViewControllerWillActivate:(id)arg1;
- (void)interfaceViewControllerRelease:(id)arg1;
- (void)interfaceViewController:(id)arg1 createCompanionControllerClass:(id)arg2 properties:(id)arg3 initializationContextID:(id)arg4;
- (void)restartAppContents;
- (void)companionDaemonDidRestart:(id)arg1;
- (void)extensionDidTerminate:(id)arg1;
- (void)companionConnection:(id)arg1 interfaceViewController:(id)arg2 presentNotificationWithType:(id)arg3;
- (void)companionConnection:(id)arg1 userActivity:(id)arg2;
- (void)companionConnection:(id)arg1 interfaceViewControllerDismissViewController:(id)arg2;
- (void)companionConnection:(id)arg1 interfaceViewController:(id)arg2 presentViewControllers:(id)arg3 initializationContextIDs:(id)arg4;
- (void)companionConnection:(id)arg1 interfaceViewController:(id)arg2 presentViewController:(id)arg3 info:(id)arg4 initializationContextID:(id)arg5;
- (void)companionConnection:(id)arg1 removeRootInterfaceViewControllerAtIndexes:(id)arg2;
- (void)companionConnection:(id)arg1 moveRootInterfaceViewControllerAtIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)companionConnection:(id)arg1 insertRootInterfaceViewControllerWithNames:(id)arg2 atIndexes:(id)arg3 initializationContextIDs:(id)arg4;
- (void)companionConnection:(id)arg1 reloadRootInterfaceViewControllersWithNames:(id)arg2 initializationContextIDs:(id)arg3;
- (void)companionConnection:(id)arg1 interfaceViewControllerBecomeCurrentPageViewController:(id)arg2;
- (void)companionConnection:(id)arg1 interfaceViewControllerPopToRootViewController:(id)arg2;
- (void)companionConnection:(id)arg1 interfaceViewControllerPopViewController:(id)arg2;
- (void)companionConnection:(id)arg1 interfaceViewController:(id)arg2 pushViewController:(id)arg3 initializationContextID:(id)arg4;
- (void)companionConnection:(id)arg1 interfaceViewController:(id)arg2 setValue:(id)arg3 forKey:(id)arg4 property:(id)arg5;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (id)primaryApplicationColor;
- (void)_exitApplicationNicely;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)_setupSignal:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setupSignalHandlers;
- (_Bool)_loadRootViewController;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillSuspend:(id)arg1;
- (void)runTimingWithOptions:(id)arg1;
- (void)_PoloSetValue:(id)arg1 forKey:(id)arg2 property:(id)arg3;
- (void)_Marco;
- (void)_fillDataWithRandom:(id)arg1;
- (double)_computeAverageIDSTime;
- (double)_computeAverageTotalTime;
- (void)_doneTiming;
- (void)_getBoolValue:(_Bool *)arg1 forKey:(id)arg2 fromDictionary:(id)arg3;
- (void)_getDoubleValue:(double *)arg1 forKey:(id)arg2 fromDictionary:(id)arg3;
- (void)_getIntegerValue:(long long *)arg1 forKey:(id)arg2 fromDictionary:(id)arg3;
- (void)_runTimingWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
