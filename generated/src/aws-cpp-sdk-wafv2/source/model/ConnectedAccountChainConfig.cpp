/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/ConnectedAccountChainConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

ConnectedAccountChainConfig::ConnectedAccountChainConfig(JsonView jsonValue) { *this = jsonValue; }

ConnectedAccountChainConfig& ConnectedAccountChainConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Chain")) {
    m_chain = ConnectedAccountChainMapper::GetConnectedAccountChainForName(jsonValue.GetString("Chain"));
    m_chainHasBeenSet = true;
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

JsonValue ConnectedAccountChainConfig::Jsonize() const {
  JsonValue payload;

  if (m_chainHasBeenSet) {
    payload.WithString("Chain", ConnectedAccountChainMapper::GetNameForConnectedAccountChain(m_chain));
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
