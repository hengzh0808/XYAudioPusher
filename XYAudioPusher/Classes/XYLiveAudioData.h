//
//  XYLiveAudioData.h
//  iosApp
//
//  Created by 张恒 on 2024/2/29.
//

#import <Foundation/Foundation.h>

@protocol LCSAudioData;
NS_ASSUME_NONNULL_BEGIN

@interface XYLiveAudioData : NSObject<LCSAudioData>

@property (nonatomic, strong, readonly) NSString *data;

- (instancetype)initWithData:(NSString *)data;

@end

NS_ASSUME_NONNULL_END
