//
//  ToDoItem.m
//  todo
//
//  Created by qa on 10/8/14.
//  Copyright (c) 2014 qa. All rights reserved.
//

#import "ToDoItem.h"

@implementation ToDoItem

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    // Return the number of rows in the section.
    return [self.toDoItems count];
}
@end




