/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/ConnectionTypeDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

ConnectionTypeDetail::ConnectionTypeDetail(JsonView jsonValue) { *this = jsonValue; }

ConnectionTypeDetail& ConnectionTypeDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InviterEmail")) {
    m_inviterEmail = jsonValue.GetString("InviterEmail");
    m_inviterEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InviterName")) {
    m_inviterName = jsonValue.GetString("InviterName");
    m_inviterNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = ConnectionTypeStatusMapper::GetConnectionTypeStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CanceledAt")) {
    m_canceledAt = jsonValue.GetString("CanceledAt");
    m_canceledAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CanceledBy")) {
    m_canceledBy = jsonValue.GetString("CanceledBy");
    m_canceledByHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OtherParticipant")) {
    m_otherParticipant = jsonValue.GetObject("OtherParticipant");
    m_otherParticipantHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionTypeDetail::Jsonize() const {
  JsonValue payload;

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_inviterEmailHasBeenSet) {
    payload.WithString("InviterEmail", m_inviterEmail);
  }

  if (m_inviterNameHasBeenSet) {
    payload.WithString("InviterName", m_inviterName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", ConnectionTypeStatusMapper::GetNameForConnectionTypeStatus(m_status));
  }

  if (m_canceledAtHasBeenSet) {
    payload.WithString("CanceledAt", m_canceledAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_canceledByHasBeenSet) {
    payload.WithString("CanceledBy", m_canceledBy);
  }

  if (m_otherParticipantHasBeenSet) {
    payload.WithObject("OtherParticipant", m_otherParticipant.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
