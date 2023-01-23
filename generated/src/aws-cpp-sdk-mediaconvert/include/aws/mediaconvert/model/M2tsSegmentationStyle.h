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
  enum class M2tsSegmentationStyle
  {
    NOT_SET,
    MAINTAIN_CADENCE,
    RESET_CADENCE
  };

namespace M2tsSegmentationStyleMapper
{
AWS_MEDIACONVERT_API M2tsSegmentationStyle GetM2tsSegmentationStyleForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsSegmentationStyle(M2tsSegmentationStyle value);
} // namespace M2tsSegmentationStyleMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
