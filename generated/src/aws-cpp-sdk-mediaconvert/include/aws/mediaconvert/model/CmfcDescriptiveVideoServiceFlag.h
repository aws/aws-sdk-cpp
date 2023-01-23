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
  enum class CmfcDescriptiveVideoServiceFlag
  {
    NOT_SET,
    DONT_FLAG,
    FLAG
  };

namespace CmfcDescriptiveVideoServiceFlagMapper
{
AWS_MEDIACONVERT_API CmfcDescriptiveVideoServiceFlag GetCmfcDescriptiveVideoServiceFlagForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcDescriptiveVideoServiceFlag(CmfcDescriptiveVideoServiceFlag value);
} // namespace CmfcDescriptiveVideoServiceFlagMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
