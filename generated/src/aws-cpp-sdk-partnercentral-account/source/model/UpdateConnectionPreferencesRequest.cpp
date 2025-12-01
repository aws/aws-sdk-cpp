/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/UpdateConnectionPreferencesRequest.h>

#include <utility>

using namespace Aws::PartnerCentralAccount::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateConnectionPreferencesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_revisionHasBeenSet) {
    payload.WithInt64("Revision", m_revision);
  }

  if (m_accessTypeHasBeenSet) {
    payload.WithString("AccessType", AccessTypeMapper::GetNameForAccessType(m_accessType));
  }

  if (m_excludedParticipantIdentifiersHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedParticipantIdentifiersJsonList(m_excludedParticipantIdentifiers.size());
    for (unsigned excludedParticipantIdentifiersIndex = 0;
         excludedParticipantIdentifiersIndex < excludedParticipantIdentifiersJsonList.GetLength(); ++excludedParticipantIdentifiersIndex) {
      excludedParticipantIdentifiersJsonList[excludedParticipantIdentifiersIndex].AsString(
          m_excludedParticipantIdentifiers[excludedParticipantIdentifiersIndex]);
    }
    payload.WithArray("ExcludedParticipantIdentifiers", std::move(excludedParticipantIdentifiersJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateConnectionPreferencesRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralAccount.UpdateConnectionPreferences"));
  return headers;
}
