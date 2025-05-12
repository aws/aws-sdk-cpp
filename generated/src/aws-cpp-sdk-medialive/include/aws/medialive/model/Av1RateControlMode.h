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
  enum class Av1RateControlMode
  {
    NOT_SET,
    CBR,
    QVBR
  };

namespace Av1RateControlModeMapper
{
AWS_MEDIALIVE_API Av1RateControlMode GetAv1RateControlModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1RateControlMode(Av1RateControlMode value);
} // namespace Av1RateControlModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
