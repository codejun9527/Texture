//
//  _ASDisplayViewAccessiblity.h
//  Texture
//
//  Copyright (c) Facebook, Inc. and its affiliates.  All rights reserved.
//  Changes after 4/13/2017 are: Copyright (c) Pinterest, Inc.  All rights reserved.
//  Licensed under Apache 2.0: http://www.apache.org/licenses/LICENSE-2.0
//

#import <Foundation/Foundation.h>

// WARNING: When dealing with accessibility elements, please use the `accessibilityElements`
// property instead of the older methods e.g. `accessibilityElementCount()`. While the older methods
// should still work as long as accessibility is enabled, this framework provides no guarantees on
// their correctness. For details, see
// https://developer.apple.com/documentation/objectivec/nsobject/1615147-accessibilityelements

struct _ASDisplayViewAccessibilityFlags {
  unsigned inAccessibilityElementCount:1;
  unsigned inIndexOfAccessibilityElement:1;
  unsigned inAccessibilityElementAtIndex:1;
  unsigned inSetAccessibilityElements:1;
};
