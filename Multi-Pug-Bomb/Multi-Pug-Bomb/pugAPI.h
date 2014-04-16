//
//  pugAPI.h
//  NSOperationQueue
//
//  Created by Joe Burgess on 4/11/14.
//  Copyright (c) 2014 al-tyus.com. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface pugAPI : NSObject

- (void)getPugsCount:(NSNumber *)count
            pugBlock:(void (^)(UIImage *pugImage, NSIndexPath* ip))pugBlock
     completionBlock:(void (^)())completion;
@end