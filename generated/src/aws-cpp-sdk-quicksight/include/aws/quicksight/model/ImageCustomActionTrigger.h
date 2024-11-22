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
  enum class ImageCustomActionTrigger
  {
    NOT_SET,
    CLICK,
    MENU
  };

namespace ImageCustomActionTriggerMapper
{
AWS_QUICKSIGHT_API ImageCustomActionTrigger GetImageCustomActionTriggerForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForImageCustomActionTrigger(ImageCustomActionTrigger value);
} // namespace ImageCustomActionTriggerMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
