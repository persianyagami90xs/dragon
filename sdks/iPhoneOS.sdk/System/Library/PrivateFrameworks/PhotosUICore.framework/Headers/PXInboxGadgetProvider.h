//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class PXInboxAggregateDataSourceManager;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>
{
    PXInboxAggregateDataSourceManager *_dataSourceManager;
}

@property(readonly, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
// - (void).cxx_destruct;
- (void)observable:(id)arg1 didChange:(NSUInteger)arg2 context:(void )arg3;
- (void)_updateLastSeenDateOfCurrentGadgets;
- (void)_updateDataSourceRangesOfCurrentGadgets;
- (void)_lastExitedForYouDateDidChange:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_updateGadgets;
- (void)loadDataForGadgets;
- (void)generateGadgets;
- (NSUInteger)estimatedNumberOfGadgets;
- (id)initWithDataSourceManager:(id)arg1;

@end
