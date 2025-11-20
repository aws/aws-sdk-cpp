/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/organizations/model/InviteOrganizationToTransferResponsibilityRequest.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InviteOrganizationToTransferResponsibilityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ResponsibilityTransferTypeMapper::GetNameForResponsibilityTransferType(m_type));
  }

  if (m_targetHasBeenSet) {
    payload.WithObject("Target", m_target.Jsonize());
  }

  if (m_notesHasBeenSet) {
    payload.WithString("Notes", m_notes);
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithDouble("StartTimestamp", m_startTimestamp.SecondsWithMSPrecision());
  }

  if (m_sourceNameHasBeenSet) {
    payload.WithString("SourceName", m_sourceName);
  }

  if (m_tagsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
    for (unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex) {
      tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
    }
    payload.WithArray("Tags", std::move(tagsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InviteOrganizationToTransferResponsibilityRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSOrganizationsV20161128.InviteOrganizationToTransferResponsibility"));
  return headers;
}
