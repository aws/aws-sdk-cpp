/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class ScanMode
  {
    NOT_SET,
    progressive,
    interlace,
    progressive_segmented_frame
  };

namespace ScanModeMapper
{
AWS_MEDIACONNECT_API ScanMode GetScanModeForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForScanMode(ScanMode value);
} // namespace ScanModeMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
