﻿/**
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
  enum class QueryNetwork
  {
    NOT_SET,
    ETHEREUM_MAINNET,
    BITCOIN_MAINNET
  };

namespace QueryNetworkMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API QueryNetwork GetQueryNetworkForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForQueryNetwork(QueryNetwork value);
} // namespace QueryNetworkMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
