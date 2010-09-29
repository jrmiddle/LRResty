//
//  LRRestyResponseBlock.h
//  LRResty
//
//  Created by Luke Redpath on 05/08/2010.
//  Copyright 2010 LJR Software Limited. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LRRestyClient.h"
#import "LRRestyRequest.h"

@interface LRRestyClientBlockDelegate : NSObject <LRRestyRequestDelegate>
{
  LRRestyResponseBlock block;
}
+ (id)delegateWithBlock:(LRRestyResponseBlock)block;
- (id)initWithBlock:(LRRestyResponseBlock)theBlock;
@end
