//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/MFEWSNetworkTaskOperation.h>

@class NSString;
@protocol MFEWSMailboxReconcileTaskOperationDelegate;

@interface MFEWSMailboxReconcileTaskOperation : MFEWSNetworkTaskOperation
{
    id <MFEWSMailboxReconcileTaskOperationDelegate> _delegate;	// 8 = 0x8
    NSString *_currentSyncState;	// 16 = 0x10
    NSString *_folderIDString;	// 24 = 0x18
}

+ (long long)_maxChangesReturned;	// IMP=0x000000000008c912
+ (id)_newRequestWithFolderID:(id)arg1 syncState:(id)arg2;	// IMP=0x000000000008c7a1
@property(readonly, copy, nonatomic) NSString *folderIDString; // @synthesize folderIDString=_folderIDString;
@property(copy, nonatomic) NSString *currentSyncState; // @synthesize currentSyncState=_currentSyncState;
@property(nonatomic) __weak id <MFEWSMailboxReconcileTaskOperationDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x000000000008cad4
- (Class)_supportedClassForItem:(id)arg1;	// IMP=0x000000000008c9a9
- (void)main;	// IMP=0x000000000008b74b
- (id)init;	// IMP=0x000000000008b67c
- (id)initWithFolderIDString:(id)arg1 initialSyncState:(id)arg2;	// IMP=0x000000000008b5b5

@end

