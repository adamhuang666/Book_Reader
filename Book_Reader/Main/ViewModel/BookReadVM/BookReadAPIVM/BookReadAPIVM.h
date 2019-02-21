//
//  BookReadAPIVM.h
//  Book_Reader
//
//  Created by hhuua on 2019/2/21.
//  Copyright © 2019年 hhuua. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BookReadVMDelegate.h"
#import "BookInfoModel.h"

NS_ASSUME_NONNULL_BEGIN

/* 网络接口API书源ViewModel*/
@interface BookReadAPIVM : NSObject<BookReadVMDelegate>

/* 从书本model初始化*/
- (instancetype)initWithBookModel:(BookInfoModel*)model;
@property (nonatomic,strong,readonly) BookInfoModel* model;

@end

NS_ASSUME_NONNULL_END
