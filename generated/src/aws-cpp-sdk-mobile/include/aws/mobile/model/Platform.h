/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mobile/Mobile_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Mobile
{
namespace Model
{
  enum class Platform
  {
    NOT_SET,
    OSX,
    WINDOWS,
    LINUX,
    OBJC,
    SWIFT,
    ANDROID_,
    JAVASCRIPT
  };

namespace PlatformMapper
{
AWS_MOBILE_API Platform GetPlatformForName(const Aws::String& name);

AWS_MOBILE_API Aws::String GetNameForPlatform(Platform value);
} // namespace PlatformMapper
} // namespace Model
} // namespace Mobile
} // namespace Aws
