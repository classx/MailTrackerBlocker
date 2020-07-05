//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSObject-Protocol.h>

@class ECTransferMessageActionItem, ECTransferMessageActionResults, NSArray, NSData, NSDictionary, NSError, NSString, NSURL;

@protocol ECTransferActionReplayerSubclassMethods <NSObject>
- (BOOL)deleteSourceMessagesFromTransferItems:(NSArray *)arg1;
- (ECTransferMessageActionResults *)appendItem:(ECTransferMessageActionItem *)arg1 mailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)moveItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (ECTransferMessageActionResults *)copyItems:(NSDictionary *)arg1 destinationMailboxURL:(NSURL *)arg2;
- (BOOL)downloadFailed;
- (BOOL)isRecoverableError:(NSError *)arg1;
- (NSData *)fetchBodyDataForRemoteID:(NSString *)arg1 mailboxURL:(NSURL *)arg2;
@end

