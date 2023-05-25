/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaTailor
{
namespace Model
{
  enum class Mode
  {
    NOT_SET,
    OFF,
    BEHIND_LIVE_EDGE
  };

namespace ModeMapper
{
AWS_MEDIATAILOR_API Mode GetModeForName(const Aws::String& name);

AWS_MEDIATAILOR_API Aws::String GetNameForMode(Mode value);
} // namespace ModeMapper
} // namespace Model
} // namespace MediaTailor
} // namespace Aws
