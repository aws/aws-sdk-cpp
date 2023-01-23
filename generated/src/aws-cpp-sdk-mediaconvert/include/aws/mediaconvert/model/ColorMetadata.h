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
  enum class ColorMetadata
  {
    NOT_SET,
    IGNORE,
    INSERT
  };

namespace ColorMetadataMapper
{
AWS_MEDIACONVERT_API ColorMetadata GetColorMetadataForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForColorMetadata(ColorMetadata value);
} // namespace ColorMetadataMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
