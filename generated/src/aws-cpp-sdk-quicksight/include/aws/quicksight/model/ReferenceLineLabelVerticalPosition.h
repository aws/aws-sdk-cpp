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
  enum class ReferenceLineLabelVerticalPosition
  {
    NOT_SET,
    ABOVE,
    BELOW
  };

namespace ReferenceLineLabelVerticalPositionMapper
{
AWS_QUICKSIGHT_API ReferenceLineLabelVerticalPosition GetReferenceLineLabelVerticalPositionForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForReferenceLineLabelVerticalPosition(ReferenceLineLabelVerticalPosition value);
} // namespace ReferenceLineLabelVerticalPositionMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
