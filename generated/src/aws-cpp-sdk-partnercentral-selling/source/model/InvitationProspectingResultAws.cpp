/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/InvitationProspectingResultAws.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

InvitationProspectingResultAws::InvitationProspectingResultAws(JsonView jsonValue) { *this = jsonValue; }

InvitationProspectingResultAws& InvitationProspectingResultAws::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Insights")) {
    m_insights = jsonValue.GetObject("Insights");
    m_insightsHasBeenSet = true;
  }
  return *this;
}

JsonValue InvitationProspectingResultAws::Jsonize() const {
  JsonValue payload;

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_insightsHasBeenSet) {
    payload.WithObject("Insights", m_insights.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
