//
//  BRCalculateResultViewController.h
//  MortgageCalculator
//
//  Created by 任波 on 2017/11/24.
//  Copyright © 2017年 apple. All rights reserved.
//

#import "BaseViewController.h"

/// 贷款计算方式
typedef enum : NSUInteger {
    BRCalculateWayTotalPrice,       //房屋总额
    BRCalculateWayUnitPriceAndArea  //房屋单价和面积
} BRCalculateWay;

/// 还款方式
typedef enum : NSUInteger {
    BRRepayWayPriceInterestSame,  // 等额本息
    BRRepayWayPriceSame           // 等额本金
} BRRepayWay;

@class BRResultModel;
@interface BRCalculateResultViewController : BaseViewController
/** 贷款计算方式 */
@property (nonatomic, assign) BRCalculateWay calculateWay;
/** 还款方式 */
@property (nonatomic, assign) BRRepayWay repayWay;
/** 计算结果模型 */
@property (nonatomic, strong) BRResultModel *resultModel;

@end
