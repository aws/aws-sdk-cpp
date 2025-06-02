/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pcs/PCS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PCS
{
namespace Model
{
  enum class ComputeNodeGroupStatus
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    DELETING,
    CREATE_FAILED,
    DELETE_FAILED,
    UPDATE_FAILED,
    DELETED,
    SUSPENDING,
    SUSPENDED
  };

namespace ComputeNodeGroupStatusMapper
{
AWS_PCS_API ComputeNodeGroupStatus GetComputeNodeGroupStatusForName(const Aws::String& name);

AWS_PCS_API Aws::String GetNameForComputeNodeGroupStatus(ComputeNodeGroupStatus value);
} // namespace ComputeNodeGroupStatusMapper
} // namespace Model
} // namespace PCS
} // namespace Aws
