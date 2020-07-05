//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMessage.h>

#import <MailFW/MCActivityTarget-Protocol.h>
#import <MailFW/MFScriptingMessage-Protocol.h>

@class MFMailAccount, MFMailbox, NSArray, NSIndexSet, NSScriptObjectSpecifier, NSString;

@interface MCMessage (ScriptingSupport) <MFScriptingMessage, MCActivityTarget>
- (id)valueInAppleScriptAttachmentsWithUniqueID:(id)arg1;	// IMP=0x0000000000005a7b
- (id)appleScriptAttachments;	// IMP=0x00000000000057f6
- (id)appleScriptHeaders;	// IMP=0x00000000000051ff
- (void)setBackgroundColor:(unsigned int)arg1;	// IMP=0x0000000000005048
- (unsigned int)backgroundColor;	// IMP=0x0000000000004fd1
- (unsigned int)actionColorMessage;	// IMP=0x0000000000004f7a
- (id)allHeaders;	// IMP=0x0000000000004efb
- (id)rawSource;	// IMP=0x0000000000004e43
- (id)messageIDHeader;	// IMP=0x0000000000004d6a
- (void)_performBackgroundSetContainer:(id)arg1 command:(id)arg2;	// IMP=0x0000000000004c50
- (void)setContainer:(id)arg1;	// IMP=0x0000000000004acd
- (id)container;	// IMP=0x0000000000004abb
- (id)recipients;	// IMP=0x0000000000004a31
- (void)_addRecipientsForKey:(id)arg1 toArray:(id)arg2;	// IMP=0x0000000000004740
- (id)_performBackgroundGetContent;	// IMP=0x00000000000045de
- (id)content;	// IMP=0x00000000000044d0
- (id)scriptedMessageSize;	// IMP=0x000000000000449b
- (id)replyTo;	// IMP=0x00000000000043d0
- (void)setFlaggedStatus:(long long)arg1;	// IMP=0x0000000000004109
- (long long)flaggedStatus;	// IMP=0x00000000000040d0
- (void)setIsFlagged:(BOOL)arg1;	// IMP=0x00000000000040b2
- (BOOL)isFlagged;	// IMP=0x0000000000004099
- (void)setIsDeleted:(BOOL)arg1;	// IMP=0x0000000000003f49
- (BOOL)isDeleted;	// IMP=0x0000000000003f31
- (void)setIsJunk:(BOOL)arg1;	// IMP=0x0000000000003dda
- (BOOL)isJunk;	// IMP=0x0000000000003dbc
- (void)setWasRedirected:(BOOL)arg1;	// IMP=0x0000000000003d9e
- (BOOL)wasRedirected;	// IMP=0x0000000000003d85
- (void)setWasForwarded:(BOOL)arg1;	// IMP=0x0000000000003d67
- (BOOL)wasForwarded;	// IMP=0x0000000000003d4e
- (void)setWasRepliedTo:(BOOL)arg1;	// IMP=0x0000000000003d30
- (BOOL)wasRepliedTo;	// IMP=0x0000000000003d17
- (void)setIsRead:(BOOL)arg1;	// IMP=0x0000000000003cf9
- (BOOL)isRead;	// IMP=0x0000000000003ce3
- (void)_setAppleScriptFlag:(id)arg1 state:(BOOL)arg2;	// IMP=0x0000000000003b69
@property(readonly) NSScriptObjectSpecifier *objectSpecifier;
@property(readonly, copy, nonatomic) NSArray *bccRecipients;
@property(readonly, copy, nonatomic) NSArray *ccRecipients;
@property(readonly, copy, nonatomic) NSArray *toRecipients;
@property(readonly, copy) NSString *backupID;
@property(readonly, nonatomic) long long libraryID;
@property(readonly, nonatomic) MFMailAccount *mailAccount;
@property(readonly, nonatomic) MFMailbox *mailMailbox;
@property(readonly, nonatomic) NSIndexSet *appliedFlagColors;
@property(readonly, nonatomic) int conversationPosition;
@property(readonly, nonatomic) long long conversationID;
- (void)setPermissionRequestState:(long long)arg1;	// IMP=0x00000000001c1821
@property(readonly, nonatomic) BOOL isChildRequestMessage;
- (BOOL)isChildRequestMessage:(id)arg1 requestIsForSenders:(char *)arg2 childAddress:(id *)arg3 permissionRequestState:(long long *)arg4;	// IMP=0x00000000001c15d2
- (BOOL)isParentResponseMessage:(char *)arg1 isRejected:(char *)arg2 requestedAddresses:(id)arg3 requestIsForSenders:(char *)arg4;	// IMP=0x00000000001c12cc

// Remaining properties
@property(readonly, nonatomic) unsigned long long conversationFlags;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

