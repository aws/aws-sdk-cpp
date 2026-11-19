/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/OpportunitySearchCustomer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

OpportunitySearchCustomer::OpportunitySearchCustomer(JsonView jsonValue) { *this = jsonValue; }

OpportunitySearchCustomer& OpportunitySearchCustomer::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Account")) {
    m_account = jsonValue.GetObject("Account");
    m_accountHasBeenSet = true;
  }
  return *this;
}

JsonValue OpportunitySearchCustomer::Jsonize() const {
  JsonValue payload;

  if (m_accountHasBeenSet) {
    payload.WithObject("Account", m_account.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
