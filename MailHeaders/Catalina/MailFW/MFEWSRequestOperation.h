//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MailCore/MCMonitoredOperation.h>

@class MFEWSGateway, MFEWSResponseOperation;

@interface MFEWSRequestOperation : MCMonitoredOperation
{
    BOOL _isOffline;	// 8 = 0x8
    MFEWSResponseOperation *_responseOperation;	// 16 = 0x10
    MFEWSGateway *_gateway;	// 24 = 0x18
}

@property(retain, nonatomic) MFEWSGateway *gateway; // @synthesize gateway=_gateway;
@property(retain, nonatomic) MFEWSResponseOperation *responseOperation; // @synthesize responseOperation=_responseOperation;
// - (void).cxx_destruct;	// IMP=0x000000000009e123
- (id)description;	// IMP=0x000000000009dfa7
- (void)setupOfflineResponse;	// IMP=0x000000000009df1f
- (void)goOffline;	// IMP=0x000000000009ddd8
@property(readonly) BOOL isOffline;
@property(readonly, nonatomic) BOOL isFolderRequest;
- (void)executeOperation;	// IMP=0x000000000009dce6
- (void)main;	// IMP=0x000000000009db8f
- (id)newResponseOperationWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x000000000009db23
- (id)init;	// IMP=0x000000000009da54
- (id)initWithGateway:(id)arg1 errorHandler:(id)arg2;	// IMP=0x000000000009d868

@end

