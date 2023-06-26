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
  enum class MovReference
  {
    NOT_SET,
    SELF_CONTAINED,
    EXTERNAL
  };

namespace MovReferenceMapper
{
AWS_MEDIACONVERT_API MovReference GetMovReferenceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForMovReference(MovReference value);
} // namespace MovReferenceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
