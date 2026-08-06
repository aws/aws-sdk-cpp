/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-discovery/model/NetPaymentTerm.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace MarketplaceDiscovery {
namespace Model {

NetPaymentTerm::NetPaymentTerm(JsonView jsonValue) { *this = jsonValue; }

NetPaymentTerm& NetPaymentTerm::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("type")) {
    m_type = TermTypeMapper::GetTermTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("paymentDuePeriod")) {
    m_paymentDuePeriod = jsonValue.GetString("paymentDuePeriod");
    m_paymentDuePeriodHasBeenSet = true;
  }
  return *this;
}

JsonValue NetPaymentTerm::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", TermTypeMapper::GetNameForTermType(m_type));
  }

  if (m_paymentDuePeriodHasBeenSet) {
    payload.WithString("paymentDuePeriod", m_paymentDuePeriod);
  }

  return payload;
}

}  // namespace Model
}  // namespace MarketplaceDiscovery
}  // namespace Aws
