//
//  NSURL+Param.h
//  categories
//
//  Created by Jakey on 14/12/30.
//  Copyright (c) 2014年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURL (Param)
- (NSDictionary *)parameters;
- (NSString *)valueForParameter:(NSString *)parameterKey;
@end
