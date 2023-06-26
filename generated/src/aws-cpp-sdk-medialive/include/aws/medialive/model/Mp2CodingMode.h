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
  enum class Mp2CodingMode
  {
    NOT_SET,
    CODING_MODE_1_0,
    CODING_MODE_2_0
  };

namespace Mp2CodingModeMapper
{
AWS_MEDIALIVE_API Mp2CodingMode GetMp2CodingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForMp2CodingMode(Mp2CodingMode value);
} // namespace Mp2CodingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
