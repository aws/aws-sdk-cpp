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
  enum class Eac3SurroundMode
  {
    NOT_SET,
    DISABLED,
    ENABLED,
    NOT_INDICATED
  };

namespace Eac3SurroundModeMapper
{
AWS_MEDIALIVE_API Eac3SurroundMode GetEac3SurroundModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForEac3SurroundMode(Eac3SurroundMode value);
} // namespace Eac3SurroundModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
