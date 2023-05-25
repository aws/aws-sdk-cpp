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
  enum class Eac3StereoDownmix
  {
    NOT_SET,
    DPL2,
    LO_RO,
    LT_RT,
    NOT_INDICATED
  };

namespace Eac3StereoDownmixMapper
{
AWS_MEDIALIVE_API Eac3StereoDownmix GetEac3StereoDownmixForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3StereoDownmix(Eac3StereoDownmix value);
} // namespace Eac3StereoDownmixMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
