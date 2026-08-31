/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/support/model/AddCommunicationToCaseRequest.h>

#include <utility>

using namespace Aws::Support::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AddCommunicationToCaseRequest::SerializePayload() const {
  JsonValue payload;

  if (m_caseIdHasBeenSet) {
    payload.WithString("caseId", m_caseId);
  }

  if (m_communicationBodyHasBeenSet) {
    payload.WithString("communicationBody", m_communicationBody);
  }

  if (m_ccEmailAddressesHasBeenSet) {
    Aws::Utils::Array<JsonValue> ccEmailAddressesJsonList(m_ccEmailAddresses.size());
    for (unsigned ccEmailAddressesIndex = 0; ccEmailAddressesIndex < ccEmailAddressesJsonList.GetLength(); ++ccEmailAddressesIndex) {
      ccEmailAddressesJsonList[ccEmailAddressesIndex].AsString(m_ccEmailAddresses[ccEmailAddressesIndex]);
    }
    payload.WithArray("ccEmailAddresses", std::move(ccEmailAddressesJsonList));
  }

  if (m_attachmentSetIdHasBeenSet) {
    payload.WithString("attachmentSetId", m_attachmentSetId);
  }

  if (m_uploadIdsHasBeenSet) {
    Aws::Utils::Array<JsonValue> uploadIdsJsonList(m_uploadIds.size());
    for (unsigned uploadIdsIndex = 0; uploadIdsIndex < uploadIdsJsonList.GetLength(); ++uploadIdsIndex) {
      uploadIdsJsonList[uploadIdsIndex].AsString(m_uploadIds[uploadIdsIndex]);
    }
    payload.WithArray("uploadIds", std::move(uploadIdsJsonList));
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("dryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AddCommunicationToCaseRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSSupport_20130415.AddCommunicationToCase"));
  return headers;
}
