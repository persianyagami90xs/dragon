//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class MISSING_TYPE;

@interface _TtC9TeaCharts30LineSeriesAccessibilityElement : UIAccessibilityElement
{
    MISSING_TYPE *series;
    MISSING_TYPE *chartModel;
    MISSING_TYPE *interactor;
    MISSING_TYPE *dataElements;
}

// - (void).cxx_destruct;
- (id)init;
- (id)initWithAccessibilityContainer:(id)arg1;
- (id)tc_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;
- (double)tc_accessibilityDataSeriesSonificationDuration;
- (BOOL)tc_accessibilityDataSeriesIncludesTrendlineInSonification;
- (BOOL)tc_accessibilityDataSeriesSupportsSummarization;
- (BOOL)tc_accessibilityDataSeriesSupportsSonification;
- (id)tc_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesTitleForAxis:(long long)arg1;
- (long long)tc_accessibilityDataSeriesType;
- (id)tc_accessibilityDataSeriesValuesForAxis:(long long)arg1;
- (id)tc_accessibilityDataSeriesName;
@property(nonatomic) CGRect accessibilityFrame;

@end
