//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

//#import <MailCore/NSURLSessionTaskDelegate-Protocol.h>

@class NSURL, NSURLSession, NSURLSessionDownloadTask;

@protocol NSURLSessionDownloadDelegate <NSURLSessionTaskDelegate>
- (void)URLSession:(NSURLSession *)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didFinishDownloadingToURL:(NSURL *)arg3;

@optional
- (void)URLSession:(NSURLSession *)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(NSURLSession *)arg1 downloadTask:(NSURLSessionDownloadTask *)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
@end

