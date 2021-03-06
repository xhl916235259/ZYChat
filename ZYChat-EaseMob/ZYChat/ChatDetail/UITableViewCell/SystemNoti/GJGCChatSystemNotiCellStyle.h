//
//  GJGCChatSystemNotiCellStyle.h
//  ZYChat
//
//  Created by ZYVincent QQ:1003081775 on 14-11-6.
//  Copyright (c) 2014年 ZYProSoft. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GJGCChatSystemNotiCellStyle : NSObject

/* 头像宽度 */
+ (CGFloat)headViewWidth;

/* 两个消息时间戳字符串转化 */
+ (NSString *)timeAgoStringByLastMsgTime:(long long)lastDateTime lastMsgTime:(long long)lastTimeStamp;

/* 时间标签 */
+ (NSAttributedString *)formateTime:(NSString *)timeString;

/* 助手时间 */
+ (NSAttributedString*)formateSystemNotiTime:(long long)time;

/* 基础内容展示标签 */
+ (NSAttributedString *)formateBaseContent:(NSString *)baseContent;

/* 名字标签风格 */
+ (NSAttributedString *)formateNameString:(NSString *)name;

/* 男年龄标签 */
+ (NSAttributedString *)formateManAge:(NSString *)manAge;

/* 女年龄标签 */
+ (NSAttributedString *)formateWomenAge:(NSString *)womenAge;

/* 星座标签 */
+ (NSAttributedString *)formateStarName:(NSString *)starName;

/* 群组成员标签风格 */
+ (NSAttributedString *)formateGroupMember:(NSString *)memberCount;

/* 群组等级标签 */
+ (NSAttributedString *)formateGroupLevel:(NSString *)levelString;

/* 申请通知信息标签 */
+ (NSAttributedString *)formateApplyTip:(NSString *)applyTip;

/* 申请理由标签 */
+ (NSAttributedString *)formateApplyReason:(NSString *)applyReason;

/* 按钮 */
+ (NSAttributedString *)formateButtonTitle:(NSString *)buttonTitle;

/* 活动卡片内容颜色 */
+ (NSAttributedString *)formateActiveDescription:(NSString *)description;


@end
