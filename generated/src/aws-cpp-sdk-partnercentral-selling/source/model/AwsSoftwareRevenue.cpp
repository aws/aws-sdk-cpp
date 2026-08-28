/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/AwsSoftwareRevenue.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

AwsSoftwareRevenue::AwsSoftwareRevenue(JsonView jsonValue) { *this = jsonValue; }

AwsSoftwareRevenue& AwsSoftwareRevenue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetObject("Value");
    m_valueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Discount")) {
    m_discount = jsonValue.GetString("Discount");
    m_discountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EffectiveDate")) {
    m_effectiveDate = jsonValue.GetString("EffectiveDate");
    m_effectiveDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpirationDate")) {
    m_expirationDate = jsonValue.GetString("ExpirationDate");
    m_expirationDateHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsSoftwareRevenue::Jsonize() const {
  JsonValue payload;

  if (m_valueHasBeenSet) {
    payload.WithObject("Value", m_value.Jsonize());
  }

  if (m_discountHasBeenSet) {
    payload.WithString("Discount", m_discount);
  }

  if (m_effectiveDateHasBeenSet) {
    payload.WithString("EffectiveDate", m_effectiveDate);
  }

  if (m_expirationDateHasBeenSet) {
    payload.WithString("ExpirationDate", m_expirationDate);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
