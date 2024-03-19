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
  enum class ListFilteredTransactionEventsSortBy
  {
    NOT_SET,
    blockchainInstant
  };

namespace ListFilteredTransactionEventsSortByMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API ListFilteredTransactionEventsSortBy GetListFilteredTransactionEventsSortByForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForListFilteredTransactionEventsSortBy(ListFilteredTransactionEventsSortBy value);
} // namespace ListFilteredTransactionEventsSortByMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
