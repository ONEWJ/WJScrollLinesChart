//
//  WJChartParam.h
//  ExtendedMedical
//
//  Created by wangwenjuan on 16/5/27.
//  Copyright © 2016年 ihefe. All rights reserved.

// 每一条线是一个模型

#import <UIKit/UIKit.h>


@interface LineParam : NSObject

/**
 *  每一个点的数值
 */
@property(nonatomic,strong)NSArray *pointValues;
/**
 *  正常值范围
 */
@property(nonatomic,strong)NSArray *normalValueScope;
/**
 *  正常值点的颜色
 */
@property(nonatomic,strong)UIColor *normalPointColor;
/**
 *  异常值点的颜色
 */
@property(nonatomic,strong)UIColor *abnormalPointColor;
/**
 *  是否需要阴影
 */
@property(nonatomic,assign)BOOL shadow;
/**
 *  阴影的颜色
 */
@property(nonatomic,strong)UIColor *shadowColor;

@property(nonatomic,strong)UIColor *lineColor;


+(instancetype)lineWithPointValues:(NSArray *)pointValues normalPointColor:(UIColor *)normalPointColor lineColor:(UIColor *)lineColor;
-(instancetype)initWithPointValues:(NSArray *)pointValues normalPointColor:(UIColor *)normalPointColor lineColor:(UIColor *)lineColor;

@end

@interface WJChartParam : NSObject

/**
 *  LineParam 数组
 */

@property(nonatomic,strong)NSArray *lines;
/**
 *  Y轴范围
 */
@property(nonatomic,strong)NSArray *Y_axisScope;
/**
 *  Y轴每一个小分段的数值
 */
@property(nonatomic,assign)CGFloat Y_segmentNum;

/**
 *  X轴的标题
 */
@property(nonatomic,strong)NSArray *X_axisTitle;

+(instancetype)chartParamWithLineParam:(NSArray *)lines y_axisScope:(NSArray *)y_axisScope segmentNum:(NSInteger )segmentNum x_axisTitle:(NSArray *)x_axisTitle;

-(instancetype)initWithLineParam:(NSArray *)lines y_axisScope:(NSArray *)y_axisScope segmentNum:(NSInteger )segmentNum x_axisTitle:(NSArray *)x_axisTitle;
@end
