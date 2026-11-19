/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/CustomerAccountDetailsSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

CustomerAccountDetailsSummary::CustomerAccountDetailsSummary(JsonView jsonValue) { *this = jsonValue; }

CustomerAccountDetailsSummary& CustomerAccountDetailsSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CompanyName")) {
    m_companyName = jsonValue.GetString("CompanyName");
    m_companyNameHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerAccountDetailsSummary::Jsonize() const {
  JsonValue payload;

  if (m_companyNameHasBeenSet) {
    payload.WithString("CompanyName", m_companyName);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
