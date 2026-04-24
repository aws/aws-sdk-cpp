/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/LeadContext.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

LeadContext::LeadContext(JsonView jsonValue) { *this = jsonValue; }

LeadContext& LeadContext::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("QualificationStatus")) {
    m_qualificationStatus = jsonValue.GetString("QualificationStatus");
    m_qualificationStatusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Interactions")) {
    Aws::Utils::Array<JsonView> interactionsJsonList = jsonValue.GetArray("Interactions");
    for (unsigned interactionsIndex = 0; interactionsIndex < interactionsJsonList.GetLength(); ++interactionsIndex) {
      m_interactions.push_back(interactionsJsonList[interactionsIndex].AsObject());
    }
    m_interactionsHasBeenSet = true;
  }
  return *this;
}

JsonValue LeadContext::Jsonize() const {
  JsonValue payload;

  if (m_qualificationStatusHasBeenSet) {
    payload.WithString("QualificationStatus", m_qualificationStatus);
  }

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_interactionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> interactionsJsonList(m_interactions.size());
    for (unsigned interactionsIndex = 0; interactionsIndex < interactionsJsonList.GetLength(); ++interactionsIndex) {
      interactionsJsonList[interactionsIndex].AsObject(m_interactions[interactionsIndex].Jsonize());
    }
    payload.WithArray("Interactions", std::move(interactionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
