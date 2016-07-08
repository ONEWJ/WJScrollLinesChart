//
//  ViewController.m
//  WJLinesChart
//
//  Created by 王文娟 on 16/7/8.
//  Copyright © 2016年 EJU. All rights reserved.
//

#import "ViewController.h"
#import "WJLinesChart.h"
#import "WJChartParam.h"
@interface ViewController ()

@end

@implementation ViewController


- (void)viewDidLoad {
    
    [super viewDidLoad];
    
    WJLinesChart *linesChart = [[WJLinesChart alloc]initWithFrame:CGRectMake(0, 0, self.view.frame.size.width, self.view.frame.size.height)];
    
    [self.view addSubview:linesChart];
    
    LineParam *param1 = [[LineParam alloc]initWithPointValues:@[@45,@79,@59,@88,@56,@105,@90,@80]normalPointColor:[UIColor blueColor] lineColor:[UIColor lightGrayColor]];
    
    param1.normalValueScope = @[@50,@89];
    
    NSArray *lines = @[param1];
    
//    param2.shadowColor = [UIColor colorWithWhite:0.2 alpha:0.2];
    
    linesChart.chartParam = [WJChartParam chartParamWithLineParam:lines y_axisScope:@[@30,@110] segmentNum:20 x_axisTitle:@[@"05.12",@"05.23",@"06.03",@"07.03",@"05.12",@"05.23",@"06.03",@"07.03"]];
    
    [linesChart drawChart];
    
}

@end
