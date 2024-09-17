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
  enum class Av1LookAheadRateControl
  {
    NOT_SET,
    HIGH,
    LOW,
    MEDIUM
  };

namespace Av1LookAheadRateControlMapper
{
AWS_MEDIALIVE_API Av1LookAheadRateControl GetAv1LookAheadRateControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1LookAheadRateControl(Av1LookAheadRateControl value);
} // namespace Av1LookAheadRateControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
