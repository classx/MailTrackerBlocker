//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFDeliveryAccount.h>

@class ECSMTPAccount, MFSMTPConnection, NSOperationQueue, NSTimer;

@interface MFSMTPAccount : MFDeliveryAccount
{
    MFSMTPConnection *_connection;	// 8 = 0x8
    id _smtpAccountLock;	// 16 = 0x10
    NSTimer *_timer;	// 24 = 0x18
    NSOperationQueue *_connectionCleanupQueue;	// 32 = 0x20
    long long _lastTimerSetTime;	// 40 = 0x28
}

+ (id)standardSSLPorts;	// IMP=0x00000000002192ce
+ (id)standardPorts;	// IMP=0x00000000002192b5
+ (id)csAccountTypeString;	// IMP=0x00000000002190c0
+ (id)accountTypeString;	// IMP=0x00000000002190ac
@property(nonatomic) long long lastTimerSetTime; // @synthesize lastTimerSetTime=_lastTimerSetTime;
@property(readonly, nonatomic) NSOperationQueue *connectionCleanupQueue; // @synthesize connectionCleanupQueue=_connectionCleanupQueue;
// - (void).cxx_destruct;	// IMP=0x000000000021a0e8
- (unsigned long long)hash;	// IMP=0x000000000021a071
- (BOOL)isEqual:(id)arg1;	// IMP=0x0000000000219fa8
- (void)_disconnect:(id)arg1;	// IMP=0x0000000000219f93
- (void)releaseAllConnections;	// IMP=0x0000000000219d9a
- (void)_connectionExpired:(id)arg1;	// IMP=0x0000000000219c6e
- (void)_setTimer;	// IMP=0x0000000000219b9a
- (BOOL)canAuthenticateWithCurrentCredentials;	// IMP=0x0000000000219b65
- (void)checkInConnection:(id)arg1;	// IMP=0x0000000000219a37
- (BOOL)connectAndAuthenticate:(id)arg1;	// IMP=0x00000000002198f3
- (id)authenticatedConnection;	// IMP=0x00000000002197a4
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;	// IMP=0x00000000002196dd
- (id)saslProfileName;	// IMP=0x00000000002196be
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)arg1 changedSystemAccount:(char *)arg2;	// IMP=0x00000000002192e7
- (id)newDelivererWithMessage:(id)arg1;	// IMP=0x000000000021926c
- (id)init;	// IMP=0x00000000002191de
- (id)initWithSystemAccount:(id)arg1;	// IMP=0x00000000002190d4
- (id)objectSpecifier;	// IMP=0x000000000021a139

// Remaining properties
@property(readonly) ECSMTPAccount *baseAccount; // @dynamic baseAccount;

@end

