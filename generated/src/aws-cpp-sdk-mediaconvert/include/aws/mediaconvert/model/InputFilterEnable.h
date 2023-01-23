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
  enum class InputFilterEnable
  {
    NOT_SET,
    AUTO,
    DISABLE,
    FORCE
  };

namespace InputFilterEnableMapper
{
AWS_MEDIACONVERT_API InputFilterEnable GetInputFilterEnableForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputFilterEnable(InputFilterEnable value);
} // namespace InputFilterEnableMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
