/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{
  enum class RemoveRubyReserveAttributes
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace RemoveRubyReserveAttributesMapper
{
AWS_MEDIACONVERT_API RemoveRubyReserveAttributes GetRemoveRubyReserveAttributesForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForRemoveRubyReserveAttributes(RemoveRubyReserveAttributes value);
} // namespace RemoveRubyReserveAttributesMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
