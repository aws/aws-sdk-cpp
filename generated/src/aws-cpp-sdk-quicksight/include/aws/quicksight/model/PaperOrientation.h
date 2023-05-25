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
  enum class PaperOrientation
  {
    NOT_SET,
    PORTRAIT,
    LANDSCAPE
  };

namespace PaperOrientationMapper
{
AWS_QUICKSIGHT_API PaperOrientation GetPaperOrientationForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForPaperOrientation(PaperOrientation value);
} // namespace PaperOrientationMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
