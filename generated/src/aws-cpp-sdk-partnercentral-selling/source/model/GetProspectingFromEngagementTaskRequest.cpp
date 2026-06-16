/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/GetProspectingFromEngagementTaskRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetProspectingFromEngagementTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_taskIdentifierHasBeenSet) {
    payload.WithString("TaskIdentifier", m_taskIdentifier);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetProspectingFromEngagementTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.GetProspectingFromEngagementTask"));
  return headers;
}
