/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ManagedBlockchain
{
namespace Model
{
  enum class AccessorNetworkType
  {
    NOT_SET,
    ETHEREUM_GOERLI,
    ETHEREUM_MAINNET,
    ETHEREUM_MAINNET_AND_GOERLI,
    POLYGON_MAINNET,
    POLYGON_MUMBAI
  };

namespace AccessorNetworkTypeMapper
{
AWS_MANAGEDBLOCKCHAIN_API AccessorNetworkType GetAccessorNetworkTypeForName(const Aws::String& name);

AWS_MANAGEDBLOCKCHAIN_API Aws::String GetNameForAccessorNetworkType(AccessorNetworkType value);
} // namespace AccessorNetworkTypeMapper
} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
