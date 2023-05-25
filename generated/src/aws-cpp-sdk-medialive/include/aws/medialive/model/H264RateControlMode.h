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
  enum class H264RateControlMode
  {
    NOT_SET,
    CBR,
    MULTIPLEX,
    QVBR,
    VBR
  };

namespace H264RateControlModeMapper
{
AWS_MEDIALIVE_API H264RateControlMode GetH264RateControlModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH264RateControlMode(H264RateControlMode value);
} // namespace H264RateControlModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
