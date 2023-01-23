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
  enum class Eac3PassthroughControl
  {
    NOT_SET,
    WHEN_POSSIBLE,
    NO_PASSTHROUGH
  };

namespace Eac3PassthroughControlMapper
{
AWS_MEDIACONVERT_API Eac3PassthroughControl GetEac3PassthroughControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3PassthroughControl(Eac3PassthroughControl value);
} // namespace Eac3PassthroughControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
