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
  enum class H264SaliencyAwareEncoding
  {
    NOT_SET,
    DISABLED,
    PREFERRED
  };

namespace H264SaliencyAwareEncodingMapper
{
AWS_MEDIACONVERT_API H264SaliencyAwareEncoding GetH264SaliencyAwareEncodingForName(const Aws::String& name);

AWS_MEDIACONVERT_API Aws::String GetNameForH264SaliencyAwareEncoding(H264SaliencyAwareEncoding value);
} // namespace H264SaliencyAwareEncodingMapper
} // namespace Model
} // namespace MediaConvert
} // namespace Aws
