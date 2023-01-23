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
  enum class H264ScanType
  {
    NOT_SET,
    INTERLACED,
    PROGRESSIVE
  };

namespace H264ScanTypeMapper
{
AWS_MEDIALIVE_API H264ScanType GetH264ScanTypeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264ScanType(H264ScanType value);
} // namespace H264ScanTypeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
