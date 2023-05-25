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
  enum class Eac3MetadataControl
  {
    NOT_SET,
    FOLLOW_INPUT,
    USE_CONFIGURED
  };

namespace Eac3MetadataControlMapper
{
AWS_MEDIACONVERT_API Eac3MetadataControl GetEac3MetadataControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForEac3MetadataControl(Eac3MetadataControl value);
} // namespace Eac3MetadataControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
