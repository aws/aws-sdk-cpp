/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/CustomerAccountContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

CustomerAccountContext::CustomerAccountContext(JsonView jsonValue) { *this = jsonValue; }

CustomerAccountContext& CustomerAccountContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AccountIdentifier")) {
    m_accountIdentifier = jsonValue.GetString("AccountIdentifier");
    m_accountIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAccountContext::Jsonize() const {
  JsonValue payload;

  if (m_accountIdentifierHasBeenSet) {
    payload.WithString("AccountIdentifier", m_accountIdentifier);
  }

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
