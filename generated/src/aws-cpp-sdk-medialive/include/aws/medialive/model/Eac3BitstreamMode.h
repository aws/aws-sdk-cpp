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
  enum class Eac3BitstreamMode
  {
    NOT_SET,
    COMMENTARY,
    COMPLETE_MAIN,
    EMERGENCY,
    HEARING_IMPAIRED,
    VISUALLY_IMPAIRED
  };

namespace Eac3BitstreamModeMapper
{
AWS_MEDIALIVE_API Eac3BitstreamMode GetEac3BitstreamModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3BitstreamMode(Eac3BitstreamMode value);
} // namespace Eac3BitstreamModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
