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
  enum class QueryTokenStandard
  {
    NOT_SET,
    ERC20,
    ERC721,
    ERC1155
  };

namespace QueryTokenStandardMapper
{
AWS_MANAGEDBLOCKCHAINQUERY_API QueryTokenStandard GetQueryTokenStandardForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAINQUERY_API Aws::String GetNameForQueryTokenStandard(QueryTokenStandard value);
} // namespace QueryTokenStandardMapper
} // namespace Model
} // namespace ManagedBlockchainQuery
} // namespace Aws
