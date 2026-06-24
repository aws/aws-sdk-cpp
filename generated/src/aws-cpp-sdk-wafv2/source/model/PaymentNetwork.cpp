/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/PaymentNetwork.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

PaymentNetwork::PaymentNetwork(JsonView jsonValue) { *this = jsonValue; }

PaymentNetwork& PaymentNetwork::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Chain")) {
    m_chain = BlockchainChainMapper::GetBlockchainChainForName(jsonValue.GetString("Chain"));
    m_chainHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WalletAddress")) {
    m_walletAddress = jsonValue.GetString("WalletAddress");
    m_walletAddressHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Prices")) {
    Aws::Utils::Array<JsonView> pricesJsonList = jsonValue.GetArray("Prices");
    for (unsigned pricesIndex = 0; pricesIndex < pricesJsonList.GetLength(); ++pricesIndex) {
      m_prices.push_back(pricesJsonList[pricesIndex].AsObject());
    }
    m_pricesHasBeenSet = true;
  }
  return *this;
}

JsonValue PaymentNetwork::Jsonize() const {
  JsonValue payload;

  if (m_chainHasBeenSet) {
    payload.WithString("Chain", BlockchainChainMapper::GetNameForBlockchainChain(m_chain));
  }

  if (m_walletAddressHasBeenSet) {
    payload.WithString("WalletAddress", m_walletAddress);
  }

  if (m_pricesHasBeenSet) {
    Aws::Utils::Array<JsonValue> pricesJsonList(m_prices.size());
    for (unsigned pricesIndex = 0; pricesIndex < pricesJsonList.GetLength(); ++pricesIndex) {
      pricesJsonList[pricesIndex].AsObject(m_prices[pricesIndex].Jsonize());
    }
    payload.WithArray("Prices", std::move(pricesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
