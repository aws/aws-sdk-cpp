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
  enum class ProresSlowPal
  {
    NOT_SET,
    DISABLED,
    ENABLED
  };

namespace ProresSlowPalMapper
{
AWS_MEDIACONVERT_API ProresSlowPal GetProresSlowPalForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForProresSlowPal(ProresSlowPal value);
} // namespace ProresSlowPalMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
