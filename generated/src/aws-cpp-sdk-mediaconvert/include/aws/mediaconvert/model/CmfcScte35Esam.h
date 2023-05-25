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
  enum class CmfcScte35Esam
  {
    NOT_SET,
    INSERT,
    NONE
  };

namespace CmfcScte35EsamMapper
{
AWS_MEDIACONVERT_API CmfcScte35Esam GetCmfcScte35EsamForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForCmfcScte35Esam(CmfcScte35Esam value);
} // namespace CmfcScte35EsamMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
