/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/CreateRelationshipRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRelationshipRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_associationTypeHasBeenSet) {
    payload.WithString("associationType", AssociationTypeMapper::GetNameForAssociationType(m_associationType));
  }

  if (m_programManagementAccountIdentifierHasBeenSet) {
    payload.WithString("programManagementAccountIdentifier", m_programManagementAccountIdentifier);
  }

  if (m_associatedAccountIdHasBeenSet) {
    payload.WithString("associatedAccountId", m_associatedAccountId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_resaleAccountModelHasBeenSet) {
    payload.WithString("resaleAccountModel", ResaleAccountModelMapper::GetNameForResaleAccountModel(m_resaleAccountModel));
  }

  if (m_sectorHasBeenSet) {
    payload.WithString("sector", SectorMapper::GetNameForSector(m_sector));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("tags", std::move(tagsJsonList));
  }

  if (m_requestedSupportPlanHasBeenSet) {
    payload.WithObject("requestedSupportPlan", m_requestedSupportPlan.Jsonize());
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateRelationshipRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.CreateRelationship"));
  return headers;
}
