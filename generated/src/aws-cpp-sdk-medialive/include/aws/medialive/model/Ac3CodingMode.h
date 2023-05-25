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
  enum class Ac3CodingMode
  {
    NOT_SET,
    CODING_MODE_1_0,
    CODING_MODE_1_1,
    CODING_MODE_2_0,
    CODING_MODE_3_2_LFE
  };

namespace Ac3CodingModeMapper
{
AWS_MEDIALIVE_API Ac3CodingMode GetAc3CodingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAc3CodingMode(Ac3CodingMode value);
} // namespace Ac3CodingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
