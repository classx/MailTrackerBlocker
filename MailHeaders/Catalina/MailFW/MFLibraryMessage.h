//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMessage.h>

#import <MailFW/EDIndexableMessage-Protocol.h>
#import <MailFW/EDLibraryMessage-Protocol.h>
#import <MailFW/IMAPPersistedMessage-Protocol.h>

@class ECAngleBracketIDHash, ECMessageFlags, ECSubject, MFLibraryCalendarEvent, MFLibraryStore, MFMailAccount, MFMailbox, NSArray, NSDate, NSDictionary, NSSet, NSString, NSUUID;
@protocol ECMessageHeaders, ECMimePart, IMAPMessageDataSource;

@interface MFLibraryMessage : MCMessage <IMAPPersistedMessage, EDIndexableMessage, EDLibraryMessage>
{
    long long _libraryID;	// 104 = 0x68
    MFLibraryStore *_dataSource;	// 112 = 0x70
    NSString *_remoteID;	// 120 = 0x78
    unsigned int _uid;	// 128 = 0x80
    BOOL _hasSetCalendarEvent;	// 132 = 0x84
    BOOL _hasSetReferences;	// 133 = 0x85
    BOOL _isCompacted;	// 134 = 0x86
    BOOL _isBeingChanged;	// 135 = 0x87
    unsigned int _primitiveOptions;	// 136 = 0x88
    long long _conversationID;	// 144 = 0x90
    unsigned long long _messageSize;	// 152 = 0x98
    long long _mailboxID;	// 160 = 0xa0
}

+ (id)messageWithPersistentID:(id)arg1;	// IMP=0x00000000001168ae
+ (id)messageWithLibraryID:(long long)arg1;	// IMP=0x0000000000116830
+ (id)messageWithURL:(id)arg1;	// IMP=0x000000000011668a
+ (id)messagesWithURL:(id)arg1;	// IMP=0x00000000001164dd
+ (id)messageIDFromMessageURL:(id)arg1;	// IMP=0x00000000001162a4
+ (BOOL)isValidMessageID:(id)arg1;	// IMP=0x0000000000116216
+ (id)_residentMessageForLibraryID:(long long)arg1;	// IMP=0x0000000000115c4a
+ (void)_removeMessageFromResidentMessagesWithLibraryID:(long long)arg1;	// IMP=0x0000000000115bc2
+ (void)_removeMessagesFromResidentMessages:(id)arg1;	// IMP=0x0000000000115a6d
+ (id)_addMessageToResidentMessages:(id)arg1 overridingPreviousMessage:(BOOL)arg2;	// IMP=0x0000000000115956
+ (id)residentMessages;	// IMP=0x000000000011572c
+ (void)initialize;	// IMP=0x000000000011553d
@property unsigned int primitiveOptions; // @synthesize primitiveOptions=_primitiveOptions;
@property BOOL isBeingChanged; // @synthesize isBeingChanged=_isBeingChanged;
@property BOOL isCompacted; // @synthesize isCompacted=_isCompacted;
@property long long mailboxID; // @synthesize mailboxID=_mailboxID;
@property unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property long long conversationID; // @synthesize conversationID=_conversationID;
// - (void).cxx_destruct;	// IMP=0x0000000000119596
- (id)searchableItemWithHTML:(id)arg1 messageBody:(id)arg2 updatableAttributesOnly:(BOOL)arg3;	// IMP=0x0000000000118bf4
- (void)appendMimeData:(id)arg1 partNumber:(id)arg2;	// IMP=0x0000000000118b62
@property(readonly) BOOL shouldIndexAttachmentsForSpotlight;
@property(readonly, nonatomic) BOOL shouldSnipAttachmentData;
- (void)setData:(id)arg1 isPartial:(BOOL)arg2;	// IMP=0x000000000011898d
- (void)setAttachmentMetadata:(id)arg1;	// IMP=0x000000000011890e
- (id)messageDataFetchIfNotAvailable:(BOOL)arg1 newDocumentID:(id)arg2;	// IMP=0x000000000011884d
- (void)setRemoteID:(const char *)arg1 documentID:(id)arg2 flags:(long long)arg3 size:(unsigned long long)arg4 mailboxID:(long long)arg5 color:(id)arg6 conversationID:(long long)arg7 conversationFlags:(unsigned long long)arg8;	// IMP=0x00000000001186d1
@property(readonly, nonatomic) MFMailAccount *account;
- (id)path;	// IMP=0x0000000000118584
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (void)reload;	// IMP=0x000000000011817a
- (BOOL)endChanging:(BOOL)arg1 immediately:(BOOL)arg2;	// IMP=0x0000000000118106
- (void)beginChanging;	// IMP=0x00000000001180ef
- (void)_commitLater;	// IMP=0x000000000011807e
- (void)commit;	// IMP=0x000000000011800a
- (void)_setDateReceivedFromHeaders:(id)arg1;	// IMP=0x0000000000117f70
- (void)setColor:(id)arg1 hasBeenEvaluated:(BOOL)arg2 flags:(long long)arg3 mask:(long long)arg4;	// IMP=0x0000000000117f42
@property id messageColor;
- (void)setColor:(id)arg1;	// IMP=0x0000000000117e2d
- (void)setColorHasBeenEvaluated:(BOOL)arg1;	// IMP=0x0000000000117dde
- (void)setConversationFlags:(unsigned long long)arg1;	// IMP=0x0000000000117d86
- (void)setFlags:(long long)arg1;	// IMP=0x0000000000117d24
- (void)setMessageFlags:(long long)arg1 mask:(long long)arg2;	// IMP=0x0000000000117cf6
@property(readonly, copy, nonatomic) NSString *mailboxName;
@property BOOL partsHaveBeenCached;
- (BOOL)isPartialMessageBodyAvailable;	// IMP=0x0000000000117ba9
- (BOOL)isMessageContentLocallyAvailable;	// IMP=0x0000000000117b4e
@property BOOL isPartial;
- (BOOL)loadOptionsSuffice:(unsigned int)arg1;	// IMP=0x0000000000117a65
@property unsigned int options;
@property unsigned int uid;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;	// IMP=0x0000000000117879
@property(copy) NSString *remoteID;
- (void)_setRemoteID:(id)arg1;	// IMP=0x000000000011774b
- (void)_updateUID;	// IMP=0x0000000000117658
@property(readonly, nonatomic) MFMailbox *mailbox;
- (id)primitiveDataSource;	// IMP=0x00000000001175dd
- (void)setDataSource:(id)arg1;	// IMP=0x0000000000117424
@property(readonly) id <IMAPMessageDataSource> dataSource;
- (id)_unlockedMessageStore;	// IMP=0x0000000000117347
@property(readonly) ECAngleBracketIDHash *messageIDHeaderHash;
@property(readonly, copy) NSArray *cc;
@property(readonly, copy) NSArray *to;
- (id)sender;	// IMP=0x0000000000116f59
- (id)subjectString;	// IMP=0x0000000000116f09
@property(readonly, copy) ECSubject *subject;
@property(retain) MFLibraryCalendarEvent *calendarEvent;
- (void)setReferencesHashes:(id)arg1;	// IMP=0x0000000000116b1c
- (id)referencesHashes;	// IMP=0x0000000000116a27
- (BOOL)type;	// IMP=0x00000000001169a8
@property(readonly, copy) NSUUID *documentID;
@property(readonly, nonatomic) long long libraryID;
@property(readonly, copy, nonatomic) NSString *persistentID;
@property(readonly, copy, nonatomic) NSString *messageID;
- (void)dealloc;	// IMP=0x0000000000115e58
- (id)init;	// IMP=0x0000000000115d89
- (id)initWithLibraryID:(long long)arg1;	// IMP=0x0000000000115ce5

// Remaining properties
@property(readonly, copy) NSArray *bcc;
@property(readonly, nonatomic) id <ECMimePart> bodyPart;
@property(readonly) NSDate *dateReceived;
@property(readonly) NSDate *dateSent;
@property(readonly, nonatomic) unsigned long long fileSize;
@property(readonly, nonatomic) ECMessageFlags *flags;
@property(readonly, copy) NSArray *from;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) id <ECMessageHeaders> headers;
@property(readonly, copy, nonatomic) NSDictionary *headersDictionary;
@property(readonly, nonatomic) BOOL isServerSearchResult;
@property(readonly) NSSet *labels;
@property(readonly, nonatomic) ECAngleBracketIDHash *listIDHash;
@property(readonly, copy) NSArray *listUnsubscribe;
@property(readonly, copy, nonatomic) NSString *messageIDHeader;
@property(readonly) unsigned long long numberOfAttachments;
@property(readonly, nonatomic, getter=isPartOfExistingThread) BOOL partOfExistingThread;
@property(readonly, copy, nonatomic) NSArray *references;
@property(readonly, copy) NSArray *senders;
@property(readonly, nonatomic) BOOL shouldDeferBodyDownload;
@property(readonly) Class superclass;

@end

