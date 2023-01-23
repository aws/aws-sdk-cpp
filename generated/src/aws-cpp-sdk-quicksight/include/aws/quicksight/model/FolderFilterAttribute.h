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
  enum class FolderFilterAttribute
  {
    NOT_SET,
    PARENT_FOLDER_ARN,
    DIRECT_QUICKSIGHT_OWNER,
    DIRECT_QUICKSIGHT_SOLE_OWNER,
    DIRECT_QUICKSIGHT_VIEWER_OR_OWNER,
    QUICKSIGHT_OWNER,
    QUICKSIGHT_VIEWER_OR_OWNER,
    FOLDER_NAME
  };

namespace FolderFilterAttributeMapper
{
AWS_QUICKSIGHT_API FolderFilterAttribute GetFolderFilterAttributeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFolderFilterAttribute(FolderFilterAttribute value);
} // namespace FolderFilterAttributeMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
