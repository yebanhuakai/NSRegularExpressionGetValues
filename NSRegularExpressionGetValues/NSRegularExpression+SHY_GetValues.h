//
//  NSRegularExpression+SHY_GetValues.h
//  NSRegularExpressionGetValues
//
//  Created by Shenry on 2017/10/19.
//  Copyright © 2017年 Shenry. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 正则表达式拓展类，用于获取所有匹配的字符串
 */
@interface NSRegularExpression (SHY_GetValues)

/**
 *  根据传入的正则表达式和需要匹配的字符串进行匹配检查
 *
 *  @param regex       正则表达式
 *  @param checkString 需要检测是否匹配的字符串
 *
 *  @return 匹配结果
 */
+ (BOOL)isMatchRegularExpression:(NSString *)regex checkString:(NSString *)checkString;

/**
 *  根据传入的正则表达式来获取传入字符串所匹配的部分
 *
 *  @param regex       正则表达式
 *  @param checkString 需要检测是否匹配的字符串
 *
 *  @return 匹配的部分字符串
 */
+ (NSString *)partStringOfCheckStringWithRegularExpression:(NSString *)regex checkString:(NSString *)checkString;

/**
 *  根据传入的正则表达式来获取传入字符串所匹配的结果字符串数组，(group)形式
 *
 *  @param regex       正则表达式（group）形式
 *  @param checkString 需要检测是否匹配的字符串
 *
 *  @return 结果字符串数组，数组个数取决于正则表达式中(group)个数
 */
+ (NSArray<NSString *> *)arrayOfCheckStringWithRegularExpression:(NSString *)regex checkString:(NSString *)checkString;

@end
