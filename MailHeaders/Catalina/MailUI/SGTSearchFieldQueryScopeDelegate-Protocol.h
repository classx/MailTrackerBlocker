//
//     Generated by class-dump 3.5b1 (64 bit) (Debug version compiled Dec  3 2019 19:59:57).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SGTSearchField;

@protocol SGTSearchFieldQueryScopeDelegate <NSObject>
- (NSString *)searchFieldWidenScopeMenuSpinnerTitleString:(SGTSearchField *)arg1;
- (NSString *)searchFieldWidenScopeMenuItemTitleString:(SGTSearchField *)arg1;
- (NSString *)searchFieldWidenScopeMenuTitleString:(SGTSearchField *)arg1;
- (void)searchFieldWidenQueryScope:(SGTSearchField *)arg1;
- (BOOL)searchField:(SGTSearchField *)arg1 hasResultsForQuery:(NSString *)arg2;
- (BOOL)searchFieldUsesRestrictedQueryScope:(SGTSearchField *)arg1;
@end

