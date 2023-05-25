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
  enum class M2tsDataPtsControl
  {
    NOT_SET,
    AUTO,
    ALIGN_TO_VIDEO
  };

namespace M2tsDataPtsControlMapper
{
AWS_MEDIACONVERT_API M2tsDataPtsControl GetM2tsDataPtsControlForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsDataPtsControl(M2tsDataPtsControl value);
} // namespace M2tsDataPtsControlMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
