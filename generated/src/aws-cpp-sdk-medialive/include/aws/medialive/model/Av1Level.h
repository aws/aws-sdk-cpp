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
  enum class Av1Level
  {
    NOT_SET,
    AV1_LEVEL_2,
    AV1_LEVEL_2_1,
    AV1_LEVEL_3,
    AV1_LEVEL_3_1,
    AV1_LEVEL_4,
    AV1_LEVEL_4_1,
    AV1_LEVEL_5,
    AV1_LEVEL_5_1,
    AV1_LEVEL_5_2,
    AV1_LEVEL_5_3,
    AV1_LEVEL_6,
    AV1_LEVEL_6_1,
    AV1_LEVEL_6_2,
    AV1_LEVEL_6_3,
    AV1_LEVEL_AUTO
  };

namespace Av1LevelMapper
{
AWS_MEDIALIVE_API Av1Level GetAv1LevelForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1Level(Av1Level value);
} // namespace Av1LevelMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
