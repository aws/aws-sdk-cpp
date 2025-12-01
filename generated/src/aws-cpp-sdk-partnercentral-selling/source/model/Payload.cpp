/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/Payload.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

Payload::Payload(JsonView jsonValue) { *this = jsonValue; }

Payload& Payload::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("OpportunityInvitation")) {
    m_opportunityInvitation = jsonValue.GetObject("OpportunityInvitation");
    m_opportunityInvitationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LeadInvitation")) {
    m_leadInvitation = jsonValue.GetObject("LeadInvitation");
    m_leadInvitationHasBeenSet = true;
  }
  return *this;
}

JsonValue Payload::Jsonize() const {
  JsonValue payload;

  if (m_opportunityInvitationHasBeenSet) {
    payload.WithObject("OpportunityInvitation", m_opportunityInvitation.Jsonize());
  }

  if (m_leadInvitationHasBeenSet) {
    payload.WithObject("LeadInvitation", m_leadInvitation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
