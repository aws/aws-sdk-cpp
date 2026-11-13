/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/wafv2/model/ConnectedAccountChain.h>

using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {
namespace ConnectedAccountChainMapper {

static const int BASE_HASH = HashingUtils::HashString("BASE");
static const int SOLANA_HASH = HashingUtils::HashString("SOLANA");

ConnectedAccountChain GetConnectedAccountChainForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == BASE_HASH) {
    return ConnectedAccountChain::BASE;
  } else if (hashCode == SOLANA_HASH) {
    return ConnectedAccountChain::SOLANA;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ConnectedAccountChain>(hashCode);
  }

  return ConnectedAccountChain::NOT_SET;
}

Aws::String GetNameForConnectedAccountChain(ConnectedAccountChain enumValue) {
  switch (enumValue) {
    case ConnectedAccountChain::NOT_SET:
      return {};
    case ConnectedAccountChain::BASE:
      return "BASE";
    case ConnectedAccountChain::SOLANA:
      return "SOLANA";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ConnectedAccountChainMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
