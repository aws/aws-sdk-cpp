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
  enum class FolderType
  {
    NOT_SET,
    SHARED,
    RESTRICTED
  };

namespace FolderTypeMapper
{
AWS_QUICKSIGHT_API FolderType GetFolderTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFolderType(FolderType value);
} // namespace FolderTypeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
