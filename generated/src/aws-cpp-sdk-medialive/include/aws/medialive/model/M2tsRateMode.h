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
  enum class M2tsRateMode
  {
    NOT_SET,
    CBR,
    VBR
  };

namespace M2tsRateModeMapper
{
AWS_MEDIALIVE_API M2tsRateMode GetM2tsRateModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForM2tsRateMode(M2tsRateMode value);
} // namespace M2tsRateModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
