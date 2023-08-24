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
  enum class IncludeFillerNalUnits
  {
    NOT_SET,
    AUTO,
    DROP,
    INCLUDE
  };

namespace IncludeFillerNalUnitsMapper
{
AWS_MEDIALIVE_API IncludeFillerNalUnits GetIncludeFillerNalUnitsForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForIncludeFillerNalUnits(IncludeFillerNalUnits value);
} // namespace IncludeFillerNalUnitsMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
