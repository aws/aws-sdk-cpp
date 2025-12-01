/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/ConnectionInvitationSummary.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

ConnectionInvitationSummary::ConnectionInvitationSummary(JsonView jsonValue) { *this = jsonValue; }

ConnectionInvitationSummary& ConnectionInvitationSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Catalog")) {
    m_catalog = jsonValue.GetString("Catalog");
    m_catalogHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectionId")) {
    m_connectionId = jsonValue.GetString("ConnectionId");
    m_connectionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ConnectionType")) {
    m_connectionType = ConnectionTypeMapper::GetConnectionTypeForName(jsonValue.GetString("ConnectionType"));
    m_connectionTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedAt")) {
    m_createdAt = jsonValue.GetString("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UpdatedAt")) {
    m_updatedAt = jsonValue.GetString("UpdatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExpiresAt")) {
    m_expiresAt = jsonValue.GetString("ExpiresAt");
    m_expiresAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("OtherParticipantIdentifier")) {
    m_otherParticipantIdentifier = jsonValue.GetString("OtherParticipantIdentifier");
    m_otherParticipantIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ParticipantType")) {
    m_participantType = ParticipantTypeMapper::GetParticipantTypeForName(jsonValue.GetString("ParticipantType"));
    m_participantTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = InvitationStatusMapper::GetInvitationStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue ConnectionInvitationSummary::Jsonize() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_connectionIdHasBeenSet) {
    payload.WithString("ConnectionId", m_connectionId);
  }

  if (m_connectionTypeHasBeenSet) {
    payload.WithString("ConnectionType", ConnectionTypeMapper::GetNameForConnectionType(m_connectionType));
  }

  if (m_createdAtHasBeenSet) {
    payload.WithString("CreatedAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithString("UpdatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_expiresAtHasBeenSet) {
    payload.WithString("ExpiresAt", m_expiresAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_otherParticipantIdentifierHasBeenSet) {
    payload.WithString("OtherParticipantIdentifier", m_otherParticipantIdentifier);
  }

  if (m_participantTypeHasBeenSet) {
    payload.WithString("ParticipantType", ParticipantTypeMapper::GetNameForParticipantType(m_participantType));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", InvitationStatusMapper::GetNameForInvitationStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
