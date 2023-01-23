/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class H265ScanType
  {
    NOT_SET,
    INTERLACED,
    PROGRESSIVE
  };

namespace H265ScanTypeMapper
{
AWS_MEDIALIVE_API H265ScanType GetH265ScanTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265ScanType(H265ScanType value);
} // namespace H265ScanTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
