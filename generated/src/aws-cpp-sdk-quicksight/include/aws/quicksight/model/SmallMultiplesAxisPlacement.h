﻿/**
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
  enum class SmallMultiplesAxisPlacement
  {
    NOT_SET,
    OUTSIDE,
    INSIDE
  };

namespace SmallMultiplesAxisPlacementMapper
{
AWS_QUICKSIGHT_API SmallMultiplesAxisPlacement GetSmallMultiplesAxisPlacementForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSmallMultiplesAxisPlacement(SmallMultiplesAxisPlacement value);
} // namespace SmallMultiplesAxisPlacementMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
