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
  enum class Vc3Class
  {
    NOT_SET,
    CLASS_145_8BIT,
    CLASS_220_8BIT,
    CLASS_220_10BIT
  };

namespace Vc3ClassMapper
{
AWS_MEDIACONVERT_API Vc3Class GetVc3ClassForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForVc3Class(Vc3Class value);
} // namespace Vc3ClassMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
