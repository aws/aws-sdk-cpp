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
  enum class H265RateControlMode
  {
    NOT_SET,
    CBR,
    MULTIPLEX,
    QVBR
  };

namespace H265RateControlModeMapper
{
AWS_MEDIALIVE_API H265RateControlMode GetH265RateControlModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForH265RateControlMode(H265RateControlMode value);
} // namespace H265RateControlModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
