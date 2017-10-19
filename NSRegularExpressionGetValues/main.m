//
//  main.m
//  NSRegularExpressionGetValues
//
//  Created by Shenry on 2017/10/19.
//  Copyright © 2017年 Shenry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NSRegularExpression+SHY_GetValues.h"

static NSString *const Regex_Stock = @"^http://stock\\.jrj\\.com\\.cn/(share,|cominfo/default_).*?(sh|sz)?(\\d{6})\\.s?html?$";

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...

        NSString *url = @"http://stock.jrj.com.cn/share,sh000001.shtml";
        BOOL isMatch = [NSRegularExpression isMatchRegularExpression:Regex_Stock checkString:url];
        NSLog(@"%@", isMatch ? @"YES" : @"NO"); //YES
        
        NSArray *parts = [NSRegularExpression arrayOfCheckStringWithRegularExpression:@"(share,|cominfo/default_).*?(sh|sz)?(\\d{6})" checkString:url];
        NSLog(@"%@", parts); //[@"share,", @"sh", @"000001"]
        
    }
    return 0;
}
