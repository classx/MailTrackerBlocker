//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailFW/NSObject-Protocol.h>

@class NSString;

@protocol ECAuthenticationCredentials <NSObject>
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(readonly, copy) NSString *clientInfo;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *password;
@property(readonly, copy) NSString *username;
@end

