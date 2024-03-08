/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain-query/ManagedBlockchainQuery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchainQuery
{
namespace Model
{
  enum class ExecutionStatus
  {
    NOT_SET,
    FAILED,
    SUCCEEDED
  };

namespace ExecutionStatusMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API ExecutionStatus GetExecutionStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForExecutionStatus(ExecutionStatus value);
} // namespace ExecutionStatusMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
