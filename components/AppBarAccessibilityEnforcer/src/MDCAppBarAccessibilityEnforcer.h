/*
 Copyright 2016-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>

/**
 The MDCAppBarAccessibilityEnforcer class creates an external object with which to work on an
 instance of a Material App Bar to activate and esnure accessibility on its title and buttons.

 ### Dependencies

 Material AppBarAccessibilityEnforcer depends on the AppBar material component and 
 MDFTextAccessibility Framework.
 */

@class MDCAppBar;

@interface MDCAppBarAccessibilityEnforcer : NSObject

/**
 Mutates title text color and navigation items' tint colors based on background color of 
 app bar's header view or navigation bar.
 */
- (void)enforceAccessibility:(nonnull MDCAppBar *)appBar;

@end
