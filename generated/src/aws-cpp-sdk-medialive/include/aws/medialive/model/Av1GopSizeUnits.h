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
  enum class Av1GopSizeUnits
  {
    NOT_SET,
    FRAMES,
    SECONDS
  };

namespace Av1GopSizeUnitsMapper
{
AWS_MEDIALIVE_API Av1GopSizeUnits GetAv1GopSizeUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForAv1GopSizeUnits(Av1GopSizeUnits value);
} // namespace Av1GopSizeUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
