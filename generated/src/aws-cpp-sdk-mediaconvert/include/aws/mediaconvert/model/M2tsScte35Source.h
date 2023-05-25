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
  enum class M2tsScte35Source
  {
    NOT_SET,
    PASSTHROUGH,
    NONE
  };

namespace M2tsScte35SourceMapper
{
AWS_MEDIACONVERT_API M2tsScte35Source GetM2tsScte35SourceForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForM2tsScte35Source(M2tsScte35Source value);
} // namespace M2tsScte35SourceMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
