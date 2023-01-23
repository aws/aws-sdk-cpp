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
  enum class Eac3SurroundExMode
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    NOT_INDICATED
  };

namespace Eac3SurroundExModeMapper
{
AWS_MEDIALIVE_API Eac3SurroundExMode GetEac3SurroundExModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3SurroundExMode(Eac3SurroundExMode value);
} // namespace Eac3SurroundExModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
