/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/CryptoConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

CryptoConfig::CryptoConfig(JsonView jsonValue) { *this = jsonValue; }

CryptoConfig& CryptoConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("PaymentNetworks")) {
    Aws::Utils::Array<JsonView> paymentNetworksJsonList = jsonValue.GetArray("PaymentNetworks");
    for (unsigned paymentNetworksIndex = 0; paymentNetworksIndex < paymentNetworksJsonList.GetLength(); ++paymentNetworksIndex) {
      m_paymentNetworks.push_back(paymentNetworksJsonList[paymentNetworksIndex].AsObject());
    }
    m_paymentNetworksHasBeenSet = true;
  }
  return *this;
}

JsonValue CryptoConfig::Jsonize() const {
  JsonValue payload;

  if (m_paymentNetworksHasBeenSet) {
    Aws::Utils::Array<JsonValue> paymentNetworksJsonList(m_paymentNetworks.size());
    for (unsigned paymentNetworksIndex = 0; paymentNetworksIndex < paymentNetworksJsonList.GetLength(); ++paymentNetworksIndex) {
      paymentNetworksJsonList[paymentNetworksIndex].AsObject(m_paymentNetworks[paymentNetworksIndex].Jsonize());
    }
    payload.WithArray("PaymentNetworks", std::move(paymentNetworksJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
