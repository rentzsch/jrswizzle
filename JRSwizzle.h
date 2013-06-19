// JRSwizzle.h semver:1.1
//   Copyright (c) 2007-2013 Jonathan 'Wolf' Rentzsch: http://rentzsch.com
//   Some rights reserved: http://opensource.org/licenses/mit
//   https://github.com/rentzsch/jrswizzle

#import <Foundation/Foundation.h>

//-----------------------------------------------------------------------------------------
// Poor man's namespacing support.
// See http://rentzsch.tumblr.com/post/40806448108/ns-poor-mans-namespacing-for-objective-c

#ifndef NS
    #ifdef NS_NAMESPACE
        #define JRNS_CONCAT_TOKENS(a,b) a##_##b
        #define JRNS_EVALUATE(a,b) JRNS_CONCAT_TOKENS(a,b)
        #define NS(original_name) JRNS_EVALUATE(NS_NAMESPACE, original_name)
    #else
        #define NS(original_name) original_name
    #endif
#endif

//-----------------------------------------------------------------------------------------

@interface NSObject (NS(JRSwizzle))

+ (BOOL)jr_swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ error:(NSError**)error_;
+ (BOOL)jr_swizzleClassMethod:(SEL)origSel_ withClassMethod:(SEL)altSel_ error:(NSError**)error_;

@end
#define JRSwizzle NS(JRSwizzle)
