//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <Foundation/NSMutableData.h>

@interface NSMutableData (MCMimeDataEncoding)
- (void)appendQuotedPrintableDataForHeaderBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)appendRFC2231CompliantValue:(id)arg1 forKey:(id)arg2 withEncodingHint:(unsigned long long)arg3;
- (void)convertNetworkLineEndingsToUnix;
- (void)appendCString:(const char *)arg1;
@end

