//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSInputStream;

@interface PKMultipartElement : NSObject
{
    NSData *_headers;
    NSInputStream *_body;
    NSUInteger _headersLength;
    NSUInteger _bodyLength;
    NSUInteger _length;
    NSUInteger _delivered;
}

@property(nonatomic) NSUInteger delivered; // @synthesize delivered=_delivered;
@property(nonatomic) NSUInteger length; // @synthesize length=_length;
@property(nonatomic) NSUInteger bodyLength; // @synthesize bodyLength=_bodyLength;
@property(nonatomic) NSUInteger headersLength; // @synthesize headersLength=_headersLength;
@property(retain, nonatomic) NSInputStream *body; // @synthesize body=_body;
@property(retain, nonatomic) NSData *headers; // @synthesize headers=_headers;
// - (void).cxx_destruct;
- (NSUInteger)read:(char )arg1 maxLength:(NSUInteger)arg2;
- (void)appendNewLine:(id)arg1;
- (id)makeHeadersDataFromHeadersDict:(id)arg1 boundary:(id)arg2;
- (id)initWithHeaders:(id)arg1 path:(id)arg2 boundary:(id)arg3;
- (id)initWithHeaders:(id)arg1 string:(id)arg2 boundary:(id)arg3;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 stream:(id)arg4 streamLength:(NSUInteger)arg5;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4 contentType:(id)arg5;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4;
- (id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4 filename:(id)arg5;
- (id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4;
- (id)initWithName:(id)arg1 boundary:(id)arg2 string:(id)arg3;
- (void)updateLength;

@end
