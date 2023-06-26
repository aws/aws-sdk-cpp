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
  enum class SheetContentType
  {
    NOT_SET,
    PAGINATED,
    INTERACTIVE
  };

namespace SheetContentTypeMapper
{
AWS_QUICKSIGHT_API SheetContentType GetSheetContentTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForSheetContentType(SheetContentType value);
} // namespace SheetContentTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
