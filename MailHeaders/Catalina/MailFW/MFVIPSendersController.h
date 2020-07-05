//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EAEmailAddressSet, NSArray, NSMutableDictionary, NSOperationQueue;
@protocol EMVIPManager;

@interface MFVIPSendersController : NSObject
{
    NSMutableDictionary *_VIPSendersMailboxesByIdentifier;	// 8 = 0x8
    id <EMVIPManager> _vipManager;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000238794
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002386db
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <EMVIPManager> vipManager; // @synthesize vipManager=_vipManager;
// - (void).cxx_destruct;	// IMP=0x000000000023b96f
- (void)_addressBookDidChange:(id)arg1;	// IMP=0x000000000023b239
- (void)_vipsDidChange:(id)arg1;	// IMP=0x000000000023ad48
@property(readonly, copy) EAEmailAddressSet *addressesForVIPSenders;
- (BOOL)isVIPForPerson:(id)arg1 orAddress:(id)arg2;	// IMP=0x000000000023abac
- (void)removeVIPSenderWithAddress:(id)arg1;	// IMP=0x000000000023ab0e
- (void)removeVIPSenderWithMailboxes:(id)arg1;	// IMP=0x000000000023a8cc
- (void)addNewVIPSenderWithAddress:(id)arg1 name:(id)arg2;	// IMP=0x000000000023a7bb
@property(readonly, copy) NSArray *VIPSendersMailboxes;
- (id)_vipMailboxesPlistPath;	// IMP=0x000000000023a6f7
- (void)_updateMailboxesAndPostNotificationsIsFirstLoad:(BOOL)arg1;	// IMP=0x000000000023a4ec
- (void)_readVIPSenders;	// IMP=0x0000000000239e4f
- (void)_saveMailboxInfo;	// IMP=0x0000000000239adb
- (void)save;	// IMP=0x0000000000239a47
- (id)_addressBookRecordsForFirstName:(id)arg1 lastName:(id)arg2 withAddressBook:(id)arg3;	// IMP=0x00000000002398a8
- (id)_ABPersonForName:(id)arg1 withAddressBook:(id)arg2;	// IMP=0x000000000023976a
- (id)_ABPersonForName:(id)arg1 emailAddresses:(id)arg2 withAddressBook:(id)arg3;	// IMP=0x0000000000238fcf
- (id)_combineAddresses:(id)arg1 withAddresses:(id)arg2;	// IMP=0x0000000000238ef3
- (id)_mailboxWithVIP:(id)arg1 additionalEmailAddresses:(id)arg2;	// IMP=0x0000000000238cb5
- (id)_addressesForMailboxCriteria:(id)arg1;	// IMP=0x0000000000238b19
- (id)_mailboxCriteriaForAddresses:(id)arg1;	// IMP=0x0000000000238a2b
- (void)dealloc;	// IMP=0x0000000000238926
@property(nonatomic) BOOL filterByInboxOnly;
- (id)init;	// IMP=0x00000000002384e4

@end

