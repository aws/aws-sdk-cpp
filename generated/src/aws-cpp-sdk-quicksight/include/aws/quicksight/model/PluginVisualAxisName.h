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
  enum class PluginVisualAxisName
  {
    NOT_SET,
    GROUP_BY,
    VALUE
  };

namespace PluginVisualAxisNameMapper
{
AWS_QUICKSIGHT_API PluginVisualAxisName GetPluginVisualAxisNameForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPluginVisualAxisName(PluginVisualAxisName value);
} // namespace PluginVisualAxisNameMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
