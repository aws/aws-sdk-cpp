/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-agreement/model/InvoiceBillingPeriod.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgreementService {
namespace Model {

InvoiceBillingPeriod::InvoiceBillingPeriod(JsonView jsonValue) { *this = jsonValue; }

InvoiceBillingPeriod& InvoiceBillingPeriod::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("month")) {
    m_month = jsonValue.GetInteger("month");
    m_monthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("year")) {
    m_year = jsonValue.GetInteger("year");
    m_yearHasBeenSet = true;
  }
  return *this;
}

JsonValue InvoiceBillingPeriod::Jsonize() const {
  JsonValue payload;

  if (m_monthHasBeenSet) {
    payload.WithInteger("month", m_month);
  }

  if (m_yearHasBeenSet) {
    payload.WithInteger("year", m_year);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
