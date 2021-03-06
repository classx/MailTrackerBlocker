//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MailFW/NSPortDelegate-Protocol.h>
#import <MailFW/WebFrameLoadDelegate-Protocol.h>
#import <MailFW/WebPolicyDelegate-Protocol.h>
#import <MailFW/WebResourceLoadDelegate-Protocol.h>

@class NSData, NSPort, NSString, WebView;

@interface MFHTMLConverter : NSObject <WebFrameLoadDelegate, WebPolicyDelegate, WebResourceLoadDelegate, NSPortDelegate>
{
    NSPort *_replyPort;	// 8 = 0x8
    BOOL _didHandlePortMessage;	// 16 = 0x10
    unsigned int _sequenceNumber;	// 20 = 0x14
    NSData *_resultData;	// 24 = 0x18
    WebView *_webView;	// 32 = 0x20
    long long _mainThreadSelectorType;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00000000000afc19
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000afa17
@property(nonatomic) long long mainThreadSelectorType; // @synthesize mainThreadSelectorType=_mainThreadSelectorType;
@property(nonatomic) BOOL didHandlePortMessage; // @synthesize didHandlePortMessage=_didHandlePortMessage;
@property(nonatomic) unsigned int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) WebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSData *resultData; // @synthesize resultData=_resultData;
// - (void).cxx_destruct;	// IMP=0x00000000000b16c5
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;	// IMP=0x00000000000b15b4
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;	// IMP=0x00000000000b1470
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;	// IMP=0x00000000000b1467
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000b13d7
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;	// IMP=0x00000000000b1360
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;	// IMP=0x00000000000b12d0
- (void)webView:(id)arg1 locationChangeDone:(id)arg2 forDataSource:(id)arg3;	// IMP=0x00000000000b0f9d
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;	// IMP=0x00000000000b0e3e
- (id)_archivedHTMLStringWithInlinedStyleFromLoadedDocument;	// IMP=0x00000000000b0c0b
- (id)_archivedDataFromLoadedDocument;	// IMP=0x00000000000b0a06
- (id)_archivedAttributedStringFromLoadedDocument;	// IMP=0x00000000000b08e8
- (void)_loadWebViewOnMainThreadFromData:(id)arg1 withTextEncodingName:(id)arg2 orFromWebArchive:(id)arg3;	// IMP=0x00000000000b0396
- (void)_setUpWebView;	// IMP=0x00000000000b0124
- (void)_stopLoadingWebView;	// IMP=0x00000000000b00ba
- (void)handlePortMessage:(id)arg1;	// IMP=0x00000000000affaa
- (id)junkStringFromHTMLData:(id)arg1 stringEncoding:(unsigned long long)arg2 imageURLs:(id *)arg3 otherURLs:(id *)arg4 characterCount:(unsigned long long *)arg5;	// IMP=0x00000000000afd15
- (void)dealloc;	// IMP=0x00000000000afb0b
- (id)init;	// IMP=0x00000000000afad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

