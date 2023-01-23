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
  enum class H264Profile
  {
    NOT_SET,
    BASELINE,
    HIGH,
    HIGH_10BIT,
    HIGH_422,
    HIGH_422_10BIT,
    MAIN
  };

namespace H264ProfileMapper
{
AWS_MEDIALIVE_API H264Profile GetH264ProfileForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264Profile(H264Profile value);
} // namespace H264ProfileMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
