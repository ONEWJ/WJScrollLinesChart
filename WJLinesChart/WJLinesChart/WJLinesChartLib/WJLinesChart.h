//
//  WJLinesChart.h
//  ExtendedMedical
//
//  Created by wangwenjuan on 16/5/26.
//  Copyright © 2016年 ihefe. All rights reserved.
//

#import <UIKit/UIKit.h>
@class WJChartParam;

@interface WJLinesChart : UIView
@property(nonatomic,strong)WJChartParam *chartParam;
-(void)drawChart;
@end
