//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _EARLanguageModel : NSObject
{
    struct vector<std::__1::pair<id<_EARLanguageModelDataSource>, float>, std::__1::allocator<std::__1::pair<id<_EARLanguageModelDataSource>, float>>> _dataSources;
    float _totalWeight;
}

@property(readonly, nonatomic) float totalWeight; // @synthesize totalWeight=_totalWeight;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)enumerateDataSourcesAndWeightsUsingBlock:(id /* CDUnknownBlockType */)arg1;
- (void)addDataSource:(id)arg1 weight:(float)arg2;

@end
