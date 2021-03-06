//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr  4 2016 10:44:45).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBStringWithRedactedDescription, MNSecureAdminMessage, MNSecureAttachmentContentInfo;

@interface MNSecureMessageContent : NSObject
{
    unsigned long long _subtype;
    FBStringWithRedactedDescription *_message_text;
    MNSecureAttachmentContentInfo *_messageAttachment_info;
    MNSecureAdminMessage *_adminMessage;
}

+ (id)messageWithText:(id)arg1;
+ (id)messageAttachmentWithInfo:(id)arg1;
+ (id)adminMessage:(id)arg1;

- (void)matchMessage:(id)arg1 messageAttachment:(id)arg2 adminMessage:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

