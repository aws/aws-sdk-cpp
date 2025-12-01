/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/ConnectionTypeSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

ConnectionTypeSummary::ConnectionTypeSummary(JsonView jsonValue) { *this = jsonValue; }

ConnectionTypeSummary& ConnectionTypeSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Status")) {
    m_status = ConnectionTypeStatusMapper::GetConnectionTypeStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OtherParticipant")) {
    m_otherParticipant = jsonValue.GetObject("OtherParticipant");
    m_otherParticipantHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionTypeSummary::Jsonize() const {
  JsonValue payload;

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ConnectionTypeStatusMapper::GetNameForConnectionTypeStatus(m_status));
  }

  if (m_otherParticipantHasBeenSet) {
    payload.WithObject("OtherParticipant", m_otherParticipant.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
