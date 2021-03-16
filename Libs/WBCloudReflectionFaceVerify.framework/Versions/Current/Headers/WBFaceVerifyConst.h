//
//  WBFaceVerifyConst.h
//  Pods
//
//  Created by pp on 2017/7/31.
//
//
#import <UIKit/UIKit.h>
#ifndef WBFaceVerifyConst_h
#define WBFaceVerifyConst_h
#define WBCloudReflectionFaceVerifyVersion @"5.1.1"

UIKIT_EXTERN NSString *const WBCloudFaceVerifySDKVersion;

/**
 具体的活体检测的类型:

 - WBFaceVerifyLivingType_Action:   动作活体
 - WBFaceVerifyLivingType_Light:    光线活体
 */
typedef NS_ENUM(NSInteger,WBFaceVerifyLivingType){
    WBFaceVerifyLivingType_Action,
    WBFaceVerifyLivingType_Light,
};

/**
 SDK使用的主题风格

 - WBFaceVerifyThemeDarkness: 暗黑色系主题
 - WBFaceVerifyThemeLightness: 明亮色系主题
 */
typedef NS_ENUM(NSInteger, WBFaceVerifyTheme) {
    WBFaceVerifyThemeDarkness,
    WBFaceVerifyThemeLightness,
    WBFaceVerifyThemeCustom
};

typedef NS_ENUM(NSInteger, WBFaceCustomTipsLoc) {
    WBFaceCustomTipsLoc_Bottom = 0, //提示语在下
    WBFaceCustomTipsLoc_Top,
};
#endif /* WBFaceVerifyConst_h */
