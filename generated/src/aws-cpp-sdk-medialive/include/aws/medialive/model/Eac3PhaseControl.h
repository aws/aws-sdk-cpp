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
  enum class Eac3PhaseControl
  {
    NOT_SET,
    NO_SHIFT,
    SHIFT_90_DEGREES
  };

namespace Eac3PhaseControlMapper
{
AWS_MEDIALIVE_API Eac3PhaseControl GetEac3PhaseControlForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3PhaseControl(Eac3PhaseControl value);
} // namespace Eac3PhaseControlMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
