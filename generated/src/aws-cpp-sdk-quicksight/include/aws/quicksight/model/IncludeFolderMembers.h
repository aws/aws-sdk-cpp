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
  enum class IncludeFolderMembers
  {
    NOT_SET,
    RECURSE,
    ONE_LEVEL,
    NONE
  };

namespace IncludeFolderMembersMapper
{
AWS_QUICKSIGHT_API IncludeFolderMembers GetIncludeFolderMembersForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForIncludeFolderMembers(IncludeFolderMembers value);
} // namespace IncludeFolderMembersMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
