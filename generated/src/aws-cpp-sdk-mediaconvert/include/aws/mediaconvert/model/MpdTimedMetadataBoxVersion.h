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
  enum class MpdTimedMetadataBoxVersion
  {
    NOT_SET,
    VERSION_0,
    VERSION_1
  };

namespace MpdTimedMetadataBoxVersionMapper
{
AWS_MEDIACONVERT_API MpdTimedMetadataBoxVersion GetMpdTimedMetadataBoxVersionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMpdTimedMetadataBoxVersion(MpdTimedMetadataBoxVersion value);
} // namespace MpdTimedMetadataBoxVersionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
