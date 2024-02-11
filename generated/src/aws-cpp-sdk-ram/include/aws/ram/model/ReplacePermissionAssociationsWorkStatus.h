/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace RAM
{
namespace Model
{
  enum class ReplacePermissionAssociationsWorkStatus
  {
    NOT_SET,
    IN_PROGRESS,
    COMPLETED,
    FAILED
  };

namespace ReplacePermissionAssociationsWorkStatusMapper
{
AWS_RAM_API ReplacePermissionAssociationsWorkStatus GetReplacePermissionAssociationsWorkStatusForName(const Aws::String& name);

AWS_RAM_API Aws::String GetNameForReplacePermissionAssociationsWorkStatus(ReplacePermissionAssociationsWorkStatus value);
} // namespace ReplacePermissionAssociationsWorkStatusMapper
} // namespace Model
} // namespace RAM
} // namespace Aws
