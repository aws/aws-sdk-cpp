/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-selling/model/StartOpportunityBulkJobRequest.h>

#include <utility>

using namespace Aws::PartnerCentralSelling::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartOpportunityBulkJobRequest::SerializePayload() const {
  JsonValue payload;

  if (m_catalogHasBeenSet) {
    payload.WithString("Catalog", m_catalog);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  if (m_fileURIHasBeenSet) {
    payload.WithString("FileURI", m_fileURI);
  }

  if (m_fileFormatHasBeenSet) {
    payload.WithString("FileFormat", BulkFileFormatMapper::GetNameForBulkFileFormat(m_fileFormat));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection StartOpportunityBulkJobRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSPartnerCentralSelling.StartOpportunityBulkJob"));
  return headers;
}
