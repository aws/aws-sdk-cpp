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
  enum class AvcIntraSlowPal
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace AvcIntraSlowPalMapper
{
AWS_MEDIACONVERT_API AvcIntraSlowPal GetAvcIntraSlowPalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAvcIntraSlowPal(AvcIntraSlowPal value);
} // namespace AvcIntraSlowPalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
