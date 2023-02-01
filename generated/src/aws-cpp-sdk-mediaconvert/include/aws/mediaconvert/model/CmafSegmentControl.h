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
  enum class CmafSegmentControl
  {
    NOT_SET,
    SINGLE_FILE,
    SEGMENTED_FILES
  };

namespace CmafSegmentControlMapper
{
AWS_MEDIACONVERT_API CmafSegmentControl GetCmafSegmentControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafSegmentControl(CmafSegmentControl value);
} // namespace CmafSegmentControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
