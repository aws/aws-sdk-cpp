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
  enum class H264EntropyEncoding
  {
    NOT_SET,
    CABAC,
    CAVLC
  };

namespace H264EntropyEncodingMapper
{
AWS_MEDIALIVE_API H264EntropyEncoding GetH264EntropyEncodingForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264EntropyEncoding(H264EntropyEncoding value);
} // namespace H264EntropyEncodingMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
