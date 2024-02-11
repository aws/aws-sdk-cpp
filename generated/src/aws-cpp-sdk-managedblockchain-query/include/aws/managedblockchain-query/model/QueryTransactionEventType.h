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
  enum class QueryTransactionEventType
  {
    NOT_SET,
    ERC20_TRANSFER,
    ERC20_MINT,
    ERC20_BURN,
    ERC20_DEPOSIT,
    ERC20_WITHDRAWAL,
    ERC721_TRANSFER,
    ERC1155_TRANSFER,
    BITCOIN_VIN,
    BITCOIN_VOUT,
    INTERNAL_ETH_TRANSFER,
    ETH_TRANSFER
  };

namespace QueryTransactionEventTypeMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API QueryTransactionEventType GetQueryTransactionEventTypeForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForQueryTransactionEventType(QueryTransactionEventType value);
} // namespace QueryTransactionEventTypeMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
