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
  enum class AnchorType
  {
    NOT_SET,
    TODAY
  };

namespace AnchorTypeMapper
{
AWS_QUICKSIGHT_API AnchorType GetAnchorTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForAnchorType(AnchorType value);
} // namespace AnchorTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
