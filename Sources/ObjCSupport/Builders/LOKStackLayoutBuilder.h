// Copyright 2018 LinkedIn Corp.
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
// You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#import "LOKBaseLayoutBuilder.h"

typedef NS_ENUM(NSInteger, LOKStackLayoutDistribution) {
    LOKStackLayoutDistributionDefault = 0,
    LOKStackLayoutDistributionLeading = 1,
    LOKStackLayoutDistributionTrailing = 2,
    LOKStackLayoutDistributionCenter = 3,
    LOKStackLayoutDistributionFillEqualSpacing = 4,
    LOKStackLayoutDistributionFillEqualSize = 5,
    LOKStackLayoutDistributionFillFlexing = 6,
};

typedef NS_ENUM(NSInteger, LOKAxis) {
    LOKAxisVertical = 0,
    LOKAxisHorizontal = 1,
};

@class LOKStackLayout;

@interface LOKStackLayoutBuilder : LOKBaseLayoutBuilder

+ (nonnull instancetype)withSublayouts:(nonnull NSArray< id<LOKLayout> > *)sublayouts;

@property (nonatomic, nonnull) NSArray< id<LOKLayout> > *sublayouts;
@property (nonatomic) LOKAxis axis;
@property (nonatomic) CGFloat spacing;
@property (nonatomic) LOKStackLayoutDistribution distribution;

- (nonnull LOKStackLayout *)build;

@end
