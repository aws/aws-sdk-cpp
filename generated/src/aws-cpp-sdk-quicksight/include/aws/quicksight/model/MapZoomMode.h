/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class MapZoomMode
  {
    NOT_SET,
    AUTO,
    MANUAL
  };

namespace MapZoomModeMapper
{
AWS_QUICKSIGHT_API MapZoomMode GetMapZoomModeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForMapZoomMode(MapZoomMode value);
} // namespace MapZoomModeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
