//
//  ToDoItem.h
//  todo
//
//  Created by qa on 10/8/14.
//  Copyright (c) 2014 qa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject
@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;
@property NSMutableArray *toDoItems;
@end
