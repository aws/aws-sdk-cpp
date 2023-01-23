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
  enum class WavCodingMode
  {
    NOT_SET,
    CODING_MODE_1_0,
    CODING_MODE_2_0,
    CODING_MODE_4_0,
    CODING_MODE_8_0
  };

namespace WavCodingModeMapper
{
AWS_MEDIALIVE_API WavCodingMode GetWavCodingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForWavCodingMode(WavCodingMode value);
} // namespace WavCodingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
