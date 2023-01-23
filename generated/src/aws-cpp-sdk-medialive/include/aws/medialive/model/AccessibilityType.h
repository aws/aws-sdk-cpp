/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class AccessibilityType
  {
    NOT_SET,
    DOES_NOT_IMPLEMENT_ACCESSIBILITY_FEATURES,
    IMPLEMENTS_ACCESSIBILITY_FEATURES
  };

namespace AccessibilityTypeMapper
{
AWS_MEDIALIVE_API AccessibilityType GetAccessibilityTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAccessibilityType(AccessibilityType value);
} // namespace AccessibilityTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
