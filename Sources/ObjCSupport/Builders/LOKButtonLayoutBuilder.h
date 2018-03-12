// Copyright 2018 LinkedIn Corp.
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License.
// You may obtain a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.

#import "LOKBaseLayoutBuilder.h"

@class LOKButtonLayout;

typedef NS_ENUM(NSInteger, LOKButtonLayoutType) {
    LOKButtonLayoutTypeCustom = 0,
    LOKButtonLayoutTypeSystem = 1,
    LOKButtonLayoutTypeDetailDisclosure = 2,
    LOKButtonLayoutTypeInfoLight = 3,
    LOKButtonLayoutTypeInfoDark = 4,
    LOKButtonLayoutTypeContactAdd = 5,
};

@interface LOKButtonLayoutBuilder : LOKBaseLayoutBuilder

+ (nonnull instancetype)withTitle:(nullable NSString *)title;

@property (nonatomic) LOKButtonLayoutType type;
@property (nonatomic, nullable) NSString *title;
@property (nonatomic, nullable) UIFont *font;
@property (nonatomic, nullable) UIImage *image;
@property (nonatomic) CGSize imageSize;
@property (nonatomic, nullable) NSValue *contentEdgeInsets;

- (nonnull LOKButtonLayout *)build;

@end
