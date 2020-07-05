//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MSComposeBodyFieldController-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL;

@protocol MUIComposeBodyFieldController <MSComposeBodyFieldController>
- (void)restoreOriginalAttachments:(NSDictionary *)arg1 completionHandler:(void (^)(BOOL, NSDictionary *))arg2;
- (void)removeAttachmentsLeavingPlaceholder:(BOOL)arg1 attachmentInfoByIdentifier:(NSDictionary *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)displayAttachmentWithIdentifiers:(NSArray *)arg1 inline:(BOOL)arg2 completionHandler:(void (^)(NSDictionary *))arg3;
- (void)setSharedContentHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2 signatureHTMLString:(NSString *)arg3 attachmentInfoByURL:(NSDictionary *)arg4 completionHandler:(void (^)(NSDictionary *))arg5;
- (void)clearPendingSharedContent;
- (void)allowLoadingRemoteContent;
- (void)replaceOldSignatureWithNewSignature:(NSString *)arg1 aboveQuotedText:(BOOL)arg2 attachmentsAtEnd:(BOOL)arg3 attachmentInfoByURL:(NSDictionary *)arg4 completionHandler:(void (^)(NSDictionary *))arg5;
- (void)setUpContentsWithForwardOrReplyPrefix:(NSString *)arg1 showQuoteBars:(BOOL)arg2 defaultWritingDirection:(long long)arg3 stripAttributesOfOriginalMessage:(BOOL)arg4 baseURL:(NSURL *)arg5 originalMessages:(NSArray *)arg6 attachmentInfoByURL:(NSDictionary *)arg7 replaceAttachmentsWithPlaceholders:(BOOL)arg8 initialMarkup:(NSString *)arg9 completionHandler:(void (^)(NSArray *, NSDictionary *, BOOL))arg10;
- (void)estimateTextLength:(void (^)(unsigned long long))arg1;
- (void)copyContentsForDraft:(BOOL)arg1 isOkayToForceRichText:(BOOL)arg2 isMailDropPlaceholderMessage:(BOOL)arg3 baseURL:(NSURL *)arg4 attachmentInfoByIdentifier:(NSDictionary *)arg5 completionHandler:(void (^)(ECHTMLStringAndMIMECharset *, NSArray *, NSArray *, BOOL, NSURL *, NSArray *))arg6;
@end

