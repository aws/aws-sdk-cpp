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
  enum class CmfcTimedMetadataBoxVersion
  {
    NOT_SET,
    VERSION_0,
    VERSION_1
  };

namespace CmfcTimedMetadataBoxVersionMapper
{
AWS_MEDIACONVERT_API CmfcTimedMetadataBoxVersion GetCmfcTimedMetadataBoxVersionForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcTimedMetadataBoxVersion(CmfcTimedMetadataBoxVersion value);
} // namespace CmfcTimedMetadataBoxVersionMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
