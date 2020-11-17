//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECAccountsObserver.h>

@class NSDate, NSMutableArray, NSObject, NSOperationQueue, NSTimer, NSUserDefaults;
@protocol EDAccountChangeHookResponder, OS_dispatch_queue;

@interface AccountManager : ECAccountsObserver
{
    BOOL _automaticFetchingShouldBeDisabled;	// 8 = 0x8
    BOOL _dailyCleanupDisabled;	// 9 = 0x9
    BOOL _missedDailyCleanup;	// 10 = 0xa
    NSOperationQueue *_automaticFetchQueue;	// 16 = 0x10
    NSTimer *_fetchTimer;	// 24 = 0x18
    NSDate *_lastAutomaticFetchDate;	// 32 = 0x20
    NSDate *_lastAutomaticUserInteractionFetchDate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_accountChangedQueue;	// 48 = 0x30
    NSMutableArray *_accountsBeingObserved;	// 56 = 0x38
    id <EDAccountChangeHookResponder> _hookResponder;	// 64 = 0x40
}

+ (id)keyPathsForValuesAffectingFetchFrequency;	// IMP=0x000000010009da6b
@property(readonly, nonatomic) id <EDAccountChangeHookResponder> hookResponder; // @synthesize hookResponder=_hookResponder;
@property(retain, nonatomic) NSMutableArray *accountsBeingObserved; // @synthesize accountsBeingObserved=_accountsBeingObserved;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accountChangedQueue; // @synthesize accountChangedQueue=_accountChangedQueue;
@property(nonatomic) BOOL missedDailyCleanup; // @synthesize missedDailyCleanup=_missedDailyCleanup;
@property(nonatomic) BOOL dailyCleanupDisabled; // @synthesize dailyCleanupDisabled=_dailyCleanupDisabled;
@property(retain, nonatomic) NSDate *lastAutomaticUserInteractionFetchDate; // @synthesize lastAutomaticUserInteractionFetchDate=_lastAutomaticUserInteractionFetchDate;
@property(retain, nonatomic) NSDate *lastAutomaticFetchDate; // @synthesize lastAutomaticFetchDate=_lastAutomaticFetchDate;
@property(retain, nonatomic) NSTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSOperationQueue *automaticFetchQueue; // @synthesize automaticFetchQueue=_automaticFetchQueue;
@property(nonatomic) BOOL automaticFetchingShouldBeDisabled; // @synthesize automaticFetchingShouldBeDisabled=_automaticFetchingShouldBeDisabled;
// - (void).cxx_destruct;	// IMP=0x00000001000a0d44
- (void)_deliveryAccountConnectionOrAuthenticationPropertiesDidChange:(id)arg1;	// IMP=0x00000001000a0b9b
- (void)_mailAccountConnectionOrAuthenticationPropertiesDidChange:(id)arg1;	// IMP=0x00000001000a0b1e
- (void)handleMailAccountsHaveChanged:(id)arg1 accountsNeedInitialization:(BOOL)arg2;	// IMP=0x00000001000a0125
- (void)handleCredentialChangeForAccountIdentifier:(id)arg1;	// IMP=0x000000010009fdf3
- (void)handleAccountStoreChangeForAccountIdentifier:(id)arg1;	// IMP=0x000000010009f9e3
- (void)_connectionError:(id)arg1 didChangeForAccount:(id)arg2;	// IMP=0x000000010009f6f2
- (void)_performDailyCleanup:(id)arg1;	// IMP=0x000000010009f445
- (void)enableDailyCleanupAndCleanupIfNecessary;	// IMP=0x000000010009f3c2
- (void)disableDailyCleanup;	// IMP=0x000000010009f368
- (void)_mailAccountNeedsChecking:(id)arg1;	// IMP=0x000000010009f20a
- (void)_fetchForAllAccountsWithType:(long long)arg1;	// IMP=0x000000010009ec37
- (void)fetchForAccount:(id)arg1 isAutomatic:(BOOL)arg2;	// IMP=0x000000010009e8f2
- (void)_performAutomaticFetch:(long long)arg1;	// IMP=0x000000010009e75c
- (void)_startSynchronizationForNewAccount:(id)arg1;	// IMP=0x000000010009e622
- (void)initializeAutomaticFetchingAndPerformInitialFetch;	// IMP=0x000000010009e4b2
- (void)_applicationDidBecomeActive:(id)arg1;	// IMP=0x000000010009e3a5
- (void)_fetchTimerFired:(id)arg1;	// IMP=0x000000010009e31b
- (void)_adjustFetchActivityAndReset:(id)arg1;	// IMP=0x000000010009de4d
- (void)disableAutomaticFetching;	// IMP=0x000000010009dd3e
- (void)enableAutomaticFetchingAndFetchIfNecessary;	// IMP=0x000000010009dc30
@property(nonatomic) long long fetchFrequency;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010009d8fc
- (void)dealloc;	// IMP=0x000000010009d6a0
- (id)initWithAccountStore:(id)arg1 hookResponder:(id)arg2;	// IMP=0x000000010009d3ec

@end
