/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class InventoryDeletionStatus
  {
    NOT_SET,
    InProgress,
    Complete
  };

namespace InventoryDeletionStatusMapper
{
AWS_SSM_API InventoryDeletionStatus GetInventoryDeletionStatusForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInventoryDeletionStatus(InventoryDeletionStatus value);
} // namespace InventoryDeletionStatusMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
