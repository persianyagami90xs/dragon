//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface ICArchiveWriter : NSObject
{
    struct archive _archive;
    BOOL _usesCompression;
    BOOL _flatten;
    NSString *_flattenFolderName;
    NSURL *_destinationURL;
    NSString *_basePath;
}

@property(retain, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(retain, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(retain, nonatomic) NSString *flattenFolderName; // @synthesize flattenFolderName=_flattenFolderName;
@property(nonatomic) BOOL flatten; // @synthesize flatten=_flatten;
@property(nonatomic) BOOL usesCompression; // @synthesize usesCompression=_usesCompression;
// - (void).cxx_destruct;
- (BOOL)writeURL:(id)arg1 isDirectory:(BOOL)arg2 error:(id )arg3;
- (BOOL)open:(id )arg1;
- (BOOL)finish:(id )arg1;
- (BOOL)writeURLs:(id)arg1 error:(id )arg2;
- (void)dealloc;
- (id)initWithDestinationURL:(id)arg1 baseURL:(id)arg2;

@end
