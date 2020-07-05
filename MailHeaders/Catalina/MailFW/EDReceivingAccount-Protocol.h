//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/EDAccount-Protocol.h>

@class NSArray, NSString, NSURL;
@protocol ECMailbox, EDDeliveryAccount;

@protocol EDReceivingAccount <EDAccount>
@property(readonly) BOOL shouldArchiveByDefault;
@property(readonly) BOOL isLocalAccount;
@property(readonly, copy) NSString *smtpIdentifier;
@property(readonly) NSArray *emailAddresses;
@property(readonly) BOOL sourceIsManaged;
@property(readonly) BOOL isManaged;
- (BOOL)containsMailboxWithURL:(NSURL *)arg1;
- (id <ECMailbox>)mailboxForType:(long long)arg1;
- (void)setDeliveryAccount:(id <EDDeliveryAccount>)arg1;
- (id <EDDeliveryAccount>)deliveryAccount;
@end

