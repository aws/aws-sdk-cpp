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
  enum class QueryTransactionStatus
  {
    NOT_SET,
    FINAL,
    FAILED
  };

namespace QueryTransactionStatusMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API QueryTransactionStatus GetQueryTransactionStatusForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForQueryTransactionStatus(QueryTransactionStatus value);
} // namespace QueryTransactionStatusMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
