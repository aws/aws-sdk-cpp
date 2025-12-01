/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/partnercentral-account/model/GetConnectionInvitationResult.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConnectionInvitationResult::GetConnectionInvitationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetConnectionInvitationResult& GetConnectionInvitationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
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
  if (jsonValue.ValueExists("InvitationMessage")) {
    m_invitationMessage = jsonValue.GetString("InvitationMessage");
    m_invitationMessageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InviterEmail")) {
    m_inviterEmail = jsonValue.GetString("InviterEmail");
    m_inviterEmailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InviterName")) {
    m_inviterName = jsonValue.GetString("InviterName");
    m_inviterNameHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
