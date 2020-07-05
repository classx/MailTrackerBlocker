//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/EDLocalActionPersistence.h>

#import <MailFW/EDLocalActionPersistenceSubClassMethods-Protocol.h>

@class NSString;

@interface MFLocalActionPersistence_macOS : EDLocalActionPersistence <EDLocalActionPersistenceSubClassMethods>
{
}

- (void)handledFailedCopyForMessages:(id)arg1;	// IMP=0x000000000013f8f6
- (BOOL)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2;	// IMP=0x000000000013f7b9
- (long long)mailboxDatabaseIDForURL:(id)arg1;	// IMP=0x000000000013f718
- (id)mailboxURLForDatabaseID:(long long)arg1;	// IMP=0x000000000013f67e
- (id)messageForDatabaseID:(long long)arg1;	// IMP=0x000000000013f618

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

