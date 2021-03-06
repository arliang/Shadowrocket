//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCDWebServer;

@protocol GCDWebServerDelegate <NSObject>

@optional
- (void)webServerDidStop:(GCDWebServer *)arg1;
- (void)webServerDidDisconnect:(GCDWebServer *)arg1;
- (void)webServerDidConnect:(GCDWebServer *)arg1;
- (void)webServerDidUpdateNATPortMapping:(GCDWebServer *)arg1;
- (void)webServerDidCompleteBonjourRegistration:(GCDWebServer *)arg1;
- (void)webServerDidStart:(GCDWebServer *)arg1;
@end

