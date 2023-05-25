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
  enum class CmafSegmentLengthControl
  {
    NOT_SET,
    EXACT,
    GOP_MULTIPLE
  };

namespace CmafSegmentLengthControlMapper
{
AWS_MEDIACONVERT_API CmafSegmentLengthControl GetCmafSegmentLengthControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafSegmentLengthControl(CmafSegmentLengthControl value);
} // namespace CmafSegmentLengthControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
