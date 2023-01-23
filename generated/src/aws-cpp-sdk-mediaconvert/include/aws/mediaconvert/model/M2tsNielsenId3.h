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
  enum class M2tsNielsenId3
  {
    NOT_SET,
    INSERT,
    NONE
  };

namespace M2tsNielsenId3Mapper
{
AWS_MEDIACONVERT_API M2tsNielsenId3 GetM2tsNielsenId3ForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsNielsenId3(M2tsNielsenId3 value);
} // namespace M2tsNielsenId3Mapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
