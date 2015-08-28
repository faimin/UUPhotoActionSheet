//
//  UUPhoto-Macros.h
//  UUPhotoActionSheet
//
//  Created by zhangyu on 15/7/10.
//  Copyright (c) 2015年 zhangyu. All rights reserved.
//

#ifndef UUPhotoActionSheet_UUPhoto_Macros_h
#define UUPhotoActionSheet_UUPhoto_Macros_h

//创建单例
#ifndef SHARED_SERVICE
#define SHARED_SERVICE(ServiceName) \
+(instancetype)sharedInstance \
{ \
static ServiceName * sharedInstance; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
sharedInstance = [[ServiceName alloc] init]; \
}); \
return sharedInstance; \
}
#endif

///屏幕宽度高度
#define ScreenWidth  [UIScreen mainScreen].bounds.size.width
#define ScreenHeight [UIScreen mainScreen].bounds.size.height

///颜色
#define COLOR_WITH_RGB(r,g,b,a) [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a]

///十进制颜色
#define COLOR_WITH_RGB(r,g,b,a) [UIColor colorWithRed:r / 255.0 green:g / 255.0 blue:b / 255.0 alpha:a]

///十六进制颜色
#define COLOR_RGBA(r, g, b, a) \
[UIColor colorWithRed : (r) / 255.0 green : (g) / 255.0 blue : (b) / 255.0 alpha : a]
#define COLOR_HEXA(hexValue, alpha) \
COLOR_RGBA( ( (hexValue) >> 16 ) & 0xff, ( (hexValue) >> 8 ) & 0xff, ( (hexValue) >> 0 ) & 0xff, alpha )

#define COLOR_WITH_HEX(hexValue) COLOR_HEXA(hexValue, 1 )


#endif
