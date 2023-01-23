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
  enum class URLTargetConfiguration
  {
    NOT_SET,
    NEW_TAB,
    NEW_WINDOW,
    SAME_TAB
  };

namespace URLTargetConfigurationMapper
{
AWS_QUICKSIGHT_API URLTargetConfiguration GetURLTargetConfigurationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForURLTargetConfiguration(URLTargetConfiguration value);
} // namespace URLTargetConfigurationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
