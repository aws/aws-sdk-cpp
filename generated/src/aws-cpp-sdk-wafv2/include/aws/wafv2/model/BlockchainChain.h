/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class BlockchainChain { NOT_SET, BASE, SOLANA, BASE_SEPOLIA, SOLANA_DEVNET };

namespace BlockchainChainMapper {
AWS_WAFV2_API BlockchainChain GetBlockchainChainForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForBlockchainChain(BlockchainChain value);
}  // namespace BlockchainChainMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
