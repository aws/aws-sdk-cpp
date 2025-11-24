/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/odb/model/UpdateOdbNetworkRequest.h>

#include <utility>

using namespace Aws::odb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateOdbNetworkRequest::SerializePayload() const {
  JsonValue payload;

  if (m_odbNetworkIdHasBeenSet) {
    payload.WithString("odbNetworkId", m_odbNetworkId);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_peeredCidrsToBeAddedHasBeenSet) {
    Aws::Utils::Array<JsonValue> peeredCidrsToBeAddedJsonList(m_peeredCidrsToBeAdded.size());
    for (unsigned peeredCidrsToBeAddedIndex = 0; peeredCidrsToBeAddedIndex < peeredCidrsToBeAddedJsonList.GetLength();
         ++peeredCidrsToBeAddedIndex) {
      peeredCidrsToBeAddedJsonList[peeredCidrsToBeAddedIndex].AsString(m_peeredCidrsToBeAdded[peeredCidrsToBeAddedIndex]);
    }
    payload.WithArray("peeredCidrsToBeAdded", std::move(peeredCidrsToBeAddedJsonList));
  }

  if (m_peeredCidrsToBeRemovedHasBeenSet) {
    Aws::Utils::Array<JsonValue> peeredCidrsToBeRemovedJsonList(m_peeredCidrsToBeRemoved.size());
    for (unsigned peeredCidrsToBeRemovedIndex = 0; peeredCidrsToBeRemovedIndex < peeredCidrsToBeRemovedJsonList.GetLength();
         ++peeredCidrsToBeRemovedIndex) {
      peeredCidrsToBeRemovedJsonList[peeredCidrsToBeRemovedIndex].AsString(m_peeredCidrsToBeRemoved[peeredCidrsToBeRemovedIndex]);
    }
    payload.WithArray("peeredCidrsToBeRemoved", std::move(peeredCidrsToBeRemovedJsonList));
  }

  if (m_s3AccessHasBeenSet) {
    payload.WithString("s3Access", AccessMapper::GetNameForAccess(m_s3Access));
  }

  if (m_zeroEtlAccessHasBeenSet) {
    payload.WithString("zeroEtlAccess", AccessMapper::GetNameForAccess(m_zeroEtlAccess));
  }

  if (m_stsAccessHasBeenSet) {
    payload.WithString("stsAccess", AccessMapper::GetNameForAccess(m_stsAccess));
  }

  if (m_kmsAccessHasBeenSet) {
    payload.WithString("kmsAccess", AccessMapper::GetNameForAccess(m_kmsAccess));
  }

  if (m_s3PolicyDocumentHasBeenSet) {
    payload.WithString("s3PolicyDocument", m_s3PolicyDocument);
  }

  if (m_stsPolicyDocumentHasBeenSet) {
    payload.WithString("stsPolicyDocument", m_stsPolicyDocument);
  }

  if (m_kmsPolicyDocumentHasBeenSet) {
    payload.WithString("kmsPolicyDocument", m_kmsPolicyDocument);
  }

  if (m_crossRegionS3RestoreSourcesToEnableHasBeenSet) {
    Aws::Utils::Array<JsonValue> crossRegionS3RestoreSourcesToEnableJsonList(m_crossRegionS3RestoreSourcesToEnable.size());
    for (unsigned crossRegionS3RestoreSourcesToEnableIndex = 0;
         crossRegionS3RestoreSourcesToEnableIndex < crossRegionS3RestoreSourcesToEnableJsonList.GetLength();
         ++crossRegionS3RestoreSourcesToEnableIndex) {
      crossRegionS3RestoreSourcesToEnableJsonList[crossRegionS3RestoreSourcesToEnableIndex].AsString(
          m_crossRegionS3RestoreSourcesToEnable[crossRegionS3RestoreSourcesToEnableIndex]);
    }
    payload.WithArray("crossRegionS3RestoreSourcesToEnable", std::move(crossRegionS3RestoreSourcesToEnableJsonList));
  }

  if (m_crossRegionS3RestoreSourcesToDisableHasBeenSet) {
    Aws::Utils::Array<JsonValue> crossRegionS3RestoreSourcesToDisableJsonList(m_crossRegionS3RestoreSourcesToDisable.size());
    for (unsigned crossRegionS3RestoreSourcesToDisableIndex = 0;
         crossRegionS3RestoreSourcesToDisableIndex < crossRegionS3RestoreSourcesToDisableJsonList.GetLength();
         ++crossRegionS3RestoreSourcesToDisableIndex) {
      crossRegionS3RestoreSourcesToDisableJsonList[crossRegionS3RestoreSourcesToDisableIndex].AsString(
          m_crossRegionS3RestoreSourcesToDisable[crossRegionS3RestoreSourcesToDisableIndex]);
    }
    payload.WithArray("crossRegionS3RestoreSourcesToDisable", std::move(crossRegionS3RestoreSourcesToDisableJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateOdbNetworkRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Odb.UpdateOdbNetwork"));
  return headers;
}
