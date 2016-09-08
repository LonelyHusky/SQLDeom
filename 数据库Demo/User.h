//
//  User.h
//  数据库Demo
//
//  Created by 云卷云舒丶 on 16/6/10.
//  Copyright © 2016年 sc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface User : NSObject
/**	string	名字 */
@property (nonatomic,copy) NSString *name;
/**	string	年龄 */
@property (nonatomic,copy) NSString *age;
/**	string	id */
@property (nonatomic,copy) NSString *userID;

+(instancetype)userWithName:(NSString *)name age:(NSString *)age userID:(NSString *)ID;
@end
