/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/EngagementProspectingResult.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralSelling {
namespace Model {

EngagementProspectingResult::EngagementProspectingResult(JsonView jsonValue) { *this = jsonValue; }

EngagementProspectingResult& EngagementProspectingResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("EngagementIdentifier")) {
    m_engagementIdentifier = jsonValue.GetString("EngagementIdentifier");
    m_engagementIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EngagementContextId")) {
    m_engagementContextId = jsonValue.GetString("EngagementContextId");
    m_engagementContextIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ProspectingTaskStatusMapper::GetProspectingTaskStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ReasonCode")) {
    m_reasonCode = jsonValue.GetString("ReasonCode");
    m_reasonCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue EngagementProspectingResult::Jsonize() const {
  JsonValue payload;

  if (m_engagementIdentifierHasBeenSet) {
    payload.WithString("EngagementIdentifier", m_engagementIdentifier);
  }

  if (m_engagementContextIdHasBeenSet) {
    payload.WithString("EngagementContextId", m_engagementContextId);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ProspectingTaskStatusMapper::GetNameForProspectingTaskStatus(m_status));
  }

  if (m_reasonCodeHasBeenSet) {
    payload.WithString("ReasonCode", m_reasonCode);
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
