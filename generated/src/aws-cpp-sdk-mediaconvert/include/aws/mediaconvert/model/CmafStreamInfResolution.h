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
  enum class CmafStreamInfResolution
  {
    NOT_SET,
    INCLUDE,
    EXCLUDE
  };

namespace CmafStreamInfResolutionMapper
{
AWS_MEDIACONVERT_API CmafStreamInfResolution GetCmafStreamInfResolutionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmafStreamInfResolution(CmafStreamInfResolution value);
} // namespace CmafStreamInfResolutionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
