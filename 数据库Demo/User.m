//
//  User.m
//  数据库Demo
//
//  Created by 云卷云舒丶 on 16/6/10.
//  Copyright © 2016年 sc. All rights reserved.
//

#import "User.h"

@implementation User

+(instancetype)userWithName:(NSString *)name age:(NSString *)age userID:(NSString *)ID
{
    User *user = [[self alloc]init];
    user.name = name;
    user.age = age;
    user.userID = ID;
    return user;
}



@end
