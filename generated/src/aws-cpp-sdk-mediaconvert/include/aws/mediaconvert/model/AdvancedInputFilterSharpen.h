﻿/**
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
  enum class AdvancedInputFilterSharpen
  {
    NOT_SET,
    OFF,
    LOW,
    HIGH
  };

namespace AdvancedInputFilterSharpenMapper
{
AWS_MEDIACONVERT_API AdvancedInputFilterSharpen GetAdvancedInputFilterSharpenForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForAdvancedInputFilterSharpen(AdvancedInputFilterSharpen value);
} // namespace AdvancedInputFilterSharpenMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
