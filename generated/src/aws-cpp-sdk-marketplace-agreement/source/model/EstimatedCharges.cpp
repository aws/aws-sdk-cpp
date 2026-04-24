/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/EstimatedCharges.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

EstimatedCharges::EstimatedCharges(JsonView jsonValue) { *this = jsonValue; }

EstimatedCharges& EstimatedCharges::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("currencyCode")) {
    m_currencyCode = jsonValue.GetString("currencyCode");
    m_currencyCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("agreementValue")) {
    m_agreementValue = jsonValue.GetString("agreementValue");
    m_agreementValueHasBeenSet = true;
  }
  return *this;
}

JsonValue EstimatedCharges::Jsonize() const {
  JsonValue payload;

  if (m_currencyCodeHasBeenSet) {
    payload.WithString("currencyCode", m_currencyCode);
  }

  if (m_agreementValueHasBeenSet) {
    payload.WithString("agreementValue", m_agreementValue);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
