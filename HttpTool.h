//
//  HttpTool.h
//  网络请求的封装
//
//  Created by zhouyantong on 15/2/13.
//  Copyright (c) 2015年 zhouyantong. All rights reserved.
//

//  之所以封装网络请求,是为了防止所使用的第三方网络请求不更新,或者第三方网络请求的新版本有问题,导致项目中的第三方网络请求不能够使用,而网络请求的位置又比较多,使工程基本作废或替换的文件太多,因此我们需要使用分层来处理,也就是将网络请求封装在我们自己写的网络请求的方法里,如果需要替换网络请求,我们只需要在我们封装的位置替换,这样替换的面积较小


#import <Foundation/Foundation.h>

@interface HttpTool : NSObject


/**
 *  发送一个GET请求
 *
 *  @param url      请求路径
 *  @param params   请求参数
 *  @param success  请求成功后的回调(请将请求成功后想做的事情写到这个block中)
 *  @param failure  请求失败后的回调(请将请求失败后想做的事情写到这个block中)
 */
+ (void)get:(NSString *)url params:(NSDictionary *)params success:(void (^)(id respnseObj))success failure:(void (^)(NSError *error))failure;



/**
 *  发送POST请求
 *  @param url      请求路径
 *  @param params   请求参数
 *  @param success  请求成功后的回调(请将请求成功后想做的事情写到这个block中)
 *  @param failure  请求失败后的回调(请将请求失败后想做的事情写到这个block中)
 */
+ (void)post:(NSString *)url params:(NSDictionary *)params success:(void (^)(id respnseObj))success failure:(void (^)(NSError *error))failure;
@end
