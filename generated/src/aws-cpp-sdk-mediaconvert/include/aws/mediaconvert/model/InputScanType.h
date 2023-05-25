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
  enum class InputScanType
  {
    NOT_SET,
    AUTO,
    PSF
  };

namespace InputScanTypeMapper
{
AWS_MEDIACONVERT_API InputScanType GetInputScanTypeForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForInputScanType(InputScanType value);
} // namespace InputScanTypeMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
