//
//  Copyright (c) 2019 Open Whisper Systems. All rights reserved.
//

#import "BaseModel.h"

NS_ASSUME_NONNULL_BEGIN

// uniqueId is an e164 phone number
@interface OWSContactQuery : BaseModel

@property (nonatomic, readonly) NSData *nonce;
@property (nonatomic) NSDate *lastQueried;

- (instancetype)initWithUniqueId:(NSString *)uniqueId
                     lastQueried:(NSDate *)lastQueried
                           nonce:(NSData *)nonce NS_SWIFT_NAME(init(uniqueId:lastQueried:nonce:));

// --- CODE GENERATION MARKER

// This snippet is generated by /Scripts/sds_codegen/sds_generate.py. Do not manually edit it, instead run `sds_codegen.sh`.

// clang-format off

- (instancetype)initWithGrdbId:(int64_t)grdbId
                      uniqueId:(NSString *)uniqueId
                     lastQueried:(NSDate *)lastQueried
                           nonce:(NSData *)nonce
NS_SWIFT_NAME(init(grdbId:uniqueId:lastQueried:nonce:));

// clang-format on

// --- CODE GENERATION MARKER

@end

NS_ASSUME_NONNULL_END