//
//  HttpTool.m
//  网络请求的封装
//
//  Created by zhouyantong on 15/2/13.
//  Copyright (c) 2015年 zhouyantong. All rights reserved.
//

#import "HttpTool.h"
#import "AFNetworking.h"
@implementation HttpTool

+ (void)get:(NSString *)url params:(NSDictionary *)params success:(void (^)(id))success failure:(void (^)(NSError *))failure{
    //1.获得请求管理者
    AFHTTPRequestOperationManager * manager = [AFHTTPRequestOperationManager manager];
    //2.发送get请求
    [manager GET:url parameters:params success:^(AFHTTPRequestOperation *operation, id responseObject) {
        if (success) {
            success(responseObject);
        }
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        if (failure) {
            failure (error);
        }
    }];
}

+ (void)post:(NSString *)url params:(NSDictionary *)params success:(void (^)(id))success failure:(void (^)(NSError *))failure{
    //1.获得请求管理者
    AFHTTPRequestOperationManager * manager = [AFHTTPRequestOperationManager manager];
    //2.发送post请求
    [manager POST:url parameters:params success:^(AFHTTPRequestOperation *operation, id responseObject) {
        if (success) {
            success (responseObject);
        }
    } failure:^(AFHTTPRequestOperation *operation, NSError *error) {
        if (failure) {
            failure (error);
        }
    }];
}
@end
