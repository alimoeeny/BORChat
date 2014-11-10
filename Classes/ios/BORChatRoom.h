//
// Created by Bohdan on 3/22/14.
// Copyright (c) 2014 Bohdan Orlov. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol BORChatMessage;
@class BORChatCollectionViewController;


@interface BORChatRoom : UIViewController
{
    BOOL local_ShowChatInput;
    UIColor * local_BGColor;
}

@property (strong, nonatomic, readonly) BORChatCollectionViewController *chatCollectionViewController;

@property (strong) NSNumber * ShowChatInput;
@property (strong) UIColor * BGColor;

@property(nonatomic, strong, readonly) UITextView *messageTextView;

- (void)sendMessage;
- (void)addMessage:(id <BORChatMessage>)message scrollToMessage:(BOOL)scrollToMessage;

- (NSNumber *)ShowChatInput;
- (void) setShowChatInput:(NSNumber *)ShowChatInput;

-(UIColor *)BGColor;
-(void) setBGColor:(UIColor *)BGColor;

@end