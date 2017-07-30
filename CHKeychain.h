//
//  CHKeychain.h
//  KeyChina
//
//  Created by ios on 16/3/15.
//  Copyright © 2016年 Leesin. All rights reserved.
//


//一般用于获取设备UUID并存储 ， 作为设备的唯一标识符使用
//[NSUUID UUID].UUIDString 存这个

#import <Foundation/Foundation.h>
#import <Foundation/Foundation.h>
#import <Security/Security.h>

@interface CHKeychain : NSObject

/**
 存数据到KeyChain钥匙串

 @param service 你自定义的一个唯一标识作为对应的数据的Key值
 @param data 要存储的数据
 */
+ (void)saveByKey:(NSString *)service Object:(id)data;

/**
 返回Key值对应得数据

 @param service 对应的Key值
 */
+ (id)loadByKey:(NSString *)service;

/**
 删除Key值对应的得数据

 @param service 对应的Key值
 */
+ (void)deleteByKey:(NSString *)service;

@end
