//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MailTableViewDelegate-Protocol.h"
#import "MessageListContentControllerDelegate-Protocol.h"
#import "NSPasteboardItemDataProvider-Protocol.h"
#import "NSServicesMenuRequestor-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "SelectionOwner-Protocol.h"

@class ConversationPrefetcher, MCMessage, MFGlobalBodyFetchContext, MFMessageThread, MailTableView, MessageListContentController, MessageSelection, NSArray, NSCache, NSDictionary, NSFont, NSMapTable, NSMutableArray, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, NSTableColumn, TableViewScrollState;
@protocol MCMessageDataSource, SortTitleSetter, TableViewManagerDelegate;

@interface TableViewManager : NSObject <MessageListContentControllerDelegate, NSPasteboardItemDataProvider, NSServicesMenuRequestor, MailTableViewDelegate, NSTableViewDataSource, SelectionOwner>
{
    MessageListContentController *_messageListContentController;	// 8 = 0x8
    NSMutableArray *_rawSelection;	// 16 = 0x10
    NSFont *_font;	// 24 = 0x18
    NSMutableSet *_selectedConversationIDs;	// 32 = 0x20
    id _snippetLock;	// 40 = 0x28
    NSMutableSet *_messagesBeingFetched;	// 48 = 0x30
    unsigned long long _lastRequestedRow;	// 56 = 0x38
    NSMapTable *_messageProxyObjects;	// 64 = 0x40
    BOOL _isFocused;	// 72 = 0x48
    BOOL _sortColumnOrderAscending;	// 73 = 0x49
    BOOL _mailboxSortColumnOrderAscending;	// 74 = 0x4a
    BOOL _isInThreadedMode;	// 75 = 0x4b
    BOOL _awaitingInitialScrollPosition;	// 76 = 0x4c
    BOOL _scrollFoundSelectionIntoView;	// 77 = 0x4d
    BOOL _awaitingInitialSelection;	// 78 = 0x4e
    BOOL _clearSelectionOnUpdate;	// 79 = 0x4f
    BOOL _threadOpeningIsInProgress;	// 80 = 0x50
    BOOL _threadClosingIsInProgress;	// 81 = 0x51
    BOOL _dontUpdateTrackingRects;	// 82 = 0x52
    BOOL _useBoldFontForUnreadMessages;	// 83 = 0x53
    BOOL _clearingSearch;	// 84 = 0x54
    BOOL _animatingRowSelection;	// 85 = 0x55
    BOOL _keepSelectionWhenTogglingThread;	// 86 = 0x56
    unsigned char _suspendChangesToScrollingAndSelection;	// 87 = 0x57
    BOOL _isColumnLayoutMessageList;	// 88 = 0x58
    BOOL _highlightClosedThreads;	// 89 = 0x59
    BOOL _showSize;	// 90 = 0x5a
    BOOL _showDateTime;	// 91 = 0x5b
    BOOL _showToCc;	// 92 = 0x5c
    BOOL _showContactPhotos;	// 93 = 0x5d
    BOOL _animatingThreadOpening;	// 94 = 0x5e
    BOOL _animatingThreadClosing;	// 95 = 0x5f
    BOOL _selectingMessagesForTransfer;	// 96 = 0x60
    BOOL _didAwake;	// 97 = 0x61
    BOOL _beganAnimationGrouping;	// 98 = 0x62
    MailTableView *_tableView;	// 104 = 0x68
    id <TableViewManagerDelegate> _delegate;	// 112 = 0x70
    NSArray *_tableColumns;	// 120 = 0x78
    NSMapTable *_storeStateTable;	// 128 = 0x80
    NSSet *_mouseTrackers;	// 136 = 0x88
    NSDictionary *_messageIDsToSelectWhenOpened;	// 144 = 0x90
    NSArray *_threadIDsToOpenWhenOpened;	// 152 = 0x98
    long long _sortColumnOrder;	// 160 = 0xa0
    long long _mailboxSortColumnOrder;	// 168 = 0xa8
    long long _initialScrollType;	// 176 = 0xb0
    TableViewScrollState *_savedScrollState;	// 184 = 0xb8
    NSDictionary *_initialMailboxViewingState;	// 192 = 0xc0
    NSFont *_boldFont;	// 200 = 0xc8
    long long _searchTarget;	// 208 = 0xd0
    long long _searchField;	// 216 = 0xd8
    id <SortTitleSetter> _sortTitleSetter;	// 224 = 0xe0
    NSCache *_snippetsForMessage;	// 232 = 0xe8
    ConversationPrefetcher *_conversationPrefetcher;	// 240 = 0xf0
    NSArray *_expandedSelection;	// 248 = 0xf8
    NSArray *_expandedSelectionForTransfer;	// 256 = 0x100
    long long _colorHighlightLeftEdge;	// 264 = 0x108
    long long _colorHighlightWidth;	// 272 = 0x110
    MFMessageThread *_threadBeingClosed;	// 280 = 0x118
    MFMessageThread *_threadBeingOpened;	// 288 = 0x120
    long long _numberOfSelectedRowsBeforeTogglingThread;	// 296 = 0x128
    unsigned long long _numberOfSnippetLines;	// 304 = 0x130
    NSTableColumn *_richTableColumn;	// 312 = 0x138
    long long _previouslyViewedMessageRow;	// 320 = 0x140
    long long _currentViewedMessageRow;	// 328 = 0x148
    long long _nextMessageDirection;	// 336 = 0x150
    MFGlobalBodyFetchContext *_bodyFetchContext;	// 344 = 0x158
    NSArray *_messageListItemsFromMouseDown;	// 352 = 0x160
    NSArray *_draggedMessageListItems;	// 360 = 0x168
    NSNumber *_sortViewHeight;	// 368 = 0x170
    NSNumber *_topHitsHeaderViewHeight;	// 376 = 0x178
    double _rowHeightMessage;	// 384 = 0x180
    double _rowHeightMessageInThreadedMode;	// 392 = 0x188
    double _rowHeightMessageColumnLayout;	// 400 = 0x190
    struct _NSRange _messageRangeFromMouseDown;	// 408 = 0x198
}

+ (id)keyPathsForValuesAffectingFilterPredicate;	// IMP=0x00000001002a2da9
+ (id)specialImageForMessageCount:(unsigned long long)arg1 offset:(struct CGPoint *)arg2;	// IMP=0x00000001002a0096
+ (BOOL)isColumnValid:(long long)arg1;	// IMP=0x0000000100297514
+ (void)initialize;	// IMP=0x0000000100013ab5
+ (id)log;	// IMP=0x0000000100297080
@property(nonatomic) double rowHeightMessageColumnLayout; // @synthesize rowHeightMessageColumnLayout=_rowHeightMessageColumnLayout;
@property(nonatomic) double rowHeightMessageInThreadedMode; // @synthesize rowHeightMessageInThreadedMode=_rowHeightMessageInThreadedMode;
@property(nonatomic) double rowHeightMessage; // @synthesize rowHeightMessage=_rowHeightMessage;
@property(retain, nonatomic) NSNumber *topHitsHeaderViewHeight; // @synthesize topHitsHeaderViewHeight=_topHitsHeaderViewHeight;
@property(retain, nonatomic) NSNumber *sortViewHeight; // @synthesize sortViewHeight=_sortViewHeight;
@property(copy, nonatomic) NSArray *draggedMessageListItems; // @synthesize draggedMessageListItems=_draggedMessageListItems;
@property(copy, nonatomic) NSArray *messageListItemsFromMouseDown; // @synthesize messageListItemsFromMouseDown=_messageListItemsFromMouseDown;
@property(nonatomic) BOOL beganAnimationGrouping; // @synthesize beganAnimationGrouping=_beganAnimationGrouping;
@property(readonly, nonatomic) MFGlobalBodyFetchContext *bodyFetchContext; // @synthesize bodyFetchContext=_bodyFetchContext;
@property(nonatomic) long long nextMessageDirection; // @synthesize nextMessageDirection=_nextMessageDirection;
@property(nonatomic) long long currentViewedMessageRow; // @synthesize currentViewedMessageRow=_currentViewedMessageRow;
@property(nonatomic) long long previouslyViewedMessageRow; // @synthesize previouslyViewedMessageRow=_previouslyViewedMessageRow;
@property(retain, nonatomic) NSTableColumn *richTableColumn; // @synthesize richTableColumn=_richTableColumn;
@property(nonatomic) unsigned long long numberOfSnippetLines; // @synthesize numberOfSnippetLines=_numberOfSnippetLines;
@property(nonatomic) BOOL didAwake; // @synthesize didAwake=_didAwake;
@property(nonatomic) long long numberOfSelectedRowsBeforeTogglingThread; // @synthesize numberOfSelectedRowsBeforeTogglingThread=_numberOfSelectedRowsBeforeTogglingThread;
@property(nonatomic) __weak MFMessageThread *threadBeingOpened; // @synthesize threadBeingOpened=_threadBeingOpened;
@property(nonatomic) __weak MFMessageThread *threadBeingClosed; // @synthesize threadBeingClosed=_threadBeingClosed;
@property(nonatomic) long long colorHighlightWidth; // @synthesize colorHighlightWidth=_colorHighlightWidth;
@property(nonatomic) long long colorHighlightLeftEdge; // @synthesize colorHighlightLeftEdge=_colorHighlightLeftEdge;
@property(nonatomic) struct _NSRange messageRangeFromMouseDown; // @synthesize messageRangeFromMouseDown=_messageRangeFromMouseDown;
@property(copy, nonatomic) NSArray *expandedSelectionForTransfer; // @synthesize expandedSelectionForTransfer=_expandedSelectionForTransfer;
@property(copy, nonatomic) NSArray *expandedSelection; // @synthesize expandedSelection=_expandedSelection;
@property(retain, nonatomic) ConversationPrefetcher *conversationPrefetcher; // @synthesize conversationPrefetcher=_conversationPrefetcher;
@property(readonly, nonatomic) NSCache *snippetsForMessage; // @synthesize snippetsForMessage=_snippetsForMessage;
@property(nonatomic) BOOL selectingMessagesForTransfer; // @synthesize selectingMessagesForTransfer=_selectingMessagesForTransfer;
@property(readonly, nonatomic) BOOL animatingThreadClosing; // @synthesize animatingThreadClosing=_animatingThreadClosing;
@property(readonly, nonatomic) BOOL animatingThreadOpening; // @synthesize animatingThreadOpening=_animatingThreadOpening;
@property(nonatomic) BOOL showContactPhotos; // @synthesize showContactPhotos=_showContactPhotos;
@property(nonatomic) BOOL showToCc; // @synthesize showToCc=_showToCc;
@property(nonatomic) BOOL showDateTime; // @synthesize showDateTime=_showDateTime;
@property(nonatomic) BOOL showSize; // @synthesize showSize=_showSize;
@property(nonatomic) BOOL highlightClosedThreads; // @synthesize highlightClosedThreads=_highlightClosedThreads;
@property(nonatomic) BOOL isColumnLayoutMessageList; // @synthesize isColumnLayoutMessageList=_isColumnLayoutMessageList;
@property(nonatomic) __weak id <SortTitleSetter> sortTitleSetter; // @synthesize sortTitleSetter=_sortTitleSetter;
@property(nonatomic) long long searchField; // @synthesize searchField=_searchField;
@property(nonatomic) long long searchTarget; // @synthesize searchTarget=_searchTarget;
@property(retain, nonatomic) NSFont *boldFont; // @synthesize boldFont=_boldFont;
@property(nonatomic) unsigned char suspendChangesToScrollingAndSelection; // @synthesize suspendChangesToScrollingAndSelection=_suspendChangesToScrollingAndSelection;
@property(nonatomic) BOOL keepSelectionWhenTogglingThread; // @synthesize keepSelectionWhenTogglingThread=_keepSelectionWhenTogglingThread;
@property(nonatomic) BOOL animatingRowSelection; // @synthesize animatingRowSelection=_animatingRowSelection;
@property(nonatomic) BOOL clearingSearch; // @synthesize clearingSearch=_clearingSearch;
@property(nonatomic) BOOL useBoldFontForUnreadMessages; // @synthesize useBoldFontForUnreadMessages=_useBoldFontForUnreadMessages;
@property(nonatomic) BOOL dontUpdateTrackingRects; // @synthesize dontUpdateTrackingRects=_dontUpdateTrackingRects;
@property(nonatomic) BOOL threadClosingIsInProgress; // @synthesize threadClosingIsInProgress=_threadClosingIsInProgress;
@property(nonatomic) BOOL threadOpeningIsInProgress; // @synthesize threadOpeningIsInProgress=_threadOpeningIsInProgress;
@property(nonatomic) BOOL clearSelectionOnUpdate; // @synthesize clearSelectionOnUpdate=_clearSelectionOnUpdate;
@property(nonatomic) BOOL awaitingInitialSelection; // @synthesize awaitingInitialSelection=_awaitingInitialSelection;
@property(copy, nonatomic) NSDictionary *initialMailboxViewingState; // @synthesize initialMailboxViewingState=_initialMailboxViewingState;
@property(retain, nonatomic) TableViewScrollState *savedScrollState; // @synthesize savedScrollState=_savedScrollState;
@property(nonatomic) BOOL scrollFoundSelectionIntoView; // @synthesize scrollFoundSelectionIntoView=_scrollFoundSelectionIntoView;
@property(nonatomic) long long initialScrollType; // @synthesize initialScrollType=_initialScrollType;
@property(nonatomic) BOOL awaitingInitialScrollPosition; // @synthesize awaitingInitialScrollPosition=_awaitingInitialScrollPosition;
@property(nonatomic) long long mailboxSortColumnOrder; // @synthesize mailboxSortColumnOrder=_mailboxSortColumnOrder;
@property(nonatomic) long long sortColumnOrder; // @synthesize sortColumnOrder=_sortColumnOrder;
@property(nonatomic) BOOL isInThreadedMode; // @synthesize isInThreadedMode=_isInThreadedMode;
@property(nonatomic) BOOL mailboxSortColumnOrderAscending; // @synthesize mailboxSortColumnOrderAscending=_mailboxSortColumnOrderAscending;
@property(nonatomic) BOOL sortColumnOrderAscending; // @synthesize sortColumnOrderAscending=_sortColumnOrderAscending;
@property(nonatomic) BOOL isFocused; // @synthesize isFocused=_isFocused;
@property(copy, nonatomic) NSArray *threadIDsToOpenWhenOpened; // @synthesize threadIDsToOpenWhenOpened=_threadIDsToOpenWhenOpened;
@property(copy, nonatomic) NSDictionary *messageIDsToSelectWhenOpened; // @synthesize messageIDsToSelectWhenOpened=_messageIDsToSelectWhenOpened;
@property(copy, nonatomic) NSSet *mouseTrackers; // @synthesize mouseTrackers=_mouseTrackers;
@property(retain, nonatomic) NSMapTable *storeStateTable; // @synthesize storeStateTable=_storeStateTable;
@property(copy, nonatomic) NSArray *tableColumns; // @synthesize tableColumns=_tableColumns;
@property(nonatomic) __weak id <TableViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MailTableView *tableView; // @synthesize tableView=_tableView;
// - (void).cxx_destruct;	// IMP=0x00000001002a361a
- (id)_messageThreadForRow:(long long)arg1;	// IMP=0x00000001002a2fe4
- (id)_messageForRow:(long long)arg1;	// IMP=0x00000001002a2f94
- (id)_messageListItemForRow:(long long)arg1;	// IMP=0x00000001002a2f2c
- (void)recordMessageSelectionDuringSearch;	// IMP=0x00000001002a2e8b
@property(retain, nonatomic) NSPredicate *filterPredicate;
- (void)setIsSortedAscending:(BOOL)arg1;	// IMP=0x00000001002a2d69
@property(readonly, nonatomic) BOOL isSortedAscending;
- (void)setSortColumn:(long long)arg1 ascending:(BOOL)arg2;	// IMP=0x00000001002a2af4
- (id)sortByStringForColumn:(long long)arg1;	// IMP=0x00000001002a27fb
@property(readonly, nonatomic) long long sortColumn;
- (BOOL)isSortedByDateReceived;	// IMP=0x00000001002a2709
- (void)searchForSuggestions:(id)arg1 in:(long long)arg2 withOptions:(long long)arg3 fromSuggestionsSearchField:(id)arg4 filterPredicate:(id)arg5;	// IMP=0x00000001002a257f
- (void)_updateInitialViewingState;	// IMP=0x00000001002a216f
- (void)clearSearch;	// IMP=0x00000001002a1eb2
- (void)_updateSearchDelegate;	// IMP=0x00000001002a1e14
- (void)_animateRowSelection:(id)arg1 byExtendingSelection:(BOOL)arg2;	// IMP=0x00000001002a1c2c
- (long long)countOfTableViewRowsForMessageListContentController:(id)arg1;	// IMP=0x00000001002a1be8
- (BOOL)messageListContentController:(id)arg1 canIncludeItemsOfType:(long long)arg2;	// IMP=0x00000001002a1bd9
- (void)messageListContentControllerDidChangeSort:(id)arg1;	// IMP=0x00000001002a1bc7
- (void)messageListContentControllerDidUpdateConversations:(id)arg1;	// IMP=0x00000001002a1bb5
- (void)messageListContentControllerDidFinishLoading:(id)arg1;	// IMP=0x00000001002a1ba3
- (void)messageListContentControllerDidProcessUpdates:(id)arg1;	// IMP=0x00000001002a1a87
- (void)messageListContentController:(id)arg1 refreshedObjects:(id)arg2;	// IMP=0x00000001002a1a52
- (void)messageListContentController:(id)arg1 foundPinnedIndex:(long long)arg2 withOffset:(double)arg3;	// IMP=0x00000001002a19bb
- (void)messageListContentController:(id)arg1 foundSelectionIndexes:(id)arg2 shouldAnimate:(BOOL)arg3;	// IMP=0x00000001002a1766
- (void)messageListContentControllerNeedsReload:(id)arg1;	// IMP=0x00000001002a15b1
- (void)messageListContentController:(id)arg1 didApplyChanges:(id)arg2;	// IMP=0x00000001002a1296
- (void)messageListContentController:(id)arg1 willApplyChanges:(id)arg2;	// IMP=0x00000001002a11ac
- (void)messageListContentControllerWillProcessUpdates:(id)arg1;	// IMP=0x00000001002a10b3
- (void)reloadMailboxes:(id)arg1 messageFilterPredicate:(id)arg2;	// IMP=0x00000001002a0f70
- (void)setMailboxes:(id)arg1 messageFilterPredicate:(id)arg2 isSettingUpUI:(BOOL)arg3;	// IMP=0x00000001002a0d2f
- (void)_restoreScrollState:(id)arg1;	// IMP=0x00000001002a097b
- (id)_currentScrollStatePreferringSelection:(BOOL)arg1;	// IMP=0x00000001002a0523
- (BOOL)_debugThreadAnimation;	// IMP=0x00000001002a04ba
- (id)messageToSelectIfEntireSelectionRemoved:(id)arg1;	// IMP=0x000000010006d2ca
- (void)_recordSelectionHistoryForRow:(long long)arg1;	// IMP=0x0000000100031298
- (void)_resetNextMessageTracking;	// IMP=0x0000000100014d8c
- (BOOL)_goUpInsteadOfDown;	// IMP=0x000000010006fd4c
- (long long)_indexOfFirstNonDeletedNonSelectedMessage:(long long)arg1 withinRowRange:(struct _NSRange)arg2 goUp:(BOOL)arg3;	// IMP=0x000000010006d8f6
@property(retain, nonatomic) MessageListContentController *messageListContentController;
- (id)accessibilityRowHeaderUIElementsForMailTableView:(id)arg1;	// IMP=0x00000001002a0179
- (id)accessibilityUILinkedViewsForMailTableView:(id)arg1;	// IMP=0x00000001002a00be
- (id)mailTableView:(id)arg1 dragImageForRowsWithIndexes:(id)arg2 event:(id)arg3 dragImageOffset:(struct CGPoint *)arg4;	// IMP=0x000000010008b59c
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;	// IMP=0x000000010008b0d6
- (void)mailTableView:(id)arg1 didMouseDown:(id)arg2;	// IMP=0x0000000100048c38
- (void)mailTableView:(id)arg1 willMouseDown:(id)arg2;	// IMP=0x0000000100046d7a
- (void)mailTableViewDragWillEnd:(id)arg1 operation:(unsigned long long)arg2;	// IMP=0x000000010008e014
- (void)transfer:(id)arg1 didCompleteWithError:(id)arg2;	// IMP=0x000000010029ffe1
- (id)messagesToTransferIsMove:(BOOL)arg1;	// IMP=0x000000010003d4ac
- (id)_filterAndExpandMessagesForTransfer:(id)arg1;	// IMP=0x000000010003d87a
- (void)archiveMessages:(id)arg1 allowUndo:(BOOL)arg2 withAnimationOptions:(unsigned long long)arg3;	// IMP=0x000000010029fe33
- (BOOL)shouldDeleteMessagesGivenCurrentState:(id)arg1;	// IMP=0x0000000100025a6c
- (void)undeleteMessagesAllowingUndo:(BOOL)arg1;	// IMP=0x000000010029fddc
- (void)deleteMessages:(id)arg1 allowMoveToTrash:(BOOL)arg2 allowUndo:(BOOL)arg3 selectingNextMessage:(BOOL)arg4 withAnimationOptions:(unsigned long long)arg5;	// IMP=0x000000010029f6fa
- (void)_redeleteMessages:(id)arg1 messagesToSelect:(id)arg2;	// IMP=0x000000010029f2d1
- (void)undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2;	// IMP=0x000000010008b0c0
- (void)_undeleteMessages:(id)arg1 allowUndo:(BOOL)arg2 unreadMessages:(id)arg3;	// IMP=0x000000010029f0b7
- (id)_undoActionNameForMessageCount:(unsigned long long)arg1;	// IMP=0x000000010029ef8d
- (BOOL)mailTableView:(id)arg1 doCommandBySelector:(SEL)arg2;	// IMP=0x000000010007ac2d
@property(readonly, nonatomic) id <MCMessageDataSource> messageStore;
@property(readonly, nonatomic) MCMessage *currentDisplayedMessage;
- (id)parentThreadForChildMessage:(id)arg1;	// IMP=0x0000000100031400
@property(readonly, nonatomic) MCMessage *messageThatUserIsProbablyReading;
- (void)selectMessage:(id)arg1 options:(unsigned long long)arg2 completionBlock:(id)arg3;	// IMP=0x000000010029ee13
- (void)selectMessages:(id)arg1;	// IMP=0x000000010006fd6a
- (struct CGRect)_tableViewVisibleRectWithoutUnderscroll;	// IMP=0x000000010029ecd3
- (void)_selectMessages:(id)arg1 scrollIfNeeded:(BOOL)arg2 options:(unsigned long long)arg3 completionBlock:(id)arg4;	// IMP=0x000000010029e9f7
- (id)actionMessagesForOperation:(long long)arg1;	// IMP=0x000000010029e604
@property(readonly, copy, nonatomic) NSArray *selection;
- (id)selectionExpandingThreadsAndHiddenCopies:(BOOL)arg1;	// IMP=0x000000010001da36
- (void)deleteSelectionAllowingMoveToTrash:(BOOL)arg1;	// IMP=0x000000010008f81f
- (void)deleteKeyPressed;	// IMP=0x000000010008f678
- (long long)_photoSizeForNumberOfSnippetLines:(unsigned long long)arg1;	// IMP=0x000000010029e5f6
- (void)_snippetsUpdated:(id)arg1;	// IMP=0x000000010006932f
- (void)_updateRowsWithNewSnippets:(id)arg1;	// IMP=0x000000010004bc66
- (void)_updateSnippetsForMessage:(id)arg1 ignoreExpected:(BOOL)arg2;	// IMP=0x0000000100030e20
- (void)resetSnippetCache;	// IMP=0x000000010002acd4
- (id)_messagesNeedingSnippetsAroundRow:(unsigned long long)arg1 refreshProxies:(BOOL)arg2;	// IMP=0x000000010029e119
- (void)_performSnippetFetching;	// IMP=0x000000010004bb3f
- (void)_cacheSnippetsAroundRow:(unsigned long long)arg1 refreshProxies:(BOOL)arg2;	// IMP=0x000000010029df0f
- (id)_snippetFetchQueue;	// IMP=0x000000010004ba06
- (id)_snippetForMessage:(id)arg1;	// IMP=0x00000001000322b0
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;	// IMP=0x000000010029dca8
- (BOOL)writeSelectionToPasteboard:(id)arg1 types:(id)arg2;	// IMP=0x000000010029d7bd
- (id)mailTableView:(id)arg1 validRequestorForSendType:(id)arg2 returnType:(id)arg3;	// IMP=0x000000010029d3fd
- (void)_doubleClickedMessage:(id)arg1;	// IMP=0x000000010029d310
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x000000010029d19c
- (void)_resetObjectValueForCellView:(id)arg1;	// IMP=0x000000010003e338
- (BOOL)_shouldShowMailboxNames;	// IMP=0x000000010029d058
- (void)_prepareCell:(id)arg1 withMessage:(id)arg2;	// IMP=0x000000010003205d
- (id)_prepareProxyForMessage:(id)arg1 selected:(BOOL)arg2 createIfNeeded:(BOOL)arg3 cacheSnippet:(char *)arg4;	// IMP=0x000000010029cd18
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x0000000100031cb9
- (struct _NSRange)_visibleRowRange;	// IMP=0x000000010029cc04
- (id)_cellStyleForItem:(id)arg1;	// IMP=0x000000010029cb54
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;	// IMP=0x0000000100031a60
- (id)_archiveActionColor;	// IMP=0x000000010029cafa
- (id)_deleteActionForMessageCount:(unsigned long long)arg1;	// IMP=0x000000010029c756
- (id)_unreadActionIsRead:(BOOL)arg1 isChild:(BOOL)arg2;	// IMP=0x000000010029c43b
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;	// IMP=0x000000010029c288
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;	// IMP=0x000000010004b452
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;	// IMP=0x000000010003260c
- (void)_setupRowView:(id)arg1 atIndex:(long long)arg2;	// IMP=0x00000001000326db
- (void)_setupRowView:(id)arg1 messageListItem:(id)arg2 atIndex:(long long)arg3;	// IMP=0x000000010029be65
- (void)_setupRowViewAtRow:(long long)arg1 fetchingSnippet:(BOOL)arg2;	// IMP=0x000000010029bdbf
- (id)_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2 showRecipient:(BOOL)arg3;	// IMP=0x000000010029bd12
- (id)_proxyForMessage:(id)arg1 createIfNeeded:(BOOL)arg2;	// IMP=0x000000010029bcfd
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;	// IMP=0x000000010003244b
- (BOOL)tableView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;	// IMP=0x000000010029bc61
- (id)_messageSelectionColor;	// IMP=0x000000010029bbef
- (long long)numberOfRowsInTableView:(id)arg1;	// IMP=0x0000000100014313
@property(readonly, copy, nonatomic) NSString *selectionStateLog;
- (void)mailTableViewDidResignFirstResponder:(id)arg1;	// IMP=0x000000010004a255
- (void)mailTableViewDidBecomeFirstResponder:(id)arg1;	// IMP=0x0000000100029a2f
- (void)_redisplayRowsAboveSelected;	// IMP=0x0000000100029a41
- (void)_handleSelectionChangeFromNotification:(BOOL)arg1;	// IMP=0x000000010029b5db
- (void)tableViewSelectionDidChange:(id)arg1;	// IMP=0x000000010003125b
- (id)_normalizedSelection:(id)arg1;	// IMP=0x000000010004717b
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;	// IMP=0x0000000100046f7b
- (void)_selectOrDeselectMembersOfThread:(id)arg1 atIndex:(long long)arg2 select:(BOOL)arg3;	// IMP=0x000000010029b13a
- (void)_updateViewingPaneToSelection;	// IMP=0x000000010029b0ee
- (id)_messageSelectionWithDataForPrinting:(BOOL)arg1;	// IMP=0x000000010001cf50
@property(readonly, nonatomic) MessageSelection *messageSelectionForPrinting;
@property(readonly, nonatomic) MessageSelection *messageSelection;
- (id)_openThreadIdentifiers;	// IMP=0x000000010029b054
- (void)_rawSelectionIdentifiersForThreads:(id *)arg1 identifiersForMessages:(id *)arg2;	// IMP=0x000000010029ac22
- (id)_mailboxViewingStatePreferringSelection:(BOOL)arg1;	// IMP=0x000000010029a83b
- (void)removeAllRawSelection;	// IMP=0x000000010029a825
- (void)addRawSelectionObject:(id)arg1;	// IMP=0x000000010029a80f
- (void)replaceObjectInRawSelectionAtIndex:(unsigned long long)arg1 withObject:(id)arg2;	// IMP=0x000000010029a7f0
- (void)removeObjectFromRawSelectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000010029a7da
- (id)objectInRawSelectionAtIndex:(unsigned long long)arg1;	// IMP=0x000000010029a7c4
@property(readonly, nonatomic) unsigned long long countOfRawSelection;
@property(retain, nonatomic) NSArray *rawSelection;
- (void)_updateSelectedThreadList;	// IMP=0x000000010001475a
- (void)_reloadDisplayWhenMessageCategoriesHaveChanged;	// IMP=0x000000010029a6c8
- (void)_reloadDisplayOnlyForMessagesInSet:(id)arg1 highlightOnly:(BOOL)arg2;	// IMP=0x000000010003dffa
- (BOOL)_isMessageInSelectedThread:(id)arg1;	// IMP=0x000000010007a81a
- (long long)mailTableView:(id)arg1 shouldScrollRowToVisible:(long long)arg2;	// IMP=0x0000000100048a7c
- (void)scrollRowToVisible:(long long)arg1 position:(long long)arg2;	// IMP=0x000000010004b643
@property(readonly, nonatomic) BOOL isSelectionVisible;
- (void)showSelectionAndCenter:(BOOL)arg1;	// IMP=0x000000010003dc52
- (void)selectFirstReplyToMessage;	// IMP=0x000000010029a456
- (void)selectParentOfMessage;	// IMP=0x000000010029a214
- (void)selectPreviousMessage:(BOOL)arg1;	// IMP=0x000000010029a1a2
- (void)selectNextMessage:(BOOL)arg1;	// IMP=0x000000010029a130
@property(readonly, nonatomic) BOOL nextMessageIsBelow;
- (BOOL)openSelectedThread;	// IMP=0x000000010029a018
- (void)stepOutOfSelectedThread;	// IMP=0x0000000100299dbb
- (void)stepIntoSelectedThread;	// IMP=0x0000000100299b3f
- (void)selectNextMessageMovingUpward:(BOOL)arg1;	// IMP=0x000000010007b488
- (void)selectNextMessageMovingDownward:(BOOL)arg1;	// IMP=0x000000010007ae91
- (unsigned long long)_modifierFlagsForKeyboardNavigation;	// IMP=0x000000010007b399
- (BOOL)selectionIsExactlyOneOpenThread;	// IMP=0x0000000100048af8
@property(readonly, nonatomic) BOOL canSelectNextReplyToParent;
@property(readonly, nonatomic) BOOL canSelectFirstReplyToMessage;
@property(readonly, nonatomic) BOOL canSelectParentOfMessage;
- (long long)_indexOfMessageNearest:(long long)arg1 numberOfRows:(long long)arg2 downward:(BOOL)arg3;	// IMP=0x00000001002997d9
- (void)toggleThread:(id)arg1 ignoreModifierKeys:(BOOL)arg2;	// IMP=0x000000010029952d
- (void)toggleThread:(id)arg1;	// IMP=0x000000010029942a
- (void)unhideMessages:(id)arg1;	// IMP=0x000000010029938b
- (BOOL)hideMessages:(id)arg1 selectingNextMessage:(BOOL)arg2 withAnimationOptions:(unsigned long long)arg3 completionHandler:(id)arg4;	// IMP=0x00000001002990b9
- (void)closeAllThreads;	// IMP=0x0000000100298cf6
- (void)openAllThreads;	// IMP=0x0000000100298ca5
- (void)closeThread:(id)arg1 row:(long long)arg2 selectThread:(BOOL)arg3;	// IMP=0x000000010029897d
- (void)openThread:(id)arg1 row:(long long)arg2;	// IMP=0x00000001002987be
- (void)invalidateSelectionCache:(id)arg1;	// IMP=0x000000010002feaf
- (void)toggleThreadedMode;	// IMP=0x000000010007a3d3
@property(retain, nonatomic) NSFont *font;
- (void)_updateTableViewRowHeight;	// IMP=0x0000000100014c1c
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;	// IMP=0x0000000100298628
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;	// IMP=0x00000001000310cb
- (void)_calculateRowHeights;	// IMP=0x00000001002984ad
- (void)makeMessageListFirstResponder;	// IMP=0x00000001000296a8
- (void)selectAllMessagesAndMakeFirstResponder;	// IMP=0x0000000100298269
- (BOOL)shouldSortAscendingByDefaultForColumn:(long long)arg1;	// IMP=0x000000010029823f
- (void)_updateSortTitle;	// IMP=0x00000001002981bf
- (void)_threadColorPreferenceChanged:(id)arg1;	// IMP=0x000000010029814f
- (void)_snippetLinePreferenceChanged:(id)arg1;	// IMP=0x00000001002980b0
- (void)_refreshMessageListLayout;	// IMP=0x0000000100298008
- (void)_viewerPreferencesChanged:(id)arg1;	// IMP=0x0000000100014587
@property(readonly, nonatomic) BOOL canSelectPreviousMessage;
@property(readonly, nonatomic) BOOL canSelectNextMessage;
- (void)readAttributesFromViewingOptions:(id)arg1;	// IMP=0x0000000100297dd6
- (void)writeAttributesToViewingOptions:(id)arg1;	// IMP=0x0000000100297c7c
- (void)_conversationsUpdated:(id)arg1;	// IMP=0x0000000100297c0a
- (void)_messageMarkedForOverwrite:(id)arg1;	// IMP=0x0000000100297978
- (void)prepareForWindowClose;	// IMP=0x0000000100094a30
- (void)dealloc;	// IMP=0x0000000100094f5d
- (void)richReplyButtonClicked:(id)arg1;	// IMP=0x0000000100297837
- (void)prepareContentInRange:(struct _NSRange)arg1;	// IMP=0x00000001002975b0
- (double)floatingHeaderHeight:(id)arg1;	// IMP=0x0000000100297560
- (void)userDidScrollInTableView:(id)arg1;	// IMP=0x000000010029754c
- (id)tableViewGetDefaultMenu:(id)arg1;	// IMP=0x000000010008e335
- (void)_unregisterTableViewNibs;	// IMP=0x000000010029748c
- (void)_registerTableViewNibs;	// IMP=0x0000000100014392
- (void)awakeFromNib;	// IMP=0x0000000100013d02
@property(readonly, nonatomic) BOOL showSnippets;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000001002970dd
- (id)init;	// IMP=0x0000000100013be0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

