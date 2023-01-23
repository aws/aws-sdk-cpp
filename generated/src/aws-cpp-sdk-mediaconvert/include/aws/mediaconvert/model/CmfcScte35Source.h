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
  enum class CmfcScte35Source
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace CmfcScte35SourceMapper
{
AWS_MEDIACONVERT_API CmfcScte35Source GetCmfcScte35SourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcScte35Source(CmfcScte35Source value);
} // namespace CmfcScte35SourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
