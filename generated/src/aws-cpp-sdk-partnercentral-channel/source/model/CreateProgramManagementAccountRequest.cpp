/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-channel/model/CreateProgramManagementAccountRequest.h>

#include <utility>

using namespace Aws::PartnerCentralChannel::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateProgramManagementAccountRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("catalog", m_catalog);
  }

  if (m_programHasBeenSet) {
    payload.WithString("program", ProgramMapper::GetNameForProgram(m_program));
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("displayName", m_displayName);
  }

  if (m_accountIdHasBeenSet) {
    payload.WithString("accountId", m_accountId);
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateProgramManagementAccountRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PartnerCentralChannel.CreateProgramManagementAccount"));
  return headers;
}
