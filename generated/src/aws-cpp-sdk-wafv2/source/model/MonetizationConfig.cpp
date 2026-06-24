/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wafv2/model/MonetizationConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WAFV2 {
namespace Model {

MonetizationConfig::MonetizationConfig(JsonView jsonValue) { *this = jsonValue; }

MonetizationConfig& MonetizationConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CryptoConfig")) {
    m_cryptoConfig = jsonValue.GetObject("CryptoConfig");
    m_cryptoConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CurrencyMode")) {
    m_currencyMode = CurrencyModeMapper::GetCurrencyModeForName(jsonValue.GetString("CurrencyMode"));
    m_currencyModeHasBeenSet = true;
  }
  return *this;
}

JsonValue MonetizationConfig::Jsonize() const {
  JsonValue payload;

  if (m_cryptoConfigHasBeenSet) {
    payload.WithObject("CryptoConfig", m_cryptoConfig.Jsonize());
  }

  if (m_currencyModeHasBeenSet) {
    payload.WithString("CurrencyMode", CurrencyModeMapper::GetNameForCurrencyMode(m_currencyMode));
  }

  return payload;
}

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
