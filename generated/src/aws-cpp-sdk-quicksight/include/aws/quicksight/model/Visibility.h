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
  enum class Visibility
  {
    NOT_SET,
    HIDDEN,
    VISIBLE
  };

namespace VisibilityMapper
{
AWS_QUICKSIGHT_API Visibility GetVisibilityForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVisibility(Visibility value);
} // namespace VisibilityMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
