//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/MCActivityTarget-Protocol.h>
#import <MailFW/MFActivityProgressUpdater-Protocol.h>

@class ACAccountStore, EDPersistenceDatabaseConnection, MCActivityAggregate, MCActivityMonitor, NSArray, NSString;
@protocol MFLibraryUpgraderDelegate;

@interface MFLibraryUpgrader : NSObject <MCActivityTarget, MFActivityProgressUpdater>
{
    EDPersistenceDatabaseConnection *_currentConnection;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    NSArray *_upgradeSteps;	// 24 = 0x18
    BOOL _readOnly;	// 32 = 0x20
    BOOL _shouldRecalculateConversations;	// 33 = 0x21
    BOOL _shouldUpdateSubjectPrefixes;	// 34 = 0x22
    BOOL _shouldResetSnippets;	// 35 = 0x23
    BOOL _shouldRecalculateMessageCounts;	// 36 = 0x24
    BOOL _shouldUpdateSpotlightAttributes;	// 37 = 0x25
    BOOL _shouldUpdateSpotlightAttributesWithMultipleRecipients;	// 38 = 0x26
    BOOL _shouldUpdateMailboxURLs;	// 39 = 0x27
    BOOL _shouldResetChangeIdentifierForGmailAccounts;	// 40 = 0x28
    BOOL _shouldNormalizeMailboxPaths;	// 41 = 0x29
    BOOL _shouldResetDynamicAccountConfiguration;	// 42 = 0x2a
    BOOL _shouldRemoveMailboxesWithAbsoluteURLs;	// 43 = 0x2b
    BOOL _shouldUpdateFavoritePersistentIDUnicodeComposition;	// 44 = 0x2c
    BOOL _shouldRemoveLocalPathsFromRulesAndSmartMailboxes;	// 45 = 0x2d
    BOOL _shouldUpdateUIDNext;	// 46 = 0x2e
    BOOL _shouldRemoveJunkColors;	// 47 = 0x2f
    BOOL _shouldReparseExchangeReferences;	// 48 = 0x30
    BOOL _shouldRecalculateAutomatedConversations;	// 49 = 0x31
    id <MFLibraryUpgraderDelegate> _delegate;	// 56 = 0x38
    MCActivityMonitor *_monitor;	// 64 = 0x40
    unsigned long long _majorVersion;	// 72 = 0x48
    unsigned long long _minorVersion;	// 80 = 0x50
    MCActivityAggregate *_activity;	// 88 = 0x58
    struct sqlite3 *_upgraderDB;	// 96 = 0x60
}

+ (id)log;	// IMP=0x000000000012d69c
@property(nonatomic) struct sqlite3 *upgraderDB; // @synthesize upgraderDB=_upgraderDB;
@property(retain, nonatomic) MCActivityAggregate *activity; // @synthesize activity=_activity;
@property(nonatomic) unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property(nonatomic) unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
@property(nonatomic) BOOL shouldRecalculateAutomatedConversations; // @synthesize shouldRecalculateAutomatedConversations=_shouldRecalculateAutomatedConversations;
@property(nonatomic) BOOL shouldReparseExchangeReferences; // @synthesize shouldReparseExchangeReferences=_shouldReparseExchangeReferences;
@property(nonatomic) BOOL shouldRemoveJunkColors; // @synthesize shouldRemoveJunkColors=_shouldRemoveJunkColors;
@property(nonatomic) BOOL shouldUpdateUIDNext; // @synthesize shouldUpdateUIDNext=_shouldUpdateUIDNext;
@property(nonatomic) BOOL shouldRemoveLocalPathsFromRulesAndSmartMailboxes; // @synthesize shouldRemoveLocalPathsFromRulesAndSmartMailboxes=_shouldRemoveLocalPathsFromRulesAndSmartMailboxes;
@property(nonatomic) BOOL shouldUpdateFavoritePersistentIDUnicodeComposition; // @synthesize shouldUpdateFavoritePersistentIDUnicodeComposition=_shouldUpdateFavoritePersistentIDUnicodeComposition;
@property(nonatomic) BOOL shouldRemoveMailboxesWithAbsoluteURLs; // @synthesize shouldRemoveMailboxesWithAbsoluteURLs=_shouldRemoveMailboxesWithAbsoluteURLs;
@property(nonatomic) BOOL shouldResetDynamicAccountConfiguration; // @synthesize shouldResetDynamicAccountConfiguration=_shouldResetDynamicAccountConfiguration;
@property(nonatomic) BOOL shouldNormalizeMailboxPaths; // @synthesize shouldNormalizeMailboxPaths=_shouldNormalizeMailboxPaths;
@property(nonatomic) BOOL shouldResetChangeIdentifierForGmailAccounts; // @synthesize shouldResetChangeIdentifierForGmailAccounts=_shouldResetChangeIdentifierForGmailAccounts;
@property(nonatomic) BOOL shouldUpdateMailboxURLs; // @synthesize shouldUpdateMailboxURLs=_shouldUpdateMailboxURLs;
@property(nonatomic) BOOL shouldUpdateSpotlightAttributesWithMultipleRecipients; // @synthesize shouldUpdateSpotlightAttributesWithMultipleRecipients=_shouldUpdateSpotlightAttributesWithMultipleRecipients;
@property(nonatomic) BOOL shouldUpdateSpotlightAttributes; // @synthesize shouldUpdateSpotlightAttributes=_shouldUpdateSpotlightAttributes;
@property(nonatomic) BOOL shouldRecalculateMessageCounts; // @synthesize shouldRecalculateMessageCounts=_shouldRecalculateMessageCounts;
@property(nonatomic) BOOL shouldResetSnippets; // @synthesize shouldResetSnippets=_shouldResetSnippets;
@property(nonatomic) BOOL shouldUpdateSubjectPrefixes; // @synthesize shouldUpdateSubjectPrefixes=_shouldUpdateSubjectPrefixes;
@property(nonatomic) BOOL shouldRecalculateConversations; // @synthesize shouldRecalculateConversations=_shouldRecalculateConversations;
@property(retain, nonatomic) MCActivityMonitor *monitor; // @synthesize monitor=_monitor;
@property(nonatomic) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(nonatomic) __weak id <MFLibraryUpgraderDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;	// IMP=0x000000000013c03c
- (void)upgradeMailDataIfNecessary;	// IMP=0x000000000013bdbf
- (long long)_getSQLTableCount:(const char *)arg1 connection:(id)arg2;	// IMP=0x000000000013bced
- (void)_stampCurrentMinorVersion:(unsigned long long)arg1;	// IMP=0x000000000013bcb0
- (void)_executeSQL:(id)arg1 updateMinorVersion:(unsigned long long)arg2;	// IMP=0x000000000013ba50
- (unsigned long long)_lastWriteMinorVersion;	// IMP=0x000000000013b87a
- (BOOL)_needsRun;	// IMP=0x000000000013b817
- (void)_bootstrapVersioningEngine;	// IMP=0x000000000013b773
- (void)_getVersionInfo;	// IMP=0x000000000013b60c
@property(retain, nonatomic) EDPersistenceDatabaseConnection *currentConnection;
- (void)resetProgressItemsWithTotal:(unsigned long long)arg1 andStatusMessage:(id)arg2;	// IMP=0x000000000013b447
- (void)incrementProgressIndicatorWithThreshold:(unsigned long long)arg1;	// IMP=0x000000000013b359
- (void)incrementProgressIndicator;	// IMP=0x000000000013b2cf
- (void)setProgressItemTotal:(unsigned long long)arg1;	// IMP=0x000000000013b283
- (id)_systemAccountsWithAccountTypeIdentifiers:(id)arg1;	// IMP=0x000000000013b035
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)_libraryIDsOfAutomatedMessages;	// IMP=0x000000000013ae63
- (void)_reparseReferencesForRowIDsByMailboxURL:(id)arg1;	// IMP=0x000000000013a6f2
- (id)_reparseExchangeReferences;	// IMP=0x000000000013a27d
- (void)_removeJunkColors;	// IMP=0x0000000000139f63
- (void)_updateUIDNext;	// IMP=0x0000000000139940
- (void)_removeContainerLogs;	// IMP=0x0000000000139936
- (void)_resetConfigureDynamically;	// IMP=0x000000000013991d
- (void)_fakeLibraryUpgraderStep;	// IMP=0x00000000001397c1
- (void)_normalizeMailboxPathComponentsInMboxCache;	// IMP=0x00000000001397a8
- (void)_resetConversationsForExistingMessagesWithRowIDs:(id)arg1;	// IMP=0x000000000013970e
- (void)_resetSnippetColumn;	// IMP=0x00000000001396a5
- (BOOL)_calculateInternationalSubjectPrefixes;	// IMP=0x0000000000139627
- (void)updateFavoritePersistentIDUnicodeComposition;	// IMP=0x0000000000139124
- (void)_updateMailboxURLUnicodeComposition;	// IMP=0x0000000000138e82
- (id)_copySpotlightAttributesWithDateSent:(int)arg1 dateReceived:(int)arg2 dateLastViewed:(int)arg3 read:(int)arg4 libraryFlags:(long long)arg5 messageID:(const char *)arg6 conversationID:(long long)arg7 subject:(id)arg8 displayName:(id)arg9 senderName:(id)arg10 senderAddress:(id)arg11 recipientNames:(id)arg12 recipientAddresses:(id)arg13;	// IMP=0x00000000001387ce
- (id)_urlV1V2StringForMailboxDirectory:(id)arg1 account:(id)arg2 levelFromAccountDirectory:(unsigned long long)arg3;	// IMP=0x00000000001385b0
- (void)_getRecipientsForMessageWithLibraryID:(long long)arg1 recipientNames:(id)arg2 recipientAddresses:(id)arg3 connection:(id)arg4;	// IMP=0x000000000013840b
- (void)_setSpotlightAttributesForEMLXFilesInMailbox:(id)arg1 mailboxURLString:(id)arg2;	// IMP=0x0000000000137aa2
- (void)_sendSpotlightAttributesByPath:(id)arg1;	// IMP=0x00000000001378c1
- (id)_accountsWithTypeIdentifiers:(id)arg1;	// IMP=0x000000000013760e
- (id)_mailboxFileSystemPathsByV1V2DatabaseURL;	// IMP=0x000000000013724f
- (void)_updateSpotlightAttributesWithMultipleRecipients;	// IMP=0x0000000000136b6a
- (void)_updateSpotlightAttributes;	// IMP=0x000000000013679d
- (void)_removeMailboxesWithAbsoluteURLs;	// IMP=0x0000000000136706
- (void)_resetChangeIdentifierForGmailAccounts;	// IMP=0x0000000000136343
- (id)_fixAbsoluteMailboxURL:(id)arg1 mailAccounts:(id)arg2;	// IMP=0x0000000000135d17
- (id)_fixCriteriaWithAbsoluteMailboxURLs:(id)arg1 mailAccounts:(id)arg2;	// IMP=0x0000000000135870
- (id)_fixSmartMailboxWithAbsoluteMailboxURLs:(id)arg1 mailAccounts:(id)arg2;	// IMP=0x0000000000135498
- (id)_newSmartMailboxesRemovingLocalPathsFromSmartMailboxes:(id)arg1 accounts:(id)arg2;	// IMP=0x0000000000135236
- (id)_newRulesRemovingLocalPathsFromRules:(id)arg1 accounts:(id)arg2;	// IMP=0x0000000000134e66
- (void)_removeLocalPathsFromRulesAndSmartMailboxes;	// IMP=0x0000000000134b76
- (void)_upgradeFromSUYosemiteDomeToElCapitan;	// IMP=0x0000000000134b1a
- (void)_upgradeFromYosemiteToSUYosemiteDome:(unsigned long long)arg1;	// IMP=0x0000000000134ad4
- (void)_upgradeFromSUMavericksDuneToYosemite;	// IMP=0x0000000000134a8a
- (void)_upgradeFromSUMavericksCarveToSUMavericksDune;	// IMP=0x0000000000134a73
- (void)_upgradeFromSUMavericksBoardToSUMavericksCarve;	// IMP=0x0000000000134a3b
- (void)_upgradeFromMavericksToSUMavericksBoard;	// IMP=0x0000000000134a03
- (void)_fixShadowEMLXFilesForAccount:(id)arg1;	// IMP=0x0000000000133631
- (void)_fixShadowEMLXFiles;	// IMP=0x0000000000133446
- (id)_mailboxV1V2URLStringsForAccount:(id)arg1;	// IMP=0x00000000001332d3
- (void)_upgradeFromSUMountainCalypsoToMavericks;	// IMP=0x00000000001330ad
- (void)_upgradeFromMountainLionToSUMountainCalypso;	// IMP=0x0000000000133049
- (void)fixMailDownloadsMigrationKey;	// IMP=0x0000000000132f8c
- (void)_startMigratorServiceForAppleScriptFilesAndRules;	// IMP=0x0000000000132ecf
- (void)upgradeAppleScriptFilesAndRules;	// IMP=0x00000000001322ee
- (void)_startMigratorServiceForMailDownloads;	// IMP=0x0000000000132231
- (void)upgradeMailDownloadsFiles;	// IMP=0x0000000000131cc9
- (void)_useWALJournalingIfPossible;	// IMP=0x0000000000131c60
- (void)_createNewDatabaseObjects;	// IMP=0x0000000000131b84
- (void)_upgradeSchema:(id)arg1;	// IMP=0x0000000000131659
- (void)_upgradeV1V2Schema;	// IMP=0x0000000000131119
- (void)_dropTriggers;	// IMP=0x0000000000130fde
- (id)_upgradeStepsWithConnection:(id)arg1 initialLastWriteMinorVersion:(unsigned long long)arg2;	// IMP=0x000000000012f372
- (void)run;	// IMP=0x000000000012dba6
- (BOOL)_libraryIsTooNew;	// IMP=0x000000000012db43
- (BOOL)_canLibraryBeUpgraded;	// IMP=0x000000000012da6b
@property(readonly, nonatomic) long long libraryStatus;
- (void)dealloc;	// IMP=0x000000000012d738
- (id)init;	// IMP=0x000000000012d6f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

