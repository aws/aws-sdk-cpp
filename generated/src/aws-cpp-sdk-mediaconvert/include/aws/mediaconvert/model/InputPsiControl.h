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
  enum class InputPsiControl
  {
    NOT_SET,
    IGNORE_PSI,
    USE_PSI
  };

namespace InputPsiControlMapper
{
AWS_MEDIACONVERT_API InputPsiControl GetInputPsiControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputPsiControl(InputPsiControl value);
} // namespace InputPsiControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
