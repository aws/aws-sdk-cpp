/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/VariablePaymentTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

VariablePaymentTerm::VariablePaymentTerm(JsonView jsonValue) { *this = jsonValue; }

VariablePaymentTerm& VariablePaymentTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = TermTypeMapper::GetTermTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxTotalChargeAmount")) {
    m_maxTotalChargeAmount = jsonValue.GetString("maxTotalChargeAmount");
    m_maxTotalChargeAmountHasBeenSet = true;
  }
  return *this;
}

JsonValue VariablePaymentTerm::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", TermTypeMapper::GetNameForTermType(m_type));
  }

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_maxTotalChargeAmountHasBeenSet) {
    payload.WithString("maxTotalChargeAmount", m_maxTotalChargeAmount);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
