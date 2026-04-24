/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/LeadInvitationPayload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

LeadInvitationPayload::LeadInvitationPayload(JsonView jsonValue) { *this = jsonValue; }

LeadInvitationPayload& LeadInvitationPayload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Customer")) {
    m_customer = jsonValue.GetObject("Customer");
    m_customerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Interaction")) {
    m_interaction = jsonValue.GetObject("Interaction");
    m_interactionHasBeenSet = true;
  }
  return *this;
}

JsonValue LeadInvitationPayload::Jsonize() const {
  JsonValue payload;

  if (m_customerHasBeenSet) {
    payload.WithObject("Customer", m_customer.Jsonize());
  }

  if (m_interactionHasBeenSet) {
    payload.WithObject("Interaction", m_interaction.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
