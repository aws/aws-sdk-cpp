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
  enum class Eac3AtmosCodingMode
  {
    NOT_SET,
    CODING_MODE_5_1_4,
    CODING_MODE_7_1_4,
    CODING_MODE_9_1_6
  };

namespace Eac3AtmosCodingModeMapper
{
AWS_MEDIALIVE_API Eac3AtmosCodingMode GetEac3AtmosCodingModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3AtmosCodingMode(Eac3AtmosCodingMode value);
} // namespace Eac3AtmosCodingModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
