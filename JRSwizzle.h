/*******************************************************************************
	JRSwizzle.h
		Copyright (c) 2007 Jonathan 'Wolf' Rentzsch: <http://rentzsch.com>
		Some rights reserved: <http://opensource.org/licenses/mit-license.php>

	***************************************************************************/

#import <Foundation/Foundation.h>

@interface NSObject (JRSwizzle)
+ (BOOL)jr_swizzleMethod:(SEL)origSel_ withMethod:(SEL)altSel_ error:(NSError**)error_;
+ (BOOL)jr_swizzleClassMethod:(SEL)origSel_ withClassMethod:(SEL)altSel_ error:(NSError**)error_;

+ (BOOL)jr_aliasMethod:(SEL)methSel_ withName:(const char*)aliasName_ error:(NSError**)error_;
+ (BOOL)jr_aliasMethod:(SEL)methSel_ withSelector:(SEL)aliasSel_ error:(NSError**)error_;

+ (BOOL)jr_aliasClassMethod:(SEL)methSel_ withName:(const char*)aliasName_ error:(NSError**)error_;
+ (BOOL)jr_aliasClassMethod:(SEL)methSel_ withSelector:(SEL)aliasSel_ error:(NSError**)error_;
@end
