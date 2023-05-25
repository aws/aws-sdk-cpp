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
  enum class JobPhase
  {
    NOT_SET,
    PROBING,
    TRANSCODING,
    UPLOADING
  };

namespace JobPhaseMapper
{
AWS_MEDIACONVERT_API JobPhase GetJobPhaseForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForJobPhase(JobPhase value);
} // namespace JobPhaseMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
