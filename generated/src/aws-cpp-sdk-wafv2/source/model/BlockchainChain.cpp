/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/BlockchainChain.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace BlockchainChainMapper {

static const int BASE_HASH = HashingUtils::HashString("BASE");
static const int SOLANA_HASH = HashingUtils::HashString("SOLANA");
static const int BASE_SEPOLIA_HASH = HashingUtils::HashString("BASE_SEPOLIA");
static const int SOLANA_DEVNET_HASH = HashingUtils::HashString("SOLANA_DEVNET");

BlockchainChain GetBlockchainChainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASE_HASH) {
    return BlockchainChain::BASE;
  } else if (hashCode == SOLANA_HASH) {
    return BlockchainChain::SOLANA;
  } else if (hashCode == BASE_SEPOLIA_HASH) {
    return BlockchainChain::BASE_SEPOLIA;
  } else if (hashCode == SOLANA_DEVNET_HASH) {
    return BlockchainChain::SOLANA_DEVNET;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<BlockchainChain>(hashCode);
  }

  return BlockchainChain::NOT_SET;
}

Aws::String GetNameForBlockchainChain(BlockchainChain enumValue) {
  switch (enumValue) {
    case BlockchainChain::NOT_SET:
      return {};
    case BlockchainChain::BASE:
      return "BASE";
    case BlockchainChain::SOLANA:
      return "SOLANA";
    case BlockchainChain::BASE_SEPOLIA:
      return "BASE_SEPOLIA";
    case BlockchainChain::SOLANA_DEVNET:
      return "SOLANA_DEVNET";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace BlockchainChainMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
